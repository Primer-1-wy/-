void zhucaidan()
{
	int choice=0,choice_paixu=0,choice_chazhao=0,choice_tongji=0;
	while(1)
    {
		printf("\n┏━━━━━━菜单━━━━━┓");
		printf("\n┃ 1、输入全部学生成绩      ┃");
		printf("\n┃ 2、学生成绩求和，平均分  ┃");
		printf("\n┃ 3、输出三个学生成绩      ┃");
		printf("\n┃ 4、排序                  ┃");
		printf("\n┃ 5、查找                  ┃");
		printf("\n┃ 6、统计                  ┃");
		printf("\n┃ 0、退出                  ┃");
		printf("\n┗━━━━━━━━━━━━━┛");
		printf("\n━━请输入你的选择：");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:printf("\n输入%d个学生信息\n",N);
			 input( ); 
			 break;
		case 2:sum_ave( );
		     break;
		case 3: output( );
		      break;
		case 4: paixu_zicaidan();//排序子菜单				
			break;
		case 5: chazhao_zicaidan();//查找
			        break;
		case 6: tongji_zicaidan();//统计
			       break;
		default: printf("\n退出\n");exit(0);
		}
		fflush(stdin);//吸收脏数据—回车
	}
}