#include <iostream>
#include<deque>
using namespace std;
int main() {
	deque<int>dq;
	dq.push_front(10);
	dq.push_back(20);
	dq.push_front(5);
	for(int value : dq)
	cout<<value<< " ";
	return 0;
}
