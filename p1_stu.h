#include<stdio.h>
#include<stdlib.h>
#define M 3  //���ġ���ѧ���������ŵ���
struct  Grade_Info
{
	//������
  char xh[11];//ѧ��
  char xm[10];//ѧ������    
  char xb;   //�Ա�
  double  cj[M+2];//���ġ���ѧ���������ŵ���+�ܷ�+ƽ����
  //ָ����
  struct  Grade_Info  *next;
};
typedef  struct  Grade_Info  NODE; 
