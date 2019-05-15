

//#include "/d/cygwin/usr/include/stdio.h"
#include "seq_list.h"

int main(int count, char * arg[])
{
	seq_list l;
	printf("Hello world!\n");
	l = create_seq_list();
	printf("表长为: %d\n", l.length);
	insert_list(&l, 230,  1);
	printf("表长为: %d\n", l.length);
	insert_list(&l, 587,  1);
	printf("表长为: %d\n", l.length);
	printf("l.data[0]=%d, l.data[1] = %d\n", l.data[0], l.data[1]);
	insert_list(&l, 587,  1);
	printf("表长为: %d\n", l.length);
	printf("l.data[0]=%d, l.data[2] = %d\n", l.data[0], l.data[1]);
	return 0;
}

