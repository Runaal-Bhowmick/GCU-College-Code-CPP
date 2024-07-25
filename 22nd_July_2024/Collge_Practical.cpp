// WAP tp Declare an Array with elements And Then Add Another element to a specific Position

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
	cout << "\n";
	int pos, ne; // ne=new element
	cout << "Enter the Position You want to add the new Element to:";
	cin >> pos;

	cout << "Enter The New Element";
	cin >> ne;

	size += 1;
	for (i = size; i >= pos; i--)
	{
		ar[i + 1] = ar[i];
	}

	ar[pos] = ne;

	cout << "The New array is:";
	for (i = 0; i < size; i++)
	{
		cout << ar[i] << " ";
	}

	int pos2;
	cout << "\nEnter The new Position you want the element to be deleted from:";
	cin >> pos2;

	for (i = pos2; i < size; i++)
	{
		ar[i] = ar[i + 1];
	}

	size -= 1;

	cout << "The New array is:";
	for (i = 0; i < size; i++)
	{
		cout << ar[i] << " ";
	}
}
