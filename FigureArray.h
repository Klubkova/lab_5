
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

