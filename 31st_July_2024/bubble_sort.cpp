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
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				c=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=c;
			}
		}
	}
	cout<<"\nThe sorted array is: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
