#include <iostream>
#include <stacklist.h>
//#include <queue>

using namespace std;

int main()
{
	TStackList<int> A;
	cout << A.IsEmpty() << endl;
	A.Push(7);
	cout << A.Get() << endl;
	A.Push(23);
	return 0;
}