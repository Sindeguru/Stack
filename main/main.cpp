#include <iostream>
#include <stack.h>
//#include <queue>

using namespace std;

int main()
{
	TStack<int> A(5);
	cout << A.empty() << endl;
	A.push(12);
	cout << A.top() << endl;

	return 0;
}