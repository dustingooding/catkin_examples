#include "simple_package_cpp/simple_library.hpp"

int main(int argc, char** argv)
{
    SimpleLibrary sl;

    sl.hello();
    std::cout << "4*4 = " << sl.square(4) << std::endl;

    return 0;
};