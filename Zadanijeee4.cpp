#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int A, B, C;
    std::cout << "Введите 3 натуральных числа A, B, C: ";
    std::cin >> A >> B >> C;

    if ((A + B) % C == 0) {
        if (C % B == 0) {
            std::cout << "(A+B)/C-C/B: " << (A + B) / C - C / B << std::endl;
        }
        else {
            std::cout << "(A+B)/С+B*C: " << (A + B) / C + B * C << std::endl;
        }
    }
    else {
        std::cout << "A-B+C: " << A - B + C << std::endl;
    }
    return 0;
}