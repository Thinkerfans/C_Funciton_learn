#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

#define OK 1
#define ERROR 0
#define INIT_SIZE 10
#define INCREMENT_SIZE 5

typedef int Status;
typedef int Elemtype;

/*
* Data Struct
*/
typedef struct{
	Elemtype *elem;
	int length;
	int size;
}SqList;

Status InitList(SqList *l)
{
	l->elem = (Elemtype *) malloc(INIT_SIZE * sizeof(Elemtype));
	if(!l->elem)
	{
		return ERROR;
	}
	l->length = 0;
	l->size = INIT_SIZE;
	return OK;
}

Status DestroyList(SqList *l)
{
	free(l->elem);
	l->length = 0;
	l->size = 0;
	return OK;
}

Status ClearList(SqList *l)
{
	l->length = 0;
	return OK;
}

Status isEmpty(const SqList l)
{
	if(0 == l.length)
	{
		return TRUE;
	}
	return FALSE;
}

Status getLength(const SqList l)
{
	return l.length;
}

Status getElem(const SqList l, int i, Elemtype *e)
{
	if(i < 1 || i > l.length){
		return ERROR;
	}
	*e = l.elem[i-1];
	return OK;
}

Status compare(Elemtype e1,Elemtype e2)
{
	if(e1 == e2)
	{
		return 0;
	}
	else if(e1 > e2)
	{
		return 1;
	}else
	{
		return -1;
	}
}

void visit(Elemtype e)
{
	printf("%d ",e);
}

Status DeleteElem(SqList *l , int i, Elemtype *e)
{
	if(i <1 || i> l->length)
	{
		return ERROR;
	}
	Elemtype *p = &l->elem[i -1];
	*e = *p;
	for(; p <&l->elem[l->length];p++)
	{
		*(p) = *(p + 1);
	}
	--l->length;
	return OK;
}	

Status InsertElem(SqList *l, int i, Elemtype e)
{
	Elemtype *new;
	if(i <1 || i > l->length +1)
	{
		return ERROR;
	}

	if(l->length >= l->size)
	{
		new = (Elemtype *) realloc(l->elem,(l->size + INCREMENT_SIZE) *sizeof(Elemtype));
		if(!new){
			return ERROR;
		};
		l->elem = new;
		l->size += INCREMENT_SIZE;
	}
	Elemtype * p = &l->elem[i-1];
	Elemtype * q = &l->elem[l->length -1];
	for(; q>=p;q--)
	{
		*(q+1) = *q;
	}	
	*p = e;
	++l->length;
	return OK;
}	

Status TraverseList(const SqList l,void (*vist)(Elemtype))
{
	int i = 0;
	for(;i< l.length;i++)
	{
		visit(l.elem[i]);
	}
	return OK;
}



int main()
{
	SqList l;
	if(InitList(&l))
	{
		Elemtype e;
		printf("init ok \n");
		int i = 0;	
		for (;i<10;i++)
		{
			InsertElem(&l,i+1,i);
		}
		printf("len is %d\n",getLength(l));
		
		if(getElem(l,1,&e)){
			printf("the 1 element is %d\n",e);
		}else{
			printf("the 1 element not exist  \n");
		}
		
		if(isEmpty(l)){
			printf("the list is empty\n");
		}else{
			printf("the list is not  empty\n");
		}
		
		DeleteElem(&l,2, &e);
		printf("delete 1 element is %d\n",e);
		printf("list :");
		TraverseList(l,visit);
		if(DestroyList(&l))
		{
			printf("\n destroy success\n");
		}
		
	}




	return 0;	
}
