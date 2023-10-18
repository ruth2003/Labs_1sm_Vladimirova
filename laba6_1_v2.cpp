#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int x, q;
    int maxNum = 0;
    int maxNumIndex = -1;
    int sum = 0;
    std::cout << "Введите размер последовательности: ";
    std::cin >> x;
    std::cout << "{ ";
    for (int i = 0; i < x; i++) {
        std::cin >> q;
        if (q % 10 == 0 || q % 10 == 7) {
            sum += q;
            if (q > maxNum) {
                maxNum = q;
                maxNumIndex = i + 1;
            }
        }

    }
    std::cout << "}";
    if (maxNumIndex != -1) {
        std::cout << "<---Вот ваша последовательность" << std::endl;
        std::cout << "Сумма чисел, оканчивающихся на 0 или 7: " << sum << std::endl;
        std::cout << "Наибольшее число, оканчивающееся на 0 или 7: " << maxNum << std::endl;
        std::cout << "Номер этого числа в последовательности: " << maxNumIndex << std::endl;
    }
    else {
        std::cout << std::endl << "Нет таких чисел";
    }
    return 0;
}


