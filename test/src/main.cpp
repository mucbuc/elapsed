#include <iostream>
#include <tmp/src/test.h>
#include <lib/elapsed/src/interface.h>

int main(int argc, const char * argv[])
{
    using namespace om636;

	Elapsed e;

	std::cout << e.seconds() << std::endl;
	
	ASSERT( "dummy test" ); 

	return 0;
}