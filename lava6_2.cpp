#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int N;
    std::cout << "Введите натуральное число N: ";
    std::cin >> N;

    int sum = 0;
    while (N > 0) {
        int digit = N % 10;
        if (N % 2 != 0) {
            sum += digit;
        }
        N /= 10;
    }

    
    if (sum == 0) {
        std::cout << "Таких чисел нет";
    }
    else {
        std::cout << "Сумма нечетных цифр числа N: " << sum << std::endl;;
    }
    return 0;
}

