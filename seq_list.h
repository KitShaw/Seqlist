

#ifndef __SEQ_LIST_H_
#define __SEQ_LIST_H_

#define LISTSIZE	100
typedef int data_type;         //data_type的类型可根据实践情况而定， 这里假设哦init

typedef struct{
	data_type data[LISTSIZE];  //向量data用于存放表结点
	int length;
}seq_list;

seq_list create_seq_list(void); //创建顺序表
void insert_list(seq_list *L, data_type x, int i);
void delete_list(seq_list *L, int i);

#endif //_SEQ_LIST_H_

