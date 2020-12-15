#include"p1_stu.h"
/*
功能：创建链表
参数：无
返回值：NODE*
*/
NODE *create( )  //创建链表
{
  NODE *head, *tail, *pnew;
  char xuehao[11];//局部变量—学号
  int j; 
  head = (NODE *)malloc (sizeof(NODE));  //创建头节点
  if (head == NULL)   //创建失败,则返回
  {
    printf ("no enough memory!\n");
    return (NULL);
  }  
  head->next = NULL;    //头节点的指针域置NULL
  tail = head;                    //开始时尾指针指向头节点
  printf ("\n=====请输入学生信息=========\n");
  while (1)  //创建学生成绩线性链表
  {fflush(stdin);
	printf ("\n=====请输入学号(当输入#时结束)=\n");
    scanf ("%s", xuehao);  //输入学号到局部变量学号
    if (strcmp(xuehao,"#")==0)    //学号为#,循环退出
        break;
     //创建一新节点
    pnew = (NODE *)malloc (sizeof(NODE));  
    if (pnew == NULL)    //创建新节点失败,则返回
    {
      printf ("no enough memory!\n");
      return (NULL);
    }
	//节点数据域
    strcpy(pnew->xh,xuehao);//学号
	printf("\n请输入该学生的姓名=");
	scanf("%s",pnew->xm);
	printf("\n请输入该学生的性别=");
	fflush(stdin);
	scanf("%c",&pnew->xb);
	fflush(stdin);
    for(j=0;j<M;j++)
	{
		printf("\n请输入该学生的成绩%d=",j+1);
		scanf("%lf",&pnew->cj[j]); 
	}
	pnew->cj[M]=pnew->cj[0]+pnew->cj[1]+pnew->cj[2];
	pnew->cj[M+1]=pnew->cj[M]/M;
	//节点指针域
    pnew->next = NULL;  
    tail->next = pnew;     
    tail = pnew; 
  }
  return (head);
}
/*
功能：显示链表全部节点信息
参数：链表头节点指针
返回值：无
*/
void display(NODE *head)  
{
  NODE *p;
  int j;
  printf("\n学号   姓名   性别   语文  数学  外语  总分  平均分\n");
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
