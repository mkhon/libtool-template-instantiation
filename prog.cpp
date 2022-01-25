#include "test.h"

int
main()
{
	A<const char *> hello("Hello, world");
	hello.print();
	return 0;
}
