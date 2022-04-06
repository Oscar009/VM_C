#include "component.h"

component::component()
{
    cout << "Hello desde constructor" << endl;
}

void component::showHello(string msj)
{
    cout << msj << endl;
    int delay = 5;

    delay *= CLOCKS_PER_SEC;

    clock_t now = clock();

    while (clock() - now < delay);
    system("ls");
}