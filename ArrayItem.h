
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

