#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    short X;
    std::cout << "Введите значение Х (1 или -1): ";
    std::cin >> X;
    if (X == -1) {
        std::cout << "Negative number" << std::endl;
    }
    else if (X == 1) {
        std::cout << "Positive number" << std::endl;
    }
    else {
        std::cout << "Некорректное значение Х" << std::endl;
    }
    return 0;
}