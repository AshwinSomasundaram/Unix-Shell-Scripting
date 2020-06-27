#include<iostream>
#include <sys/syscall.h>
#include <cstdlib>
//todo main wrapper and include necessary libraries
#include <unistd.h>

int main() {
system("mkdir A1part1");
system("mkdir A1part1/folder1");
system("mkdir A1part1/folder2");
system("mkdir A1part1/folder3");
system("touch A1part1/folder1/file1.txt");
system("touch A1part1/folder1/file2.txt");
system("touch A1part1/folder2/file3.txt");
system("touch A1part1/folder2/file4.txt");
system("ln -s A1part1/folder2/file4.txt A1part1/folder3/file5.txt");
//task 2
chdir("$HOME/cs3377/A1/A1part3/");
system("date > ./A1part1/folder1/file1.txt");
system("uname -a > ./A1part1/folder1/file2.txt");
system("whoami > ./A1part1/folder2/file3.txt");
system("ls -l > ./A1part1/folder2/file4.txt");

system("ls -lR > task2log.txt");
system("ls -lR ");
system("ls -lR | wc ");

//task 3
system("chmod -R 751 ./A1part1/folder1/*");
system("chmod -R 715 ./A1part1/folder2/*");

chdir("$HOME/cs3377/A1/A1part3");
system("ls -lR > task3log.txt");
system("ls -lR");
system("ls -lR | wc");

//task 4
system("whoami");
system("date");
system("uname -a");
system("touch task4log.txt");
system("ls -lR --si >> task4log.txt");
system("ls -lR --sort=time >> task4log.txt");
system("ls -lR --sort=size >> task4log.txt");
system("ls -lR --si");
system("ls -lR --sort=time");
system("ls -lR --sort=size");
system("ls -lR | wc");

//task 5
chdir("$HOME/cs3377/A1/A1part3");
system("tar -cvf A1part1.tar A1part1/");
system("zip A1part1.zip A1part1 -ry");
system("gzip A1part1.tar -Nrv");
system("whoami");
system("date");
system("hostname");
system("ls -lR > task5log.txt");
system("ls -lR");
system("ls -lR | wc");

return 0;
}
