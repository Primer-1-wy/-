#include"p1_stu.h"
int main()
{
	NODE * h=NULL;
	h=create();//����ѧ��������
	display(h);  //�������ʾ������ȫ���ڵ���Ϣ

	h=insert(h);//�����½ڵ�
	display(h);
	return 0;
}