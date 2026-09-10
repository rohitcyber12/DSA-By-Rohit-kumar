#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"CRN:2515244"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"Enter the number of elements in the array: ";
	cin>>n;
	int arr1[n];
	int arr2[n];
	cout<<"enter the elements of the array:" ;
	for(int i=0;i<n;i++){
		cin>>arr1[i];

	}
	cout<<"Enter the second array:";
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	
	}
	
	cout<<"First Array: {";
	for(int i=0;i<n;i++){
		cout<<arr1[i]<<",";

	}
	cout<<"}"<<endl;
	cout<<"Second Array: {";
	for(int i=0;i<n;i++){
		cout<<arr2[i]<<",";

	}
	int sum[n];
	for(int i=0;i<n;i++){
		sum[i]=arr1[i]+arr2[i];
	}
	cout<<"}"<<endl;
	cout<<"Array: {";
	for(int i=0;i<n;i++){
		cout<<sum[i]<<",";
	}
	cout<<"}"<<endl;
	return 0;
}