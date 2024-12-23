#include <iostream>
#include <limits>
#include <numeric>

int main()
{
    short num;
    std::cout << "Input a number: ";
    std::cin >> num;
    while(std::cin.fail() || std::cin.peek() != '\n'){
        std::cerr << "Wrong input. Try again: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> num;
    }

    char* result = new char[100];
    char* res = result;
    while(num){
        *res++ = '0' + (num & 1);
        *res = 0;
        num /= 2;
    }

    std::cout << "The reverce two-based number: " << result << "\n";
    delete []result;

    return 0;
}
