#include <iostream>
#include "test.h"

template<class T>
void A<T>::print()
{
	std::cout << "[explicit instantiation]: " <<this->_t << std::endl;
}

#ifdef _MSC_VER
#define LIBTEST_EXPORT __declspec(dllexport)
#else
#define LIBTEST_EXPORT
#endif

template class LIBTEST_EXPORT A<const char *>;
//template LIBTEST_EXPORT void A<const char *>::print();

template<>
void A<std::string>::print()
{
	std::cout << "[specizalization]: " << this->_t << std::endl;
}
