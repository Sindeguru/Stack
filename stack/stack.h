#pragma once
#include <iostream>
/*
using namespace std;
template <class T>
class TStack
{
protected:
  T* arr;
  int length;
  int vs;

public:
  TStack(int size = 0);
  TStack(TStack<T>& s);
  ~TStack();

  TStack<T>& operator =(TStack<T>& _v);

  void push(T Elem); // Ïîìåñòèòü ýëåìåíò ñòåêà â âåðøèíó ñòýêà
  T top(); //Âûâåñòè âåðõíèé ýëåìåíò ñòýêà
  void pop(); //Óäàëèòü âåðõíèé ýëåìåíò
  bool empty(); //Ïóñò ëè ñòåê
  bool IsFull();

};

template<class T>
inline TStack<T>::TStack(int size)
{
  if (size >= 0)
  {
    this->length = size;
    arr = new T[length];
    this->vs = -1;
  }
  else
    throw logic_error("size of stack must be >= 0");
}

template<class T>
inline TStack<T>::TStack(TStack& s)
{
  length = s.length;
  vs = s.vs;
  arr = new T[length];
  for (int i = 0; i < vs; i = i + 1)
    arr[i] = s.arr[i];
}

template<class T>
inline TStack<T>::~TStack()
{
  length = 0;
  if (arr != 0)
    delete[] arr;
  arr = 0;
  vs = -1;
}

template<class T>
inline TStack<T>& TStack<T>::operator=(TStack<T>& _v)
{
  if (this == &_v)
    return *this;

  length = _v.length;
  delete[] arr;
  arr = new T[length];
  for (int i = 0; i < vs; i++)
    arr[i] = _v.arr[i];
  vs = _v.vs;
  return *this;
}

template<class T>
inline void TStack<T>::push(T Elem)
{
  if (IsFull())
    throw "isfull";

  vs++;
  arr[vs] = Elem;

}

template<class T>
inline T TStack<T>::top()
{
  if (this->empty())
    throw "Stack is empty";

  return arr[vs];
}

template<class T>
inline void TStack<T>::pop()
{
  if (this->empty())
    throw "Empty stack";
  arr[vs] = 0;
  vs--;
}

template<class T>
inline bool TStack<T>::empty()
{
  if (vs < 0)
    return true;
  else
    return false;
}

template<class T>
inline bool TStack<T>::IsFull()
{
  return (vs + 1) >= length;
}
*/