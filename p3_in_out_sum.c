
/*
�������ܣ�����N��ѧ��ȫ����Ϣ
��������
����ֵ����
*/
void input()
{
	int i,j;
	printf("\n����ѧ��ȫ����Ϣ\n");
	for(i=0;i<N;i++)
	{
		fflush(stdin);//��ռ��̻�����
		printf("\n�������%d��ѧ��ѧ��=",i+1);
		gets(xuehao[i]);

		fflush(stdin);
		printf("\n�������%d��ѧ������=",i+1);
		gets(xm[i]);

		fflush(stdin);
		printf("\n�������%d��ѧ���Ա�=",i+1);
		xb[i]=getchar();

		fflush(stdin);
		printf("\n�������%d��ѧ���ɼ���",i+1);
		for(j=0;j<M;j++)
		{
			printf("\n��%d�ſ�=",j+1);scanf("%lf",&cj[i][j]);
		}
	}
}
/*
�������ܣ����N��ѧ��ȫ����Ϣ
��������
����ֵ����
*/
void output()
{
	int i,j;
	printf("\n   ѧ��     ����    �Ա�  �ɼ�1  �ɼ�2  �ɼ�3  �ܷ�  ƽ����\n");
	for(i=0;i<N;i++)
	{
		printf("%10s %8s  %2c ",xuehao[i],xm[i],xb[i]);
		for(j=0;j<M+2;j++)
			printf("%8.2lf",cj[i][j]);
		printf("\n");
	}
}
/*
�������ܣ�N��ѧ���ɼ���͡���ƽ��
��������
����ֵ����
*/
void sum_ave()
{
	int i,j;
	printf("\nѧ���ɼ���ͣ�ƽ����\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			cj[i][M]+=cj[i][j];
		cj[i][M+1]=cj[i][M]/M;
	}
	printf("\nѧ���ɼ���ͣ�ƽ���� ��ɣ���\n");
}
