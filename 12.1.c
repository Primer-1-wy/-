#include<stdio.h>
#include<stdlib.h>
struct STU
{
	char xm[20];
	char xuehao[20];
	char xb;
	double cj[3];
};
struct STU * input()
{
	//double p[10]; //操作系统自动分配
	struct STU *p=(struct STU*)calloc(10,sizeof(struct STU));//程序员主动动态分配
	int i;
	for(i=0;i<5;i++)
	{
		fflush(stdin);
		gets(p[i].xm);
		fflush(stdin);
		gets(p[i].xuehao);
		fflush(stdin);
		p[i].xb=getchar();
		fflush(stdin);
		scanf("%lf%lf%lf",&p[i].cj[0],&p[i].cj[1],&p[i].cj[2]);
	}
	return p;
}
int main()
{
	int i;
	struct STU *p;
	p=input();
	for(i=0;i<5;i++)
	{
		printf("%s   %s   %c  %5.1lf  %5.1lf  %5.1lf\n",
			   p[i].xm,p[i].xuehao,p[i].xb,p[i].cj[0],p[i].cj[1],p[i].cj[2]);
	}
	free(p);
}
