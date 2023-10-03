#include <iostream>

/*
Operatory porównania:
== - równości
!= - różności
>
<
>=
<=

*/

/*
1.
2. 
3. 
4. 
5. 
6. Program sprawdzający czy podana data jest poprawna (np. sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)
7. Program wyświetlający odpowiedni komunikat w zależności od podanej temperatury (np. "ciepło" dla temperatury powyżej 20 stopni Celsjusza, "chłodno" dla temperatury poniżej 10 stopni Celsjusza itd.)
*/


//Napisz funkcję, która podzieli dwie liczby.
void task1()
{
    int firstNumber, secondNumber;

    std::cout << "Podaj pierwszą liczbę:\n";
    std::cin >> firstNumber;
    std::cout << "Podaj drugą liczbę (byle nie zero):\n";
    std::cin >> secondNumber;

    if (secondNumber != 0)
    {
        double quotient = firstNumber / secondNumber;
        std::cout << "Wynik dzielenia: " << quotient << "\n";
    }
    else
    {
        std::cout << "Dzielenie przez zero!!!\n";
    }
}

//Program sprawdzający czy podana liczba jest parzysta czy nieparzysta
void task2()
{
    int NumberToCheck;

    std::cout << "Podaj liczbę ktora chcesz sprawdzic:\n";
    std::cin >> NumberToCheck;
    int check = NumberToCheck % NumberToCheck;

    if (check == 0)
    {
        std::cout << "twoj numer (" << NumberToCheck <<  ") jest parzysty";
    }
    else
    {
        std::cout << "twoj numer (" << NumberToCheck << ") jest nieparzysty";
    }
}
//Program sprawdzający czy podana liczba jest dodatnia, ujemna czy równa zero
void task3()
{
    double NumberToCheck;

    std::cout << "Podaj liczbę ktora chcesz sprawdzic:\n";
    std::cin >> NumberToCheck;

    if (NumberToCheck < 0)
    {
        std::cout << "Liczba (" << NumberToCheck << ") jest ujemna";
    }
    else if(NumberToCheck > 0)
    {
        std::cout << "Liczba (" << NumberToCheck << ") jest dodatnia";
    }
    else
    {
        std::cout << "Liczba (" << NumberToCheck << ") jest rowna 0";
    }
}
//Program sprawdzający czy podany rok jest rokiem przestępnym
void task4()
{
        int year;

        std::cout << "Podaj rok ktory chcesz sprawdzic czy jest rokiem przestepnym:\n";
        std::cin >> year;
        int yearcheck = year % 4;
        if (yearcheck == 0)
        {
            std::cout << "Rok podany przez uzytkownika (" << year << ") jest przystepny";
        }
        else
        {
            std::cout << "Rok podany przez uzytkownika (" << year << ") nie jest przystepny";
        }
}
//Program wyświetlający odpowiedni komunikat w zależności od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
void task5()
{
    int rating;

    std::cout << "Podaj ocene:\n";
    std::cin >> rating;
    if (rating == 5)
    {
        std::cout << "bardzo dobry";
    }
    else if (rating == 4)
    {
        std::cout << "dobry";
    }
    else if (rating == 3)
    {
        std::cout << "dostateczny";
    }
    else if (rating == 2)
    {
        std::cout << "dopuszczajacy";
    }
    else if (rating == 1)
    {
        std::cout << "niedopuszczajacy";
    }
    else
    {
        std::cout << "nie ma takiej oceny w karesie oceniania";
    }
}
//Program sprawdzający czy podane hasło jest poprawne (np. jeśli hasło jest "abc123", program powinien wyświetlić "hasło poprawne", jeśli jest inne, powinien wyświetlić "hasło niepoprawne").
void task6()
{
     int password;

    std::cout << "Podaj haslo:\n";
    std::cin >> password;

    if (password == 123)
    {
        std::cout << "poprawne haslo";
    }
    else
    {
        std::cout << "hasło niepoprawne";
    }
}
//Program sprawdzający czy podana data jest poprawna (np. sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)
void task7()
{
    int day, month, year;
    std::cout << "Podaj rok:\n";
    std::cin >> year;
    std::cout << "Podaj miesiac:\n";
    std::cin >> month;
    std::cout << "Podaj dzien:\n";
    std::cin >> day;

    if (year > 0 || year < 2023 || month >= 1 || month <= 12 || day >= 1 || day <= 31 )
    {
        std::cout << "poprawna data";
    }
}

int main()
{
    setlocale(LC_CTYPE, "polish");

    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
}