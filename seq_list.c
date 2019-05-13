

//#include <stdio.h>
#include "seq_list.h"

seq_list create_seq_list(void) //创建空顺序表
{
	seq_list L;
	L.length = 0;
	printf("创建空表\n");
	return L;
}

void insert_list(seq_list *L, data_type x, int i)
{
	int j;
	if(i<1 || i>L->length+1)
	{
		printf("position error");
		return;
	}
	if(L->length >= LISTSIZE)
	{
		printf("overflow");
		return;
	}
	for(j = L->length; j > i; j--)
	{
		L->data[j] = L->data[--j];
	}
	L->data[--j] = x;
}


void delete_list(seq_list *L, int i)
{
}


