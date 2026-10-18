#include <iostream>
#include <string>
#include <ctime>

int main() {
    std::string first_name, last_name;

    std::cout << "What is your first name? ";
    std::getline(std::cin, first_name);
    std::cout << "What is your last name? ";
    std::getline(std::cin, last_name);
    std::cout << "Hello, " << first_name << " " << last_name << ", nice to meet you!" << std::endl;
    // Print the current date and time
    std::time_t now = std::time(nullptr);
    std::cout << "Current date and time: " << std::ctime(&now) << std::endl;

    return 0;
}