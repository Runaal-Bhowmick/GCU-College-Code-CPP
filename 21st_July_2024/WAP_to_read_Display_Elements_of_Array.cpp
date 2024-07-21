#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; // Size of the array
    int arr[SIZE]; // Declare an array of integers
    
    // Read elements of the array
    cout << "Enter " << SIZE << " integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }
    
    // Display elements of the array
    cout << "Elements of the array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    

    // Find the sum of all elements
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    cout << "\nSum of all elements: " << sum << endl;

    // Find the odd and even elements
    cout << "Odd elements: ";
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Even elements: ";
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

