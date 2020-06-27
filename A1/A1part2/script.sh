ME/A1/A1part2
mkdir A1part1
cd A1p
#!/bin/sh
cd $HOME/A1/A1part2
mkdir A1part1
cd A1part1
mkdir folder1
mkdir folder2
mkdir folder3
cd folder1
touch file1.txt
touch file2.txt
cd ../folder2
touch file3.txt
touch file4.txt
cd ../folder3
ln -s $HOME/cs3377/A1/A1part2/A1part1/folder2/file4.txt link5
cd $HOME/cs3377/A1/A1part2
date > ./A1part1/folder1/file1.txt
uname -a > ./A1part1/folder1/file2.txt
whoami > ./A1part1/folder2/file3.txt
ls -l > ./A1part1/folder2/file4.txt
ls -lR > task2log.txt
ls -lR
ls -lR | wc
cd $HOME/cs3377/A1/A1part2/A1part1/folder1
chmod 751 file1.txt file2.txt
cd $HOME/cs3377/A1/A1part2/A1part1/folder2
chmod 715 file3.txt file4.txt
cd $HOME/cs3377/A1/A1part2
ls -lR > task3log.txt
ls -lR
ls -lR | wc
cd $HOME/cs3377/A1/A1part2/A1part1
whoami
date
uname -a
touch task4log.txt
ls -lR --si    >> task4log.txt
ls -lR --sort=time  	>> task4log.txt
ls -lR --sort=size   	>> task4log.txt
ls -lR --si
ls -lR --sort=time  
ls -lR --sort=size   
ls -lR | wc
cd $HOME/cs3377/A1/A1part2
tar -cvf A1part1.tar A1part1/
zip A1part1.zip A1part1/ -r -y
gzip A1part1.tar 
cd $HOME/cs3377/A1/A1part2
whoami
date
hostname
ls -lR > task5log.txt
ls -lR 
ls -lR | wc


