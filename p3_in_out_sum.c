
/*
函数功能：输入N个学生全部信息
参数：无
返回值：无
*/
void input()
{
	int i,j;
	printf("\n输入学生全部信息\n");
	for(i=0;i<N;i++)
	{
		fflush(stdin);//清空键盘缓冲区
		printf("\n请输入第%d个学生学号=",i+1);
		gets(xuehao[i]);

		fflush(stdin);
		printf("\n请输入第%d个学生姓名=",i+1);
		gets(xm[i]);

		fflush(stdin);
		printf("\n请输入第%d个学生性别=",i+1);
		xb[i]=getchar();

		fflush(stdin);
		printf("\n请输入第%d个学生成绩：",i+1);
		for(j=0;j<M;j++)
		{
			printf("\n第%d门课=",j+1);scanf("%lf",&cj[i][j]);
		}
	}
}
/*
函数功能：输出N个学生全部信息
参数：无
返回值：无
*/
void output()
{
	int i,j;
	printf("\n   学号     姓名    性别  成绩1  成绩2  成绩3  总分  平均分\n");
	for(i=0;i<N;i++)
	{
		printf("%10s %8s  %2c ",xuehao[i],xm[i],xb[i]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[i][j]);
		printf("\n");
	}
}
/*
函数功能：N个学生成绩求和、求平均
参数：无
返回值：无
*/
void sum_ave()
{
	int i,j;
	printf("\n学生成绩求和，平均分\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			cj[i][M]+=cj[i][j];
		cj[i][M+1]=cj[i][M]/M;
	}
	printf("\n学生成绩求和，平均分 完成！！\n");
}
