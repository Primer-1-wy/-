

/*
函数功能：统计每个课程的平均分  
参数：无
返回值：无
*/
void tongji_kecheng()
{

}

/*
函数功能：统计总分的平均分 
参数：无
返回值：无
*/
void tongji_zf()
{

}

/*
函数功能：统计每个课程不及格人数
参数：无
返回值：无
*/
void tongji_nopass()
{

}


/*
函数功能：统计子菜单
参数：无
返回值：无
*/
void  tongji_zicaidan()
{
		int c=0;
		while(1)
		{
			printf("\n┏━━━统计子菜单━━━━━┓");
			printf("\n┃ 1、统计每个课程的平均分  ┃");
			printf("\n┃ 2、统计总分的平均分      ┃");
			printf("\n┃ 3、统计每个课程不及格人数┃");
			printf("\n┃ 0、返回主菜单            ┃");
			printf("\n┗━━━━━━━━━━━━━┛");
			printf("\n━━请输入你的选择：");
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
