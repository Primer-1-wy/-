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
