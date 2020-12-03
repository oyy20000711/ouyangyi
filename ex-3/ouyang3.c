#include <stdio.h>
#include <stdlib.h>
typedef int dataType;
typedef struct node
{
	dataType data;
	struct node *next;
}
Linkstack;
//初始化链栈
Linkstack* Initstack()
{
	Linkstack *t=(Linkstack*)malloc(sizeof(Linkstack));
	t->next=NULL;
        return t;
}
//判断栈是否为空
int Empty(Linkstack *s)
{
        return s->next==NULL;
}
//元素x进栈
void push(Linkstack *s,dataType x)
{
        Linkstack *t;
	t=(Linkstack *)malloc(sizeof(Linkstack));
	t->data=x;
	t->next=s->next;
	s->next=t;
}
//出栈
void pop(Linkstack *s)
{
        if (Empty(s)) exit(1);
	struct *p=s->next;
	s->next=p->next;
	free(p);
}
//取栈顶元素的值
dataType Gettop(Linkstack *s)
{
	return s->next->data;
}
int main()
{
	Linkstack *s=Initstack();
	push(s,80);
	push(s,90);
	pop(s);
	push(s,70);
	printf("%d",GetTop(s));
}
