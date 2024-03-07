#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;

    void initDate()
    {
        day = 23;
        month = 10;
        year = 2001;
    }

    void printDateOnConsole()
    {
        cout << day << "-" << month << "-" << year << endl;
    }

    void acceptDateFromConsole()
    {
        cin >> day;
        cin >> month;
        cin >> year;
    }

    bool isLeapYear()
    {
        if (year % 4 == 0)
            return 1;
        else
            return 0;
    }
};

int main()
{
    struct Date d1;
    int choice;
    d1.initDate();
    do
    {
        cout << "1.acceptDateFromConsole" << endl;
        cout << "2.printDateOnConsole" << endl;
        cout << "3.isLeapYear" << endl;
        cout << "0.Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Thank you" << endl;
            break;
        case 1:
            d1.acceptDateFromConsole();
            break;
        case 2:
            d1.printDateOnConsole();
            break;
        case 3:
            if (d1.isLeapYear() == 1)
            {
                cout << "leap year" << endl;
            }
            else
                cout << "not leap year" << endl;
            break;

        default:
            break;
        }
    } while (choice != 0);
    return 0;
}