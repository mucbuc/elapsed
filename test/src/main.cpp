#include <iostream>
#include <plank/src/test.h>
#include "interface.h"

int main(int argc, const char * argv[])
{
    using namespace om636;

	Elapsed e;

	std::cout << e.seconds() << std::endl;
	
	return 0;
}