#define _USE_MATH_DEFINES
#include <iostream>

void test()
{
    std::cout << "Hello World!\n";
    std::cout << -59.5 << 'x' << "ghfghjfghj" << true << false << '\n';

    //typ nazwa;
    int number;
    number = 5;

    int secondNumber;
    secondNumber = number + 2;
    /*
    Priorytet operatorów:

    (, )
    +, - (unarne)
    *, /, %
    +, -
    =

    */
    std::cout << "Komuinikat \n";
    std::cin >> secondNumber >> number;
}

/*
Podstawy programowania:

1.
2.
3.
4.
5.
6.
7.
8.
9.
*/

//Program obliczający średnią arytmetyczną dwóch liczb.
void task1()
{
    double firstNumber, secondNumber;
    std::cout << "wpissz pierwsza liczbe \n";
    std::cin >> firstNumber;
    std::cout << "wpisz druga liczbe \n";
    std::cin >> secondNumber;

    double avarage = (firstNumber + secondNumber) / 2;
    std::cout << "srednia arytmetyczna :" << avarage;
}
//Program obliczający pole prostokąta.
void task2()
{
    double a, b;
    std::cout << "podaj pierwszy bok \n";
    std::cin >> a;
    std::cout << "podaj drugi bok \n";
    std::cin >> b;

    double resultk = a * b;
    std::cout << "pole kwadratu wynosi:" << resultk;
}
//Program obliczający objętość stożka.
void task3()
{
    double r, h;
    std::cout << "podaj r \n";
    std::cin >> r;
    std::cout << "podaj h \n";
    std::cin >> h;

    double results = ((M_PI / 3) * (r * r) * h);
    std::cout << "objetosc stozka wynosi:" << results;
}
//Program obliczający pole koła.
void task4()
{

    double circle;
    std::cout << "podaj r";
    std::cin >> circle;

    double resultc = ((M_PI / 1.0 / 2) * (circle * circle));
    std::cout << "pole kola wynosi:" << resultc;
}
//Program obliczający wartość wyrażenia a^2 + b^2
void task5()
{
    double a, b;
    std::cout << "podaj pierwsza liczbe: \n";
    std::cin >> a;
    std::cout << "podaj druga liczbe: \n";
    std::cin >> b;

    double resultab = (a * a) + (b * b);
    std::cout << "wynik wynosi:" << resultab;
}
//Program obliczający pole trójkąta o podstawie b i wysokości h
void task6()
{
    double b, h;
    std::cout << "podaj wysokosc: \n";
    std::cin >> h;
    std::cout << "podaj podstawe: \n";
    std::cin >> b;

    double resultt = (b * h) / 2;
    std::cout << "pole trojkata:" << resultt;
}
//Program obliczający objętość kuli o promieniu r
void task7()
{
    double r;
    std::cout << "podaj r";
    std::cin >> r;

    double ball = ((4.0 / 3) * M_PI * (r * r * r));
    std::cout << "objetsosc kuli wynosi:" << ball;

}
//Program obliczający pole trapezu o podstawach a i b oraz wysokości h
void task8()
{
    double a, b, h;
    std::cout << "podaj a";
    std::cin >> a;
    std::cout << "podaj b";
    std::cin >> b;
    std::cout << "podaj h";
    std::cin >> h;

    double weirdbox = (((a + b) * h) / 2);
    std::cout << "pole trapezu:" << weirdbox;
}
//Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
void task9()
{
    double w1, w2, w3, a, b, c;
    std::cout << "Podaj piewsza wage: ";
    std::cin >> w1;
    std::cout << "Podaj druga waga: ";
    std::cin >> w2;
    std::cout << "Podaj trzecia waga: ";
    std::cin >> w3;

    std::cout << "Podaj liczbe o wadze " << w1;
    std::cin >> a;
    std::cout << "Podaj liczbe o wadze " << w2;
    std::cin >> b;
    std::cout << "Podaj liczbe o wadze " << w3;
    std::cin >> c;

    double wigth = ((a * 1.0 * w1) + (b * w2) + (c * w3));
    std::cout << "srednia wazona wynosi:" << wigth;
}
int main()
{
    //test();
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    //task9();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file