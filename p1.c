#include<stdio.h>
#include<string.h>
#define N 5  //ѧ������
#define M 3   //�γ�����

//ȫ�ֱ���
char xuehao[N][12]={0},xm[N][7]={0},xb[N]={0}; //f-Ů m-��
double cj[N][M+2]={0};  //���ѧ��M�ŵ��Ƴɼ����ܷ֡�ƽ����

#include"p3_in_out_sum.c"
#include"p4_paixu.c"
#include"p5_chazhao.c"
#include"p6_tongji.c"
#include"p2_zhucaidan.c"
/*������*/
int main()
{
	
	zhucaidan();
	return 0;
}