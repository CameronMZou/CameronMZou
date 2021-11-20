#include<stdio.h> 
int main()
{
	int book[1001],i,j,t,n;
	for(i=0;i<=1000;i++)
		book[i]=0;  //建立空列表，全部都是0
	printf("请先输入要排序的数的个数："); 
	scanf("%d", &n);//读入个数n
	printf("第二行再输入数据\r\n我将把它升序和降序排列："); 
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);//读入n个数，并放入变量t中 
		book[t]++;//进行计数 
	}
	for(i=0;i<=1000;i++) //依次判断
		for(j=1;j<=book[i];j++)
			printf("%d ",i);//出现几次就打印几次 
	printf("\b\r\n");//"\r"是回车，"\n"是换行，"\b"是退格 
	for(i=1000;i>=0;i--)
		for(j=1;j<=book[i];j++)
			printf("%d ",i);
	printf("\b\r\n");
	printf("输出完毕");
	getchar();//用来暂停程序，以便查看输出内容 
	return 0;
}
