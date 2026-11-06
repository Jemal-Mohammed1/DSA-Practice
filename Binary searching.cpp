#include <iostream>
using namespace std;
int main (){

int arr[5],i,num,index;
cout<<"Enter 5 Elements number";
for(int i=0;i<5;i++)
cin>>arr[i];
cout<<"Enter the Number of search";
cin>>num;
for(int i=0;i<5;i++){
	if(arr[i]==num){
		index=i;
		cout<<"found Elements "<<num<<"at index"<<i;
		
	}
	
}
return 0;

}
