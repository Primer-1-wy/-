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
