#include"p1_stu.h"
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
  {fflush(stdin);
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
	scanf("%s",pnew->xm);
	printf("\n�������ѧ�����Ա�=");
	fflush(stdin);
	scanf("%c",&pnew->xb);
	fflush(stdin);
    for(j=0;j<M;j++)
	{
		printf("\n�������ѧ���ĳɼ�%d=",j+1);
		scanf("%lf",&pnew->cj[j]); 
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
	  printf("%-12s%-8s%-3c", p->xh,p->xm,p->xb);
 	 for(j=0;j<M+2;j++)
	 {
		printf("%6.1lf",p->cj[j]); 
	 }
	 printf ("\n");
  }
  
}
