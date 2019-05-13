
VPATH = ./inc
seq_list.exe:main.o seq_list.o
	gcc -o seq_list.exe main.o seq_list.o
main.o:main.c seq_list.h
	gcc -c main.c
seq_list:seq_list.c
	gcc -c seq_list.c
clean:
	rm *.o