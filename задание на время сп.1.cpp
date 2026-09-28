#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cout << "Введите количество секунд: ";
    std::cin >> n;

    int hours = n / 3600;
    int minutes = (n % 3600) / 60;
    int seconds = n % 60;

    hours = hours % 24;

    std::cout << std::setw(2) << std::setfill('0') << hours << ':'
        << std::setw(2) << std::setfill('0') << minutes << ':'
        << std::setw(2) << std::setfill('0') << seconds << std::endl;
    return 0;
}