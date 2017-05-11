#include "simple_package_cpp/simple_library.hpp"

void SimpleLibrary::hello()
{
    std::cout << "Hello, world!" << std::endl;
}

double SimpleLibrary::square(double x)
{
    return x * x;
}