//用循环迭代法+青蛙跳台阶(迭代思维：前面两个数相加等于后面两数，如a+b=c，然后b=c，a=b循环迭代)
#include<stdio.h>
int jump(int m)
{
	int a = 1;
	int b = 2;
	int c = 0;
	if (m == 1)
	{
		return 1;//如果一个台阶，则一种跳法
	}
	else if (m == 2)
	{
		return 2;//如果两个台阶，则两种跳法
	}
	while (m>2)//当>2个台阶，则进入循环
	{
		c = a + b;
		a = b;
		b = c;
		m--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入台阶数：");
	scanf("%d",&n);
	ret = jump(n);
	printf("总共有%d种跳法\n",ret);
	return 0;
}