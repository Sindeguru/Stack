#pragma once
#include <iostream>

using namespace std;
template <class T>
class TStack
{
protected:
	T** arr;
	int size;
	int vs;

public:
	TStack();
	TStack(int size);
	TStack(TStack& s);
	~TStack();

	void push(T& Elem);
	T top();
	void pop();
	int empty();

};

template<class T>
inline TStack<T>::TStack()
{

}

template<class T>
inline TStack<T>::TStack(int size)
{

}

template<class T>
inline TStack<T>::TStack(TStack& s)
{

}

template<class T>
inline TStack<T>::~TStack()
{

}

template<class T>
inline void TStack<T>::push(T& Elem)
{

}

template<class T>
inline T TStack<T>::top()
{

}

template<class T>
inline void TStack<T>::pop()
{

}

template<class T>
inline int TStack<T>::empty()
{

}
