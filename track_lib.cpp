// Overloading new and delete
#include <iostream>
#include <stdlib.h>


void * operator new[](std::size_t n)
{
	void * p = ::operator new(n);
	std::cout << "array allocation of " << n << "bytes at address " << p << std::endl;
	return p;
}


void operator delete[](void * p) throw()
{
	std::cout << "freeing array at address " << p << std::endl;
	::operator delete(p);
}
