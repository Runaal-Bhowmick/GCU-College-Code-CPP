// WAP to Find The Sum Of two Numbers Using Function

#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    int result = sum(num1, num2);
    cout << "Sum: " << result << endl;
    
    return 0;
}