#include "component.h"

component::component()
{
    cout << "Hello desde constructor" << endl;
}

void component::showHello(string msj)
{
    cout << msj << endl;
    system("ls");
}