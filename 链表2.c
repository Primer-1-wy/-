��ʦ˵��struct  Grade_Info
{
  int  score;    
  struct  Grade_Info  *next;
};
typedef  struct  Grade_Info  NODE; 

��ʦ˵��NODE *Create_LinkList ( )  //��������
{
  NODE *head, *tail, *pnew;
  int scor;
  head = (NODE *)malloc (sizeof(NODE));  //����ͷ�ڵ�
  if (head == NULL)   //����ʧ��,�򷵻�
  {
    printf ("no enough memory!\n");
    return (NULL);
  }  
  head->next = NULL;    //ͷ�ڵ��ָ������NULL
  tail = head;                    //��ʼʱβָ��ָ��ͷ�ڵ�
  printf ("input the score of students:\n");
  while (1)  //����ѧ���ɼ���������
  {
    scanf ("%d", &score);  //����ɼ�
    if (score < 0)         //�ɼ�Ϊ��,ѭ���˳�
        break;
     //����һ�½ڵ�
    pnew = (NODE *)malloc (sizeof(NODE));  
    if (pnew == NULL)    //�����½ڵ�ʧ��,�򷵻�
    {
      printf ("no enough memory!\n");
      return (NULL);
    }
    pnew->score = score;   
    pnew->next = NULL;  
    tail->next = pnew;     
    tail = pnew; 
  }
  return (head);
}
��ʦ˵��void Display_LinkList(NODE *head)  
{
  NODE *p;
  for (p = head->next; p != NULL; p = p->next)
      printf ("%d ", p->score);
  printf ("\n");
}

��ʦ˵��struct  Grade_Info
{
	//������
  char xm[10];//ѧ������   
  char xh[11];//ѧ��
  char xb;   //�Ա�
  double  cj[M+2];//���ġ���ѧ���������ŵ���+�ܷ�+ƽ����
  //ָ����
  struct  Grade_Info  *next;
};
��ʦ˵��#include"p1_stu.h"
/*
���ܣ���������
��������
����ֵ��NODE*
*/
NODE *create( )  //��������
{
  NODE *head, *tail, *pnew;
  char xuehao[11];//�ֲ�������ѧ��
  int j; 
  head = (NODE *)malloc (sizeof(NODE));  //����ͷ�ڵ�
  if (head == NULL)   //����ʧ��,�򷵻�
  {
    printf ("no enough memory!\n");
    return (NULL);
  }  
  head->next = NULL;    //ͷ�ڵ��ָ������NULL
  tail = head;                    //��ʼʱβָ��ָ��ͷ�ڵ�
  printf ("\n=====������ѧ����Ϣ=========\n");
  while (1)  //����ѧ���ɼ���������
  {
	printf ("\n=====������ѧ��(������#ʱ����)=\n");
    scanf ("%s", xuehao);  //����ѧ�ŵ��ֲ�����ѧ��
    if (strcmp(xuehao,"#")==0)    //ѧ��Ϊ#,ѭ���˳�
        break;
     //����һ�½ڵ�
    pnew = (NODE *)malloc (sizeof(NODE));  
    if (pnew == NULL)    //�����½ڵ�ʧ��,�򷵻�
    {
      printf ("no enough memory!\n");
      return (NULL);
    }
	//�ڵ�������
    strcpy(pnew->xh,xuehao);//ѧ��
	printf("\n�������ѧ��������=");
	scanf("%s",pnew->xm)
	printf("\n�������ѧ�����Ա�=");
	scanf("%c",&pnew->xb)
    for(j=0;j<M;j++)
	{
		printf("\n�������ѧ���ĳɼ�%d=",j+1);
		scanf("%lf",pnew->cj[j]); 
	}
	pnew->cj[M]=pnew->cj[0]+pnew->cj[1]+pnew->cj[2];
	pnew->cj[M+1]=pnew->cj[M]/M;
	//�ڵ�ָ����
    pnew->next = NULL;  
    tail->next = pnew;     
    tail = pnew; 
  }
  return (head);
}
/*
���ܣ���ʾ����ȫ���ڵ���Ϣ
����������ͷ�ڵ�ָ��
����ֵ����
*/
void display(NODE *head)  
{
  NODE *p;
  int j;
  printf("\nѧ��   ����   �Ա�   ����  ��ѧ  ����  �ܷ�  ƽ����\n");
  for (p = head->next; p != NULL; p = p->next)
  {
	  printf("%-12s%-8s%-3c", pnew->xh,pnew->xm,pnew->xb,)
 	 for(j=0;j<M+2;j++)
	 {
		printf("%6.1lf",pnew->cj[j]); 
	 }	
  }
  printf ("\n");
}
