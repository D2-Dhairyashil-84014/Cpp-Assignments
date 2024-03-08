#include <iostream>
using namespace std;

class Address
{
private:
    string building;
    string street;
    string city;
    int pin;

public:
    Address()
    {
        building = "blue house";
        street = "marunji RD";
        city = "pune";
        pin = 410001;
    }

    Address(string building, string street, string city, int pin)
    {
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }

    void accept()
    {
        cout << "enter building name : ";
        cin >> building;
        cout << "enter street : ";
        cin >> street;
        cout << "enter city : ";
        cin >> city;
        cout << "enter pin : ";
        cin >> pin;
    }

    void display()
    {
        cout << "Address :" << endl;
        cout << "building name : " << building << endl;
        cout << "street : " << street << endl;
        cout << "city : " << city << endl;
        cout << "pin : " << pin << endl;
    }

    void setBuilding(string building)
    {
        this->building = building;
    }

    string getBuilding()
    {
        return building;
    }

    void setstreet(string street)
    {
        this->street = street;
    }

    string getstreet()
    {
        return street;
    }

    void setcity(string city)
    {
        this->city = city;
    }

    string getcity()
    {
        return city;
    }

    void setpin(int pin)
    {
        this->pin = pin;
    }

    int getpin()
    {
        return pin;
    }
};

int main()
{
    Address a1;
    Address a2("ganaraj", "wakad rd", "wakad", 410010);

    a1.display();
    a2.display();
    a1.accept();

    a1.setBuilding("drg residency");
    cout << a1.getBuilding() << endl;
    a1.display();

    a1.setcity("Hinjewadi");
    cout << a1.getcity() << endl;
    a1.display();

    a1.setstreet("bhumkar chowk");
    cout << a1.getstreet() << endl;
    a1.display();

    a1.setpin(410011);
    cout << a1.getpin() << endl;
    a1.display();
    // a1.display();
    // a2.display();
    // a1.accept();
    return 0;
}