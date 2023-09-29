
#include <iostream>
//1.napisz funkcje ktora podzieli dwie liczby.
void task1()
{
    double FirstNumber, SecondNumber;

    std::cout << "Podaj pierwsza liczbe:\n";
    std::cin >> FirstNumber;
    std::cout << "Podaj druga liczbe:\n";
    std::cin >> SecondNumber;

    double qoutient = FirstNumber / SecondNumber;
    std::cout << "podział wynosi:" << qoutient;
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}
