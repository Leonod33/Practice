#include <iostream>
#include <string>

int main() {
    std::cout << "Size of char: " << sizeof(char) << " bytes\n";
    std::cout << "Size of int: " << sizeof(int) << " bytes\n";
    std::cout << "Size of long: " << sizeof(long) << " bytes\n";
    std::cout << "Size of float: " << sizeof(float) << " bytes\n";
    std::cout << "Size of double: " << sizeof(double) << " bytes\n";

    std::string text;
    std::cout << "Enter a string to display ASCII codes: ";
    std::getline(std::cin, text);
    for(char c : text) {
        std::cout << c << ": " << static_cast<int>(c) << "\n";
    }
    return 0;
}
