#include <iostream>
using namespace std;

class Student
{
private:
    int rollno;
    string name;
    double marks;

public:
    void initStudent()
    {
        rollno = 84014;
        name = "Dhairyashil";
        marks = 90;
    }
    void printStudentOnConsole()
    {
        cout << "roll no : " << rollno << endl;
        cout << "name : " << name << endl;
        cout << "marks : " << marks << endl;
    }
    void acceptStudentFromConsole()
    {
        cout << "enter roll no" << endl;
        cin >> rollno;
        cout << "enter name" << endl;
        cin >> name;
        cout << "enter marks" << endl;
        cin >> marks;
    }
};

int main()
{
    Student s1;
    s1.initStudent();
    int choice;
    do
    {
        cout << "1.acceptStudentFromConsole" << endl;
        cout << "2.printStudentOnConsole" << endl;
        cout << "0.Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Thank you" << endl;
            break;
        case 1:
            s1.acceptStudentFromConsole();
            break;
        case 2:
            s1.printStudentOnConsole();
            break;
        default:
            break;
        }
    } while (choice != 0);

    return 0;
}