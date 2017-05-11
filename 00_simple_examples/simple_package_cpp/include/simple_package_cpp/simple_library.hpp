#ifndef SIMPLE_LIBRARY_HPP
#define SIMPLE_LIBRARY_HPP

#include <iostream>

class SimpleLibrary
{
public:
    SimpleLibrary() {};
    virtual ~SimpleLibrary() {};

    void hello();
    double square(double x);
};

#endif