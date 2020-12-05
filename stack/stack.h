#pragma once
#include <iostream>

using namespace std;
template <class T>
class TStack
{
protected:
	T* arr;
	int length;
	int vs;

public:
	TStack(int size=0);
	TStack(TStack<T>& s); 
	~TStack(); 

  TStack<T>& operator =(TStack<T>& _v); 

	void push(T Elem); // Поместить элемент стека в вершину стэка
	T top(); //Вывести верхний элемент стэка
	void pop(); //Удалить верхний элемент
	bool empty(); //Пуст ли стек
};

template<class T>
inline TStack<T>::TStack(int size)
{
  if (size >= 0)
  {
    this->length = size;
    arr = new T[length];
    for (int i = 0; i < length; i++)
      arr[i] = 0;
    this->vs = 0;
  }
  else
    throw - 1;
}

template<class T>
inline TStack<T>::TStack(TStack& s)
{
  length = s.length;
  vs = s.vs;
  arr = new T[length];
  for (int i = 0; i < length; i = i + 1)
    arr[i] = s.arr[i];
}

template<class T>
inline TStack<T>::~TStack()
{
  length = 0;
  if (arr != 0)
    delete[] arr;
  arr = 0;
}

template<class T>
inline TStack<T>& TStack<T>::operator=(TStack<T>& _v)
{
  if (this == &_v)
    return *this;

  length = _v.length;
  delete[] arr;
  arr = new T[length];
  for (int i = 0; i < length; i++)
    arr[i] = _v.arr[i];
  vs = _v.vs;
  return *this;
}

template<class T>
inline void TStack<T>::push(T Elem)
{
  if (vs >= length)
    throw - 1;

  arr[vs] = Elem;
  vs++;
}

template<class T>
inline T TStack<T>::top()
{
  if (this->empty())
    throw - 1;

  return arr[vs - 1];
}

template<class T>
inline void TStack<T>::pop()
{
  if (this->empty())
    throw - 1;
  vs--;
  arr[vs] = 0;
}

template<class T>
inline bool TStack<T>::empty()
{
  if (vs <= 0)
    return true;
  else
    return false;
}
