#include "virtual_machine.h"

virtual_machine::virtual_machine(string name, string ostype, string cpus, string memoryRam, string vram, string storage, string isoRoute, string search)
{
    c = new component();
    c->createVM(name, ostype);
    c->configHardware(name, cpus, memoryRam, vram);
    c->createStorage(name, storage);
    c->createSataController(name);
    c->configIDEController(name, isoRoute);
    c->listConfig(name, search);
    c->startVM(name);
}