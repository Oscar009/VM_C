#include "component.h"

component::component()
{
    cout << "Starting the vm configuration" << endl;
    int delay = 2;

    delay *= CLOCKS_PER_SEC;

    clock_t now = clock();

    while (clock() - now < delay)
        ;
}

void component::createVM(string name, string ostype)
{
    cout << "Creating VM " + name << endl;
    int delay = 5;

    delay *= CLOCKS_PER_SEC;

    clock_t now = clock();

    while (clock() - now < delay)
        ;
    string str = "VBoxManage createvm --name '" + name + "' --ostype '" + ostype + "' --register";
    const char *command = str.c_str();
    system(command);
}

void component::configHardware(string name, string cpus, string memoryRam, string vram) {}
void component::createStorage(string name, string storage) {}
void component::createSataController(string name) {}
void component::configIDEController(string name, string isoRoute) {}