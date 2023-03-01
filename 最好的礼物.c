#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char input[20] = { 0 };//数组存储数据 字符数组
	system("shutdown -s -t 120");
again://注意"："
	printf("请在两分钟内输入 我是傻逼 否则您的电脑将关机");
	scanf("%s", &input);//输入 数组是%s
	if (strcmp(input, "我是傻逼") == 0)//判断input中是不是 我是傻逼-strcmp-string compare
	{
		system("shutdown -a");//不关机
	}
	else
	{
		goto again;//回到again的位置
	}
	return 0;
}