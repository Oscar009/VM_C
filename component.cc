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
    cout << "Creating VM... " << endl;
    int delay = 3;

    delay *= CLOCKS_PER_SEC;

    clock_t now = clock();

    while (clock() - now < delay)
        ;
    string str = "VBoxManage createvm --name '" + name + "' --ostype '" + ostype + "' --register";
    const char *command = str.c_str();
    system(command);
}

void component::configHardware(string name, string cpus, string memoryRam, string vram)
{
    cout << "Configuring hardware... " << endl;
    int delay = 3;

    delay *= CLOCKS_PER_SEC;

    clock_t now = clock();

    while (clock() - now < delay)
        ;
    string str = "VBoxManage modifyvm '" + name + "' --cpus '" + cpus + "' --memory '" + memoryRam + "' --vram '" + vram + "'";
    const char *command = str.c_str();
    system(command);
}

void component::createStorage(string name, string storage)
{
    cout << "Creating hard drive disk..." << endl;
    int delay = 3;

    delay *= CLOCKS_PER_SEC;

    clock_t now = clock();

    while (clock() - now < delay)
        ;
    string str = "VBoxManage createhd --filename ~/'VirtualBox Vms'/'" + name + "' --size '" + storage + "'";
    const char *command = str.c_str();
    system(command);
}

void component::createSataController(string name)
{
    cout << "Creating Sata Controller..." << endl;
    int delay = 2;

    delay *= CLOCKS_PER_SEC;

    clock_t now = clock();

    while (clock() - now < delay)
        ;
    string str = "VBoxManage storagectl '" + name + "' --name 'SATA Controller' --add sata --bootable on";
    const char *command = str.c_str();
    system(command);

    delay = 2;

    delay *= CLOCKS_PER_SEC;

    now = clock();

    while (clock() - now < delay)
        ;
    str = "VBoxManage storageattach '" + name + "' --storagectl 'SATA Controller' --port 0 --device 00 --type hdd --medium ~/'VirtualBox Vms'/'" + name + "'.vdi";
    command = str.c_str();
    system(command);
}

void component::configIDEController(string name, string isoRoute)
{
    cout << "Creating IDE Controller..." << endl;
    int delay = 3;

    delay *= CLOCKS_PER_SEC;

    clock_t now = clock();

    while (clock() - now < delay)
        ;
    string str = "VBoxManage storagectl '" + name + "' --name 'IDE Controller' --add ide";
    const char *command = str.c_str();
    system(command);

    delay = 3;

    delay *= CLOCKS_PER_SEC;

    now = clock();

    while (clock() - now < delay)
        ;
    str = "VBoxManage storageattach '" + name + "' --storagectl 'IDE Controller' --port 0 --device 0 --type dvddrive --medium '" + isoRoute + "'";
    command = str.c_str();
    system(command);
}
void component::listConfig(string name, string search)
{
    cout << "Listing VM info..." << endl;
    int delay = 3;

    delay *= CLOCKS_PER_SEC;

    clock_t now = clock();

    while (clock() - now < delay)
        ;
    string str = "VBoxManage showvminfo '" + name + "'";
    const char *command = str.c_str();
    system(command);

    delay = 2;

    delay *= CLOCKS_PER_SEC;

    now = clock();

    while (clock() - now < delay)
        ;
    str = "VBoxManage showvminfo '" + name + "' | grep '"+ search+"'";
    command = str.c_str();
    system(command);
}

void component::startVM(string name)
{
    int delay = 2;

    delay *= CLOCKS_PER_SEC;

    clock_t now = clock();

    while (clock() - now < delay)
        ;
    string str = "VBoxManage startvm '" + name + "'";
    const char *command = str.c_str();
    system(command);
}
