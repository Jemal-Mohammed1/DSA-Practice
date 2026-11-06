#include<iostream>
using namespace std;
int main()  {
	int arr[]={10,20,30,40,50};
	int key=30;
	int n=5;
	bool found =false;
	for(int i=0;i<n;i++){
		if (arr[i]==key) {
			cout<<"found at index "<<i<<endl;
			found=true;
			break;
		}
	}
	if(!found)
	cout<<"Not found"<<endl;
	return 0;
}