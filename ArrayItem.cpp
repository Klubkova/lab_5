//what has been changed in 5 lab

#ifndef ARRAYITEM_CPP
#define ARRAYITEM_CPP


#include "ArrayItem.h"
template <class T1, class T2, class T3> ArrayItem<T1, T2, T3>::ArrayItem() : pentagon(nullptr), rhombus(nullptr), trapeze(nullptr) {}
template <class T1, class T2, class T3> ArrayItem<T1,T2,T3>::ArrayItem(int index) : pentagon(nullptr), rhombus(nullptr), trapeze(nullptr), index(index) {}
template <class T1, class T2, class T3> ArrayItem<T1, T2, T3>::ArrayItem(std::shared_ptr<T1> &pentagon, int index) : pentagon(pentagon), rhombus(nullptr), trapeze(nullptr), index(index) {}
template <class T1, class T2, class T3> ArrayItem<T1, T2, T3>::ArrayItem(std::shared_ptr<T2> &rhombus, int index) : pentagon(nullptr), rhombus(rhombus), trapeze(nullptr), index(index) {}
template <class T1, class T2, class T3> ArrayItem<T1, T2, T3>::ArrayItem(std::shared_ptr<T3> &trapeze, int index) : pentagon(nullptr), rhombus(nullptr), trapeze(trapeze), index(index){}


template <class T1, class T2, class T3> void ArrayItem<T1, T2, T3>::SetIndex(int index)
{
	ArrayItem<T1, T2, T3>::index = index;
}

template <class T1, class T2, class T3> int ArrayItem<T1, T2, T3>::GetIndex()
{
	return index;
}

template <class T1, class T2, class T3> std::ostream& operator << (std::ostream &os, ArrayItem<T1, T2, T3> &item)


#endif


#ifndef ARRAYITEM_H
#define ARRAYITEM_H
#include "Pentagon.h"
#include "Rhombus.h"
#include "Trapeze.h"
#include <memory>

ArrayItem(int index);
ArrayItem(std::shared_ptr<T1> &pentagon, int index);
ArrayItem(std::shared_ptr<T2> &rhombus, int index);
ArrayItem(std::shared_ptr<T3> &trapeze, int index);

void SetIndex(int index);
int GetIndex();

private:
int index;
};
#endif // ARRAYITEM_H

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


#ifndef FIGUREARRAY_H
#define FIGUREARRAY_H
#include "Iterator.cpp"
#include <memory>

Iterator<T1, T2, T3> begin();
Iterator<T1, T2, T3> end();

private:
Iterator<T1, T2, T3> first;
Iterator<T1, T2, T3> last;
};

#endif


#include <iostream>
#include <cstdlib>
#include "FigureArray.cpp"

else if (x == 4)
{
    for (auto i : figure_array)	std::cout << *i << std::endl;
        }
        }
        return 0;
        }
        
        
