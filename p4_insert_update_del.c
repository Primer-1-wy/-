#include"p1_stu.h"

/*
���ܣ���head������׷��һ���½ڵ�
����������ͷ���
����ֵ������ͷ���
*/
NODE *append(NODE * head)
{
	return head;
}/*
���ܣ���head�����в���һ���½ڵ�
����������ͷ���
����ֵ������ͷ���
*/
NODE *insert(NODE * head)
{
	NODE *p=NULL;
	NODE *q=head;
	int j;
	int i;
	char xingming[10];
	p= (NODE *)malloc (sizeof(NODE));  //�����½ڵ�
	if (p == NULL)   //����ʧ��,�򷵻�
	{
	  printf ("no enough memory!\n");
	 return (NULL);
	 } 
	//������
	printf("\n��������ѧ����ѧ��=");
	scanf("%s",p->xh);	
	printf("\n��������ѧ��������=");
	scanf("%s",p->xm);
	printf("\n��������ѧ�����Ա�=");
	fflush(stdin);
	scanf("%c",&p->xb);
    for(j=0;j<M;j++)
	{
		printf("\n�������ѧ���ĳɼ�%d=",j+1);
		scanf("%lf",&p->cj[j]); 
	}
	p->cj[M]=p->cj[0]+p->cj[1]+p->cj[2];
	p->cj[M+1]=p->cj[M]/M;
	//ָ����
	//����1���뵽�ڼ����ڵ�֮��
/***	printf("\n������������½ڵ���뵽�ڼ����ڵ��\ni=");
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
	{	//����
		 p->next = q->next ;  
		 q->next = p;        
	}
	else
	{	//׷��
		q->next=p;
		p->next=NULL;
	}*////
	//����2���뵽�ĸ��ڵ�֮��
	printf("\n������½ڵ���뵽�ĸ��ڵ��\n����=");
	scanf("%s",xingming);
	while(q->next!=NULL)
	{
		q=q->next;
		if(strcmp(q->xm,xingming)==0)
			break;
	}
	if(q->next!=NULL)
	{	//����
		 p->next = q->next ;  
		 q->next = p;        
	}
	else
	{	//׷��
		q->next=p;
		p->next=NULL;
	}
	return head;
}
/*
���ܣ���head�������޸�һ���ڵ���Ϣ
����������ͷ���
����ֵ������ͷ���
*/
NODE *update(NODE * head)
{
	return head;
}
/*
���ܣ���head������ɾ��һ���ڵ�
����������ͷ���
����ֵ������ͷ���
*/
NODE *del(NODE * head)
{
	return head;
}