#include <iostream>
#include <string>

int main() {
    std::string first_name, last_name;

    std::cout << "What is your first name? ";
    std::getline(std::cin, first_name);
    std::cout << "What is your last name? ";
    std::getline(std::cin, last_name);
    std::cout << "Hello, " << first_name << " " << last_name << "!" << std::endl;

    return 0;
}