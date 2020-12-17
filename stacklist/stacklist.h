#pragma once
#include <iostream>
#include "list.h"

using namespace std;
template <class T>
class TStackList
{
protected:
	TList<T> list;
public:
	TStackList();
	TStackList(TStackList<T>& _v); 
	~TStackList(); 

  TStackList<T>& operator =(TStackList<T>& _v); 

	void Push(T d); // Поместить элемент стека в вершину стэка
	T Get();

	bool IsEmpty(void) const; //Пуст ли стек
	bool IsFull(void) const;

	template<class T1>
	friend ostream& operator<< (ostream& ostr, const TStackList<T1>& A);
	template<class T1>
	friend istream& operator>> (istream& istr, TStackList<T1>& A);

	int GetCount();
};

template<class T1>
inline ostream& operator<<(ostream& ostr, const TStackList<T1>& A)
{
	return ostr << A.list;
}

template<class T1>
inline istream& operator>>(istream& istr, TStackList<T1>& A)
{
	return istr >> A.list;
}

template<class T>
inline TStackList<T>::TStackList() //used constructor of list
{
}

template<class T>
inline TStackList<T>::TStackList(TStackList<T>& _v)
{
	list = _v.list;
}

template<class T>
inline TStackList<T>::~TStackList() //used destructor of list
{
}


template<class T>
inline TStackList<T>& TStackList<T>::operator=(TStackList<T>& _v)
{
	if (this == _v)
		return *this;

	list = _v.list;
	return *this;
}

template<class T>
inline void TStackList<T>::Push(T d)
{
	list.InsFirst(d);
}

template<class T>
inline T TStackList<T>::Get()
{
	if (list.IsEmpty())
		throw "stack is empty";

	T tmp = list.GetFirst()->GetData();
	list.DellFirst();
	
	return tmp;
}

template<class T>
inline bool TStackList<T>::IsEmpty(void) const
{
	return list.IsEmpty();
}

template<class T>
inline bool TStackList<T>::IsFull(void) const
{
	return list.IsFull();
}

template<class T>
inline int TStackList<T>::GetCount()
{
	return list.GetCount();
}