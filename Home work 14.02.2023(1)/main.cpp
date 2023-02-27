#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <windows.h>


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	std::vector<int> vec{ 2, 4, 5, 7, 11, 25, 8, 89, 45, 22 };
   
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ) {
        if (*it % 2 != 0) {
            it = vec.erase(it);
        }
        else {
            ++it;
        }
    }
    for (auto el : vec)
        std::cout << el << " ";
 

}


