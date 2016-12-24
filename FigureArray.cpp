
#include "FigureArray.h"
//#include "Iterator.cpp"

{
	for (int i = 0; i < size; i++)
	{
		data[i].SetIndex(i);
	}
	first = Iterator<T1, T2, T3>(data);
	last = Iterator<T1, T2, T3>(&data[size]);
}

template <class T1, class T2, class T3> Iterator<T1, T2, T3> FigureArray<T1, T2, T3>::begin()
{
	//return begin;
	return Iterator<T1, T2, T3>(data);
}

template <class T1, class T2, class T3> Iterator<T1, T2, T3> FigureArray<T1, T2, T3>::end()
{
	//return end;
	return Iterator<T1, T2, T3>(&data[size]);
}

template <class T1, class T2, class T3> FigureArray<T1, T2, T3>::~FigureArray() {}

