#include <iostream>
#include "test.h"

template<class T>
void A<T>::print()
{
	std::cout << this->_t << std::endl;
}

#ifdef _MSC_VER
#define LIBTEST_EXPORT __declspec(dllexport)
#else
#define LIBTEST_EXPORT
#endif

template LIBTEST_EXPORT class A<const char *>;
//template LIBTEST_EXPORT void A<const char *>::print();
