#include <iostream>
using namespace std;
class area
{
    float a, r;
    float l, b;
    float s;
    float h;

public:
    void circle()
    {
        cout << "Enter the radius: ";
        cin >> r;
        a = 3.14 * r * r;
        cout << "The area of the circle is " << a;
    }
    void square()
    {
        cout << "Enter the side: ";
        cin >> s;
        a = s * s;
        cout << "The area of the square is " << a;
    }
    void rectangle()
    {
        cout << "Enter the length: ";
        cin >> l;
        cout << "Enter the breadth: ";
        cin >> b;
        a = l * b;
        cout << "The area of the rectangle is " << a;
    }
    void triangle()
    {
        cout << "Enter the base: ";
        cin >> b;
        cout << "Enter the Height: ";
        cin >> h;
        a = 0.5 * b * h;
        cout << "The area of the triangle is " << a;
    }
};
int main()
{
    area areaa;
    char chh;
    do
    {

        int ch; // ch=choice
        cout << "Enter a Choice";
        cout << "1. Area Of a Circle\n";
        cout << "2. Area Of a Square\n";
        cout << "3. Area Of a Rectangle\n";
        cout << "4. Area Of a Triangle\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            areaa.circle();
            cout << "\n";
            break;
        case 2:
            areaa.square();
            cout << "\n";
            break;
        case 3:
            areaa.rectangle();
            cout << "\n";
            break;
        case 4:
            areaa.triangle();
            cout << "\n";
            break;
        default:
            cout << "Invalid Input";
        }
        

    cout << "Do you want to continue? Type 'Y' ";
    cin>>chh;
    
    }
    while(chh == 'Y' || chh== 'y');
}
