#include<iostream>
using namespace std;
int main(){
	int n,temp;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	cout<<"Enter the number of element of array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Sorted Array:";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}