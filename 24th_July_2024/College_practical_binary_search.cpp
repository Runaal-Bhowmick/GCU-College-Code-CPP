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
    int low = 0;
    int high = size;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (ar[mid] == se)
        {
            cout << "Element found at index " << mid << endl;
            return 0;
        }
        else if (ar[mid] < se)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "Element not found" << endl;

    return 0;
}