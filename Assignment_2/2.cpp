#include <iostream>
using namespace std;

class Tollbooth
{
private:
    unsigned int totalNumberOfCars;
    double cashTotal;
    unsigned int tollpaidcarsno;
    unsigned int tollnotpaidcarsno;

public:
    Tollbooth()
    {
        totalNumberOfCars = 0;
        cashTotal = 0;
        tollpaidcarsno = 0;
        tollnotpaidcarsno = 0;
    }

    void tollPaidCars()
    {
        tollpaidcarsno = tollpaidcarsno + 1;
        ;
        cashTotal = cashTotal + 0.50;
        cout << "Toll paid No of Cars = " << tollpaidcarsno << endl;
        cout << "cashTotal = " << cashTotal << endl;
    }

    void tollNotPaidCars()
    {
        tollnotpaidcarsno++;
        cout << "Toll not paid of Cars = " << tollnotpaidcarsno << endl;
    }

    void displayNoCars()
    {
        totalNumberOfCars = tollnotpaidcarsno + tollpaidcarsno;
        cout << "Total No of Cars = " << totalNumberOfCars << endl;
    }
};

int main()
{
    Tollbooth t1;
    cout << "1.tollNotPaidCars" << endl;
    cout << "2.tollPaidCars" << endl;
    cout << "3.displayNoCars" << endl;
    cout << "0.Exit" << endl;
    cout << "Enter choice" << endl;

    int c;

    do
    {
        cin >> c;
        switch (c)
        {
        case 0:
            cout << "Thank you" << endl;
            break;
        case 1:
            t1.tollNotPaidCars();
            break;
        case 2:
            t1.tollPaidCars();
            break;
        case 3:
            t1.displayNoCars();
            break;
        default:
            break;
        }
    } while (c != 0);
    return 0;
}