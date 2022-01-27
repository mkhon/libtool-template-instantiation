#include <string>

#include "test.h"

int
main()
{
	A<const char *>("Hello, world").print();
	A<std::string>("Hi, there").print();
	return 0;
}
