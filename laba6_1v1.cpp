#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL,"Russian");
    int x;
    int y;
    int maxNum = 0;
    int maxNumIndex = 1;
    int sum = 0;
    std::cout << "Введите первый элемент последовательности: ";
    std::cin >> x;
    std::cout << "Введите последний элемент последовательности: ";
    std::cin >> y;
    if (x >= y) {
        std::cout << "Первый элемент не может быть больше или равен последнему =(";
    }
    else {
        std::cout << "{ ";
        for (int i = x; i <= y; i++) {
            std::cout << i << " ";
            if (i % 10 == 0 || i % 10 == 7) {
                sum += i;
            }
            if (i > maxNum, i % 10 == 0 || i % 10 == 7) {
                maxNum = i;
            }
        }
        int z = maxNum - x + 1;
        for (int j = 1; j <= z; j++) {
            maxNumIndex = j;
        }
        std::cout << "}";
        std::cout << "<---Вот ваша последовательность" << std::endl;
        std::cout << "Сумма чисел, оканчивающихся на 0 или 7: " << sum << std::endl;
        std::cout << "Наибольшее число, оканчивающееся на 0 или 7: " << maxNum << std::endl;
        std::cout << "Номер этого числа в последовательности: " << maxNumIndex << std::endl;
    }
    return 0;
}

