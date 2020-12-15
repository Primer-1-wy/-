#include"p1_stu.h"
int main()
{
	NODE * h=NULL;
	h=create();//创建学生单链表
	display(h);  //输出（显示）链表全部节点信息

	h=insert(h);//插入新节点
	display(h);
	return 0;
}