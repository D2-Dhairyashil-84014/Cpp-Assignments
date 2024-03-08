#include <iostream>
using namespace std;
class BankAccount
{
private:
    const int accno;
    string name;
    double balance;
    double depositeAmount;
    double withdrawAmount;
    static int generate_accno;

public:
    BankAccount() : accno(++generate_accno) {}

    BankAccount(string name, double balance) : accno(++generate_accno)
    {
        this->name = name;
        this->balance = balance;
    }

    void acceptaccountDeatils()
    {
        cout << "Enter name - ";
        cin >> name;
        cout << "Enter initial Balance - ";
        cin >> balance;
    }

    void displayAccountDeatils()
    {
        cout << "Accno = " << accno << endl;
        cout << "Name = " << name << endl;
        cout << "Balanace = " << balance << endl;
    }

    void depositeBalance()
    {
        cout << "enter deposite amount : ";
        cin >> depositeAmount;
        balance = balance + depositeAmount;
        cout << "Total balance : " << balance << endl;
    }

    void withdrawBalance()
    {
        cout << "enter withdrawal amount : ";
        cin >> withdrawAmount;
        if (balance < withdrawAmount)
            cout << "Balance is insufficient" << endl;
        else
            balance = balance - withdrawAmount;
        cout << "Total balance : " << balance << endl;
    }
};

int BankAccount::generate_accno = 1000;

int main()
{
    BankAccount *accptr;
    accptr = new BankAccount;

    int choice;
    do
    {
        cout << "1.Accept account details" << endl;
        cout << "2.deposite Balance" << endl;
        cout << "3.withdrawBalance" << endl;
        cout << "4.displayAccountDeatils" << endl;
        cout << "0.Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Thank you" << endl;
            break;
        case 1:
            accptr->acceptaccountDeatils();
            break;
        case 2:
            accptr->depositeBalance();
            break;
        case 3:
            accptr->withdrawBalance();
            break;
        case 4:
            accptr->displayAccountDeatils();
            break;
        default:
            break;
        }
    } while (choice != 0);

    delete accptr;
    accptr = NULL;

    return 0;
}

/*
int main()
{
    // todo -> do it in menu driven code
    BankAccount *accptr;
    for (int i = 0; i < 3; i++)
    {
        accptr = new BankAccount;
        accptr->acceptaccountDeatils();
        accptr->depositeBalance();
        accptr->withdrawBalance();
        accptr->displayAccountDeatils();
        delete accptr;
        accptr = NULL;
    }

    return 0;
}

// int main1()
// {
//     BankAccount acc1("rohan", 10000);
//     BankAccount acc2("nilesh", 15000);
//     BankAccount acc3("nitin", 20000);
//     BankAccount acc4("Rajiv", 20000);
//     BankAccount acc5("yogesh", 20000);

//     acc1.displayAccountDeatils();
//     acc2.displayAccountDeatils();
//     acc3.displayAccountDeatils();
//     acc4.displayAccountDeatils();
//     acc5.displayAccountDeatils();

//     return 0;
// }
*/