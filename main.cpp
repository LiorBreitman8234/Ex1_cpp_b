#include "mat.hpp"

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int choice = -1;
    while(choice != 0 && !std::cin.fail())
    {
        std::cout << "press 1 to create a mat, 0 to exit ";
        std::cin >> choice;
        if(choice == 1 && !std::cin.fail())
        {
            try {
                int length, height;
                char symbol1,symbol2;
                std::cout << "enter length of mat: ";
                std::cin >> length;
                std::cout << "enter height of mat: ";
                std::cin >> height;
                std::cout << "enter the first symbol of the mat: ";
                std::cin >> symbol1;
                std::cout << "enter the second symbol of the mat: ";
                std::cin >> symbol2;
                std::cout << ariel::mat(length,height,symbol1,symbol2) << std::endl;
            }
            catch (exception& e) {
                std::cout << "exception caught! : " << e.what() << std::endl;
            }
        }
    }
    std::cout << "end of program" << std::endl;
    return 0;
}
