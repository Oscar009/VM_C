# Create VM from VirtualBox commands through c++

## To compile

Use archives that already exists.

```
g++ component.cc main.cc virtual_machine.cc -o a.out
```

## To run

Fill in the fields for the VM configuration.

./a.out \[nameVM\] \[ostypeVM\] \[numberOfCpus\] \[numberOfRamMemory\] \[numberOfVideoMemory\] \[numberForDiskSpace\] \[isoRoute\] \[AtrributeToSearch\] 

For example:
```
./a.out Ubuntu_linux Ubuntu_64 2 2048 12 20480 ~/Escritorio/ubuntu-20.04.4-desktop-amd64.iso Memory
```
