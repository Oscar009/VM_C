#ifndef component_h
#define component_h

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class component
{
public:
    component();
    ~component() {}

    void createVM(string, string);
    void configHardware(string, string, string, string);
    void createStorage(string, string);
    void createSataController(string);
    void configIDEController(string, string);
    void listConfig(string, string);
    void startVM(string);
};

#endif