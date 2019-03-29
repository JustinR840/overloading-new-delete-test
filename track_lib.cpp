// Overloading new and delete
#include <iostream>
#include <stdlib.h>


void * operator new[](std::size_t n)
{
	std::cout << "array allocation of " << n << "bytes" << std::endl;
	void * p = ::operator new(n);
	return p;
}


void operator delete[](void * p) throw()
{
	std::cout << "freeing array" << std::endl;
	::operator delete(p);
}
