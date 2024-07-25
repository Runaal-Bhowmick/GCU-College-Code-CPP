// WAP tp Declare an Array with elements And perform linear Search of an element

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the Size of the Array: ";
    cin >> size;
    int ar[size], i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter The " << i << " element: ";
        cin >> ar[i];
    }
    cout << "The Current Array is: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }

    int se; // se=serach element
    cout << "\nEnter the element you want to serach for: ";
    cin >> se;
    int flag = 0, pos;
    for (i = 0; i < size; i++)
    {
        if (ar[i] == se)
        {
            pos = i + 1;
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "Element Not Found" << endl;
    }
    else
    {
        cout << "Element Found at Position: " << pos ;
    }

    return 0;
}