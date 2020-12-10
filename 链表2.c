老师说：struct  Grade_Info
{
  int  score;    
  struct  Grade_Info  *next;
};
typedef  struct  Grade_Info  NODE; 

老师说：NODE *Create_LinkList ( )  //创建链表
{
  NODE *head, *tail, *pnew;
  int scor;
  head = (NODE *)malloc (sizeof(NODE));  //创建头节点
  if (head == NULL)   //创建失败,则返回
  {
    printf ("no enough memory!\n");
    return (NULL);
  }  
  head->next = NULL;    //头节点的指针域置NULL
  tail = head;                    //开始时尾指针指向头节点
  printf ("input the score of students:\n");
  while (1)  //创建学生成绩线性链表
  {
    scanf ("%d", &score);  //输入成绩
    if (score < 0)         //成绩为负,循环退出
        break;
     //创建一新节点
    pnew = (NODE *)malloc (sizeof(NODE));  
    if (pnew == NULL)    //创建新节点失败,则返回
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
老师说：void Display_LinkList(NODE *head)  
{
  NODE *p;
  for (p = head->next; p != NULL; p = p->next)
      printf ("%d ", p->score);
  printf ("\n");
}

老师说：struct  Grade_Info
{
	//数据域
  char xm[10];//学生姓名   
  char xh[11];//学号
  char xb;   //性别
  double  cj[M+2];//语文、数学、外语三门单科+总分+平均分
  //指针域
  struct  Grade_Info  *next;
};
老师说：#include"p1_stu.h"
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
  {
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
	scanf("%s",pnew->xm)
	printf("\n请输入该学生的性别=");
	scanf("%c",&pnew->xb)
    for(j=0;j<M;j++)
	{
		printf("\n请输入该学生的成绩%d=",j+1);
		scanf("%lf",pnew->cj[j]); 
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
	  printf("%-12s%-8s%-3c", pnew->xh,pnew->xm,pnew->xb,)
 	 for(j=0;j<M+2;j++)
	 {
		printf("%6.1lf",pnew->cj[j]); 
	 }	
  }
  printf ("\n");
}
