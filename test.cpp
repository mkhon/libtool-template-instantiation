#include <iostream>
#include "test.h"

template<class T>
void A<T>::print()
{
	std::cout << this->_t << std::endl;
}

template void A<const char *>::print();
