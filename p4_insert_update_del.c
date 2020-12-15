#include"p1_stu.h"

/*
功能：在head链表中追加一个新节点
参数：链表头结点
返回值：链表头结点
*/
NODE *append(NODE * head)
{
	return head;
}/*
功能：在head链表中插入一个新节点
参数：链表头结点
返回值：链表头结点
*/
NODE *insert(NODE * head)
{
	NODE *p=NULL;
	NODE *q=head;
	int j;
	int i;
	char xingming[10];
	p= (NODE *)malloc (sizeof(NODE));  //创建新节点
	if (p == NULL)   //创建失败,则返回
	{
	  printf ("no enough memory!\n");
	 return (NULL);
	 } 
	//数据域
	printf("\n请输入新学生的学号=");
	scanf("%s",p->xh);	
	printf("\n请输入新学生的姓名=");
	scanf("%s",p->xm);
	printf("\n请输入新学生的性别=");
	fflush(stdin);
	scanf("%c",&p->xb);
    for(j=0;j<M;j++)
	{
		printf("\n请输入该学生的成绩%d=",j+1);
		scanf("%lf",&p->cj[j]); 
	}
	p->cj[M]=p->cj[0]+p->cj[1]+p->cj[2];
	p->cj[M+1]=p->cj[M]/M;
	//指针域
	//方案1插入到第几个节点之后
/***	printf("\n请输入你想把新节点插入到第几个节点后：\ni=");
	scanf("%d",&i);
	j=0;
	while(q->next!=NULL)
	{
		q=q->next;
		j++;
		if(j>=i)
			break;
	}
	if(q->next!=NULL)
	{	//插入
		 p->next = q->next ;  
		 q->next = p;        
	}
	else
	{	//追加
		q->next=p;
		p->next=NULL;
	}*////
	//方案2插入到哪个节点之后
	printf("\n你想把新节点插入到哪个节点后：\n姓名=");
	scanf("%s",xingming);
	while(q->next!=NULL)
	{
		q=q->next;
		if(strcmp(q->xm,xingming)==0)
			break;
	}
	if(q->next!=NULL)
	{	//插入
		 p->next = q->next ;  
		 q->next = p;        
	}
	else
	{	//追加
		q->next=p;
		p->next=NULL;
	}
	return head;
}
/*
功能：在head链表中修改一个节点信息
参数：链表头结点
返回值：链表头结点
*/
NODE *update(NODE * head)
{
	return head;
}
/*
功能：在head链表中删除一个节点
参数：链表头结点
返回值：链表头结点
*/
NODE *del(NODE * head)
{
	return head;
}