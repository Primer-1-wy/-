#include<stdio.h>
#include<stdlib.h>
#define M 3  //语文、数学、外语三门单科
struct  Grade_Info
{
	//数据域
  char xh[11];//学号
  char xm[10];//学生姓名    
  char xb;   //性别
  double  cj[M+2];//语文、数学、外语三门单科+总分+平均分
  //指针域
  struct  Grade_Info  *next;
};
typedef  struct  Grade_Info  NODE; 
