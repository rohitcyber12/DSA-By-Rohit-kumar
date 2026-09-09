#include<iostream>
using namespace std;
int main(){
	int n,k,loc=-1;
	cout<<"Name:Rohit kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	cout<<"Enter the number of elements :";
	cin>>n;
	int arr[n];
	cout<<"Enter elements :";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter element to search :";
	cin>>k;
	for(int i=0;i<n;i++){
		if(arr[i]==k){
			loc=i+1;
			break;
		}
	}
	if(loc!=-1){
		cout<<"Element found at position :"<<loc<<endl;
	}
	else{
		cout<<"Element not found";
	}
	return 0;


}