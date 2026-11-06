#include <iostream>
using namespace std;
class Queue {
	int arr[5];
	int front,rear;
	public:
		Queue() {
			front = rear =-1;
		}
		void enqueue(int value)  {
			if(rear==4) {
				cout<<"Queue Full\n";
				return;
				
			}
			if (front==-1)
			front =0;
			arr[++rear]=value;
			
		}
		void  dequeue () {
			if(front== -1 || front>rear) {
				cout<<"Queue Empty\n";
				return;
				
			}
			cout<<"dequeued: "<< arr[front++]<<endl;
			
		}
		void display() {
			for(int i= front; i<=rear;i++)
			cout<<arr[i]<<" ";
			
		}
};
int main () {
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.display();
	cout<<endl;
	q.dequeue();
	return 0;
	
	
}