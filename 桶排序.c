#include<stdio.h> 
int main()
{
	int book[1001],i,j,t,n;
	for(i=0;i<=1000;i++)
		book[i]=0;  //�������б�ȫ������0
	printf("��������Ҫ��������ĸ�����"); 
	scanf("%d", &n);//�������n
	printf("�ڶ�������������\r\n�ҽ���������ͽ������У�"); 
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);//����n���������������t�� 
		book[t]++;//���м��� 
	}
	for(i=0;i<=1000;i++) //�����ж�
		for(j=1;j<=book[i];j++)
			printf("%d ",i);//���ּ��ξʹ�ӡ���� 
	printf("\b\r\n");//"\r"�ǻس���"\n"�ǻ��У�"\b"���˸� 
	for(i=1000;i>=0;i--)
		for(j=1;j<=book[i];j++)
			printf("%d ",i);
	printf("\b\r\n");
	printf("������");
	getchar();//������ͣ�����Ա�鿴������� 
	return 0;
}
