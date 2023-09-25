#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    std::cout << "Введите значение ошибки от 0 до 3: ";
    std::cin >> N;

    switch (N) {
        case 0:
            std::cout << "Всё хорошо" << std::endl;
            break;
        case 1:
            std::cout << "Ошибка чтения файла" << std::endl;
            break;
        case 2:
            std::cout << "Ошибка записи файла" << std::endl;
            break;
        case 3:
            std::cout << "Не все поля определены" << std::endl;
            break;
        default:
            std::cout << "Неопознанная ошибка" << std::endl;
            break;
    }
    return 0;
}
