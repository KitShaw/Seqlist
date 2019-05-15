
VPATH = inc
INCLUDE=-I/e/git/c/Seqlist/inc
seq_list.exe:main.o seq_list.o
	gcc -o seq_list.exe main.o seq_list.o
main.o:main.c
	gcc -c main.c 
seq_list.o:seq_list.c
	gcc -c seq_list.c
clean:
	rm *.o
pwd:
	pwd