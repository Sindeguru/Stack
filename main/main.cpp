#include <iostream>
#include <stacklist.h>
#include <queuelist.h>

using namespace std;

int main()
{

  TQueueList<int> A;
  A.Push(1234);
  cout<< A.Get();

	return 0;
}