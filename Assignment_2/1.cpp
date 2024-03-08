#include <iostream>
using namespace std;

class Volume
{
private:
    int length;
    int width;
    int height;
    

public:
    Volume()
    {
    }
    void volumeOfBox()
    {
        
        cout << "Volume = "<<length * width * height << endl;
    }
};

int main()
{
    Volume v1;
    v1.volumeOfBox();
    return 0;
}