#include<iostream>
using namespace std;
class student {
	public:
		string name;
		int age;
		void display() {
			cout<<"Name: "<< name << "\nAge:"<<age<<endl;
		}
};
struct  point {
int x,y;

};
int main () {
	student s;
	s.name="Abel";
	s.age=20;
	s.display();
	point p={10,15};
	cout<<"point("<<p.x<<","<<p.y<<")"<<endl;
	int value=50;
	int *ptr=&value;
	cout<<"Adress="<<value<<endl;
		cout<<"value ="<<ptr<<endl;
			cout<<"pointer Dereference ="<<ptr<<endl;
			return 0;
			
}