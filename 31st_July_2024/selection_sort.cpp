#include<iostream>
using namespace std;
int main(){
	// cout<<"Test";
	int n, c;
	cout<<"Enter the Size of the Array: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter the "<< i<< " element: ";
		cin>>arr[i];
	}
	cout<<"The given array is: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

     
    for(int i=0; i<n-1; i++){
        int c = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[c]){
                c = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[c];
        arr[c] = temp;
    }

    cout << "\nThe sorted array is: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}