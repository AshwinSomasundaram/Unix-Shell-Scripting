#include<iostream>
#include<sys/syscall.h>
#include<cstdlib>
#include<unistd.h>

int main()
{
system("g++ prog1.c -o prog1");
system("./prog1");
return 0;
}

