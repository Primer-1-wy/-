

/*
�������ܣ�ͳ��ÿ���γ̵�ƽ����  
��������
����ֵ����
*/
void tongji_kecheng()
{

}

/*
�������ܣ�ͳ���ֵܷ�ƽ���� 
��������
����ֵ����
*/
void tongji_zf()
{

}

/*
�������ܣ�ͳ��ÿ���γ̲���������
��������
����ֵ����
*/
void tongji_nopass()
{

}


/*
�������ܣ�ͳ���Ӳ˵�
��������
����ֵ����
*/
void  tongji_zicaidan()
{
		int c=0;
		while(1)
		{
			printf("\n��������ͳ���Ӳ˵�������������");
			printf("\n�� 1��ͳ��ÿ���γ̵�ƽ����  ��");
			printf("\n�� 2��ͳ���ֵܷ�ƽ����      ��");
			printf("\n�� 3��ͳ��ÿ���γ̲�����������");
			printf("\n�� 0���������˵�            ��");
			printf("\n������������������������������");
			printf("\n�������������ѡ��");
			scanf("%d",&c);
			switch(c)
			{
			case 1:tongji_kecheng();
				break;
			case 2:tongji_zf();
				break;
			case 3: tongji_nopass();
				break;
			}
			if(c!=1&&c!=2&&c!=3)
				break;
		}
}
