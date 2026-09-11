#include<iostream>
using namespace std;
int main(){
	int n,k,low=0,high,mid,loc=-1;
	cout<<"Name:Rohit kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;
	cout<<"Enter the number of elements :";
	cin>>n;
	int arr[n];
	cout<<"Enter elements in sorted order :";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter element to search: ";
	cin>>k;
	high=n-1;
	for(int i=0;low<=high;i++){
		mid=(low+high)/2;
		if(arr[mid]==k){
			loc=mid+1;
			break;
		}
		else if(k>arr[mid]){
			low=mid+1;
			break;
		}
		else{
			high=mid-1;
		}
	}
	if(loc!=-1){
		cout<<"Element found at position:"<<loc;
	}
	else{
		cout<<"Element not found";
	}
	return 0;
}