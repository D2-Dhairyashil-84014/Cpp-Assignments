#include <iostream>
using namespace std;

class Volume
{
private:
    int length;
    int width;
    int height;
    int volume;

public:
    Volume()
    {
        length = 0;
        width = 0;
        height = 0;
        volume = 0;
    }

    void acceptBoxSize()
    {
        cout << "Enter length : ";
        cin >> length;
        cout << "Enter width : ";
        cin >> width;
        cout << "Enter height : ";
        cin >> height;
    }

    void displayVolumeOfBox()
    {
        cout << "Volume of Box = " << volume << endl;
    }

    void calVolumeOfBox()
    {

        volume = length * width * height;
    }
};

int main()
{
    Volume v1;
    int choice;

    do
    {
        cout << "1.accept Box Size" << endl;
        cout << "2.cal Volume Of Box" << endl;
        cout << "3.display Volume Of Box" << endl;
        cout << "0.Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Thank you" << endl;
            break;
        case 1:
            v1.acceptBoxSize();
            break;
        case 2:
            v1.calVolumeOfBox();
            break;
        case 3:
            v1.displayVolumeOfBox();
            break;

        default:
            break;
        }
    } while (choice != 0);

    return 0;
}