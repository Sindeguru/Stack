#include <iostream>
#include <stack.h>
//#include <queue>

using namespace std;

int main()
{
	TStack<int> A(1);
	cout << A.empty() << endl;
	A.push(7);
	cout << A.top() << endl;
	A.push(23);
	return 0;
}