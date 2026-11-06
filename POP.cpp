#include <iostream>
using namespace std;
class  stack {
	int top;
	int arr[5];
	public:
		stack() {top =-1;}
		void push(int value) {
			if(top == 4) {
				cout<<"stack overflow\n";
				return;
						}
						arr[++top] =value;
						
		}
		void pop() {
			if(top ==-1) {
				cout<<"stack underflow\n";
				return;
				
				}
				cout<<"popped: "<<arr[top--]<<endl;
			}
			void display() {
				for(int i=top;i>=0;i--)
				cout<<arr[i]<< " ";
			}
};
int main() {
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.display();
	cout<<endl;
	s.pop();
	return 0;
}