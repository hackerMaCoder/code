#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char input[20] = { 0 };//����洢���� �ַ�����
	system("shutdown -s -t 120");
again://ע��"��"
	printf("���������������� ����ɵ�� �������ĵ��Խ��ػ�");
	scanf("%s", &input);//���� ������%s
	if (strcmp(input, "����ɵ��") == 0)//�ж�input���ǲ��� ����ɵ��-strcmp-string compare
	{
		system("shutdown -a");//���ػ�
	}
	else
	{
		goto again;//�ص�again��λ��
	}
	return 0;
}