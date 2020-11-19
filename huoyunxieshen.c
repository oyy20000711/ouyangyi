#include<stdio.h>
#include<stdlib.h>
typedef int dataType;
typedef struct node
{
	dataType data;
	struct node *next;

}LinkList;
//创建链表
LinkList* CreateList()
{
	LinkList *head;
	head=(LinkList*)malloc(sizeof(LinkList));
	head->next=NULL;
	return head;
}
//求链表的元素个数
int Size(LinkList *l)
{
	LinkList *p=l->next;
	int k=0;
	while(p)
	{
		k++;
		p=p->next;
	}
	return k;

}
//在链表l的第k个位置插入元素x
void Insert(LinkList *l,int k,dataType x)
{
	if(k<1) exit(1);
	LinkList *p=l;
	int i=0;
	while(p  && i<k-1)
	{
		p=p->next;
		i++;
	}
	if(!p) exit(1);
	LinkList *s=(LinkList*)malloc(sizeof(LinkList));
	s->data=x;
	s->next=p->next;
	p->next=s;
	return;
}
//删除链表l的第k个元素
void Delete(LinkList *l,int k)
{
	if (k<1) exit(1);
	LinkList *p=l;
	int i=0;
	while(p->next  &&  i<k-1)
	{
		p=p->next;
		i++;
	}
	if (p->next==NULL) exit(1);
	LinkList *q=p->next;
	p->next = q->next;
	free(q);
}
//判断来那边是否为空
int Empty(LinkList *l)
{
	return l->next==NULL;
}
//求链表l的第k个元素的值
dataType GetData(LinkList *l,int k)
{
	if (k<1) exit(1);
	LinkList *p = l;
	int i=0;
	while(p  &&  i<k)
	{
		p=p->next;
		i++;
	}
	if (!p) exit(1);
	return p->data;
}
//在链表l中查找值为x的元素
LinkList *Find(LinkList *l,dataType x)
{
	LinkList  *p=l->next;
	while (p && p->data!=x)
		p=p->next;
	return p;
}
//输出链表
void print(LinkList *l)
{
	LinkList *p=l->next;
	while (p)
	{
		printf("%d",p->data);
		p=p->next;
		printf("\n");
	}
}
//清空链表
void ClearList(LinkList *l)
{
	LinkList *p ,*q;
	p=l->next;
	while(p)
	{
		q=p;
		p=p->next;
		free(q);
	}
	l->next=NULL;
}
/*int main (int argc, char **argv)
{
	LinkList *list = CreateList();
	Insert(list,1,10);
	Insert(list,1,20);
	Delete(list,2);
	Insert(list,1,30);
	Insert(list,1,40); 
	printf("链表的元素个数为:%d\n",Size(list));
	print(list);
	printf("链表的第二个元素为:%d",GetData(list,2));
	return 0;
}*/
