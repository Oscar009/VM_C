#ifndef virtual_machine_h
#define virtual_machine_h

#include <iostream>
#include <string>

#include "component.h"

using namespace std;

class virtual_machine
{

    component *c;

public:
    virtual_machine(string, string, string, string, string, string, string);
    ~virtual_machine() {}
};

#endif