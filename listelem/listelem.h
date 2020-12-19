#pragma once
#include <iostream>
using namespace std;

template <class T>
class TListElem
{
protected:
  T data;
  TListElem* next;
  TListElem* prev;

public:
  TListElem(T _data);
  ~TListElem();

  T GetData();
  TListElem<T>* GetNext();
  TListElem<T>* GetPrev();

  void SetData(T _data);
  void SetNext(TListElem* _next);
  void SetPrev(TListElem* _prev);

  template <class T1>
  friend ostream& operator<< (ostream& ostr, const TListElem<T1>& A);
  template <class T1>
  friend istream& operator>> (istream& istr, const TListElem<T1>& A);
};


template<class T1>
inline ostream& operator<<(ostream& ostr, const TListElem<T1>& A)
{
  ostr << A.data;
}

template<class T1>
inline istream& operator>>(istream& istr, const TListElem<T1>& A)
{
  istr >> A.data;
}

template<class T>
inline TListElem<T>::TListElem(T _data)
{
  data = _data;
  next = 0;
  SetPrev(0);
}

template<class T>
inline TListElem<T>::~TListElem()
{
  next = 0;
  SetPrev(0);
}

template<class T>
inline T TListElem<T>::GetData()
{
  return data;
}

template <class T>
inline TListElem<T>* TListElem<T>::GetNext()
{
  return next;
}

template <class T>
inline TListElem<T>* TListElem<T>::GetPrev()
{
  return prev;
}

template<class T>
inline void TListElem<T>::SetData(T _data)
{
  data = _data;
}

template<class T>
inline void TListElem<T>::SetNext(TListElem* _next)
{
  next = _next;
}

template<class T>
inline void TListElem<T>::SetPrev(TListElem* _prev)
{
  this->prev = _prev;
}

