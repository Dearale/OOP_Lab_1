#include <iostream>
#include "include/converter.h"

int main() {
    std::string time;
    std::string period;
    std::cout << "Введите время в 12-часовом формате (например: 8:30 am): ";
    std::cin >> time >> period;

    size_t colonPos = time.find(':');
    int hours = std::stoi(time.substr(0, colonPos));
    int minutes = std::stoi(time.substr(colonPos + 1));
    
    std::cout << "Результат: " << convert(hours, minutes, period) << std::endl;

    return 0;
}