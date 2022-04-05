#include "virtual_machine.h"

virtual_machine::virtual_machine(string msj)
{
    c = new component();
    c->showHello(msj);
}