#include <iostream>
#include <lib/elapsed/src/interface.h>
#include <tmp/src/test.h>

int main(int argc, const char* argv[])
{
    using namespace om636;

    Elapsed e;

    std::cout << e.seconds() << std::endl;

    ASSERT("dummy test");

    return 0;
}