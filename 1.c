#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>//���ÿ�
//main����ǰ���int��ʾmain�������÷���һ������ֵ
/*int a = 100;*///ȫ�ֱ���
//int gobal = 2020;//ȫ�ֱ�����ͬ�����䣬��ͬԴ�ļ��� Ҳ�����ã����÷�Χ�ǳ���
//void test()//test�Ǻ�����void�������庯�����������ͣ�ע��������ֻ��main����һ��
//{
//	printf("%d\n", gobal);
//	extern int g_val;//�����ı�ʶ��extern
//	printf("gval=%d\n",g_val)


//}

//int main()//���������������ڣ�main��������ֻ��һ��
//{//�����
//	//test();//����
	//printf("%d\n",gobal);
	/*int a = 10;
	//{
		printf("a=%d\n", a);*///���н��
		//int a= 10;�ֲ������������ⲻ��ʹ�ã�������
	//}
	/*int a = 10;*///�ֲ�����,�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ������������bug����ͬ������ģ��ֲ���������
	/*printf("a=%d\n", a);*/
	/////*printf("Rookie\n");*/��/n��ʾ����
	//scanf("%d", &a);//scanf��Ҫƴ��&����Ϊȡ��ַ
	//printf("a=%d\n", a);//printf��Ҫƴ��print function����\���С�//ע��
	//ANSIC C89,C90
	//char�ַ���������
	//short������ age=20���ö����;���2*8��16������λ���ܱ�ʾ�������ֵ�� 2^16-1 ��ʡ�ڴ�
	//�������ͣ�int����
	//long������
	//float�����ȸ�����
	//double˫���ȸ�����          �ֽ�
	//printf("%d\n", sizeof(char));1 char ch ='A';��ϵͳ����һ���ֽڵ��ڴ������A
	//printf("%d\n", sizeof(short));2
	//printf("%d\n", sizeof(int));4
	//printf(/*"%d\n"*/, sizeof(long));4
	//printf("%d\n", sizeof(long long));8
	//printf("%d\n", sizeof(float));4
	//printf("%d\n", sizeof(double));8
	//short age = 20;//���ڴ�����2���ֽ�
	//float weight = 95.6f;//���ڴ������ĸ��ֽڣ��Ӹ�fϵͳ�Ͳ�������
	//int  0;
	//int sum = 0;//����Ҫ�����ڵ�ǰnum1 = 0, num2 =��������ǰ��
	//scanf("%d%d",&num1,&num2);//scanfΪ���뺯��
	//sum = num1 + num2;
	//printf("sum = %d\n",sum);
	//�ֲ��������������ڴ�{��ʼ����}������ȫ�ֱ��������������������������������
	// ����˵�ֲ�����������main�����{}��Ķ��оֲ�����
	//����ĺ�������
	//strcpy,strcat,sscanf,fopen,strlen����

//	return 0;//����0��0��ʾ����
//}






//�ڶ��ڿΣ���Ͽμ���
//#include<stdio.h>
//#define MAX 10// #define����ı�ʶ��������  ��ס���治����   �ֲ��Ǻ�����
// ���õĺ�������������ʹ��Ҫ�ӣ�
// 
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n",MAX);
	//3;//���泣��
	//100;
	//3.14;
	////const����������
	////numΪconst���ε� ������ �����ϻ��Ǳ���-�Ͷ����ʽ���һ������
	//const int num = 4;
	//printf("%d\n",num);
	////num = 8;//ǰ��const�Ѿ�������num��4���Ͳ����ٶ����8�ˣ����д����ɾ
	//////printf("%d\n",num); 
	//const int n = 10;//n�Ǳ��� ��n���г����ԣ���������˵n�ǳ�����
	//int arr[n] = {0};//���ó����ĵط���n�Ͳ��У�����10����ʾarr����10�����ͳ���

	/*return 0;
}*/

//ö�ٳ���-һһ�о٣�
//�Ա���ԭɫ������
//ö�ٹؼ���-enum
//
//#include<stdio.h>
//enum Sex
//{	
//	MALE,
//	FEMALE,//���峣����ʱ��ֻ�����һ���������Ӷ���
//	SECRET
//};
////MALE FEMALE SECRET-ö�ٳ���
//int main()
//{	
//    
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;	
//}
//#include<stdio.h>
//enum color
//{
//	RED,
//	BLUE,
//	YELLOW
//};//�ֺ��ǵ����Զ�����
//int main()
//{
//	enum color c = YELLOW;//��ӡ���������ֺ�����дʲôû��ϵ��ֻҪ�������е�һ������
//	printf("%d\n",RED);//0
//	printf("%d\n", YELLOW);//2
//	printf("%d\n", BLUE);//1
//	return 0;
/*}*///����ö�ٳ���������


////�ַ���//	"aszfghj";"hello";"";//���ַ���
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";//arr���飨������ϣ�
//	char arr2[] = { 'a','b','c','\0'};//��Ȼ������
//	printf("%s\n",arr1);//�ַ�����%s
//	printf("%s\n",arr2);//��û��\0������  "abc"�����a b c ��\0 
//	// \0���������ַ���ĩβ�� ��\0���ַ��������ı�־������Ϊ���ݣ���ת���ַ� ASCII��ֵΪ0  �ַ�0��ASCII��ֵΪ48  ����0����0��
//	return 0;
//}
//ASCII����'a'=97 'A=65'(ascii��ֵ) \0=0
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};//����\0��ʱ�������ֵ����һ����������\0
//	printf("%d\n",strlen(arr1));//strlen����string lenght�ַ�������
//	printf("%d\n",strlen(arr2));
//	return 0;
//}
//\n ,����  \tˮƽ�Ʊ����һ��Tab�ľ��룩
//C�������ת���ַ�������ĸ��/?


//#include<stdio.h>
//int main()
//{
//	
//	//("c:\\test\\32\\test.c");// ��ֹ��ʶ��Ϊ\t
//	printf("%c\n",'\'');
//	printf("%s\n", "\"");
//
//
//	return 0;
//}
//�����ֿ⺯�� ����ͷ�ļ���strlen�����Զ��庯����ADD�����Է������ã���ʡʱ��
// 
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}
//   \ddd :�� \32 --32��һ���˽������֣�ע��˽�������Ϊ0~7
//32��Ϊ�˽��� ����32��ʮ���Ƶ��Ǹ����� ASCII��ֵ����Ӧ���ַ�
// 
//   \xdd:��  \x61��һ��ʮ���������֣�ע��ʮ����������Ϊ0~F
//61��Ϊ16����  ����61ʮ���Ƶ��Ǹ����� ASCII��ֵ����Ӧ���Ǹ��ַ�
//#include<stdio.h>
//int main()
//{
//	printf("%c\n",'\32');//����
//	printf("%c\n", '\x61'); //a
//	return 0;
//}
//ASCII�� A��65����a��97����ֵ��32��bcd~~�Դ�����



//ѡ����䣨if else��==��ʾ�ж�  =��ʾ��ֵ if��󲻼�;
// ѭ����䣨while, for,  do while��line++   ifline>20000
// ��������


//#include<stdio.h>
//int Add(int x, int y)//�����ĵ���
//{
//	int z = x + y;//�������ʽ
//	return z;//f(x)
//}//������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("����������������:>");//�����Եı����ڶ����������ʹ�ӡ����
//	scanf("%d%d",&a,&b);//��ɨ�裬�����
//	sum = Add(a, b);//()�Ǻ������ò�����
//	printf("%d\n",sum);
//	return 0;
//}
 

//���飺һ����ͬ����Ԫ�صļ���
//#include<stdio.h>
//int main()
//{
//	int arr[10] =     {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����  []�����ǳ���
//	//��ЩԪ�ض����±� 0 1 2 3 4 5 6 7 8 9��n-1��
//	//printf("%d\n",arr[4]);//��ӡ������5�����±����ʽ����Ԫ�أ�[]��ŵ���Ԫ�ص��±�
//	int i = 0;
//	while (i < 10)//while����ѭ��������棬˭�����������ģ�������
//	{
//   			printf("%d ",arr[i]);
//			i++;
//	}
//return 0;	
//}
////
////
////
////	//char ch[5];
////	//float arr2[6];


//������  + - / * %//�Ӽ��˳���
//#include<stdio.h>
//int main()
//{
//	int a = 5 % 2;//ȡģ����������
//	printf("%d\n",a);
//	return 0;
//}

//��(2����)λ������<<(����) >>(����)
//#include<stdio.h>
//int main()
//{
//	int a = 1;//a=00000000000000000000000000000001(����4���ֽڣ�32������λ)
//	int b = a << 2;//�����λ����Чλ��
//	printf("%d\n",a);
//	printf("%d\n",b);
//	return 0;
//}


//(2����)λ��������&����λ�룩 |����λ��^����λ���ͬΪ1����ͬΪ0����ͬ������ͬΪ1����ͬΪ0  �пղ�һ������
// 8421��ָ��������1111�ɸߵ��͵�Ȩ�أ�0~15ȫ�������������,�ٴ���������λ��һλ���Դ�����
//#include<stdio.h>
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	//int c = a & b;//0*1+1*0+1*1=0001
//	//int c = a | b;//1+0+0+1+ 1+1(��������1+1=1)=0111
//	//int c = a ^ b;//0110
//	printf("%d\n",c);
//	return 0;
//}

//��ֵ��������+=��-=,*=,/=,&=,|=,^=,>>=,<<= ��Щ���Ƿ��ϸ�ֵ��
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	a = a + 1;
//	a += 1;//(������д����һ����)
//		return 0;
//}

//��Ŀ������������-���� ���Ǽ��ţ�+���� ���ǼӺţ�&��sizeof ~,--,++,*  �����ͣ���
//˫Ŀ������  ������������
//��Ŀ������   ������
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%d\n",sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));//sizeof����intʱ��������ʡ���Ǳ���ʱ������ʡ
//	return 0;
//}




/* #include<stdio.h>   
int main()
{
	int arr[10] = { 0 };
	int sz = 0;
	//10*sizeof(int)
	printf("%d\n",sizeof(arr)); 
	sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	printf("sz = %d\n",sz);
	return 0;//д��������߼�
}*/

//#include<stdio.h>
//#include<limits.h>
//
//int main()
//
//{
//	 INT_MAX;//int�����ֵ
//	int a = 3;
//	int b = 5;
//	/*int c = 0;*/
//	printf("����ǰa=%d b=%d\n",a,b);
///*	a = a + b;
//	b = a - b;
//	a = a - b;*///�Ӽ��� ����Ļ������������   
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;//���ʱ���������λ�����Բ������
//	//a += 2;
//	//b -= 2;
//	//c = a;
//	//a = b;
//	//b = c;//������ҵ�����֣��ɶ��Ըߣ�ִ��Ч�ʸ�
//	printf("������a=%d b=%d\n",a,b);
//	return 0;
//}

//���㷨��leetcode 200�����ң�

//#include<stdio.h>
//main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };//�ҳ�5
//	int ret = 0;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^ arr[i];//����ø�ֵ
//	}
//	printf("�����ǣ�%d\n", ret);//����ѭ��
//	return 0;
//}
//������㽻���� 0 ^ a = a, a ^ a = 0
//	              3^5^3=3^3^5=101
//��ͬ���㷨Ч�ʲ����Ƿǳ����





//дһ���ػ�����һ���������롰�������Ͳ��ػ���

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 30");
//again ://ע��"��"
//	printf("���ڰ���������� ����ɵ�� �������ĵ��Խ��ػ�");
//	scanf("%s",&input);
//	if (strcmp(input, "����ɵ��") == 0)//�ж�input���ǲ��� ����ɵ��-strcmp-string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//ʲôʱ����;,ʲôʱ���ã�����



//���Ľڿ�
//EOF -1 �ļ�������־


//#include<stdio.h>                      
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;  
//	if (num1 > num2)
//		printf("�ϴ�ֵ�ǣ�%d\n", num1);
//	else//else������˵��ڵ����
//		printf("�ϴ�ֵ�ǣ�%d\n",num2);
//	return 0;
//}


//#include<stdio.h>
//int Max(int x, int y)//���ص�x��y�������ͣ�����Max����Ϊ����
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max=Max(num1, num2);
//	printf("max=%d\n",max);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6 };//��������Ͳ������ͣ������Լ������� ���������Ԫ��������
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);//����sizeof��arr[10]��
//	printf("%d\n",sz);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = ~a;//��λȡ��~
//	//ԭ�� ���� ����
//	//����-1�����λ����λ���䣬���ఴλȡ��
//	//1111111111111111111111111111111  �������ڴ��д洢���Ƕ����ƵĲ���
//	//1111111111111111111111111111110
//	//1000000000000000000000000000001 (-1)
//	printf("%d\n",b);//��ӡ�����������ԭ��
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	/*int b = a++;*///����++���ȸ�ֵ����++  ��õ��ſ� �Ǹ�ֵ ��a����b
//	//int c = ++a;//ǰ��++����++���ڸ�ֵ
//	/*int b = a--;*/ //����--���ȸ�ֵ����--
//	int b = --a;// ǰ��--����--���ٸ�ֵ
//	//printf("a = %d b = %d c= %d\n",a,b,c);
//	printf("a = %d b= %d\n", a, b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;//()Ϊǿ������ת�� 3.14ԭΪdouble���͵� ��������Ӹ�int���ͱ�ʾǿ��ת��Ϊ����
//	return 0;
//}


//��ϵ������
// > ����
// >= ���ڵ���
// < С��
// <= С�ڵ���
// !=  �жϲ����
// ==  �ж����
// =  �Ǹ�ֵ������
//
//
// �߼�������
// && �߼��� 1*0 1*1
// || �߼��� 1+0 0+0

//
//#include<stdio.h>
//int main()
//{
//	// ��-0
//	// ��-��0
//	int a = 3;
//	int b = 5;
//	int c = a && b;//a,b��Ϊ��
//	printf("c = %d\n",c);//��ӡ������1
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	// ��-0
//	// ��-��0
//	int a = 0;
//	//int b = 5;
//	int b = 0;//a b��Ϊ0�ǲ�Ϊ��
//	int c = a||b;//a,b��һ��Ϊ��
//	printf("c = %d\n", c);//��ӡ������1
//	return 0;
//}


//����������(��Ŀ������)
//exp1?exp2:exp3  (�൱��if else ���)
//�����ʽ1���������ִ�б��ʽ2����������� ִ�б��ʽ����

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	//arr[4] �±����ò�����
//
//	return 0;
//}
//����������& * .->û�н�



////�����ؼ���
////register�Ĵ����ؼ���
//#include<stdio.h>
//int main()
//{
//	register int a = 10;//�����a����Ϊ�Ĵ�������  ���ڷŲ��ţ��������Լ����жϣ���Ϊ�����Ͼͼ�ʮ���Ĵ���  ��ΪҪƵ��������ʹ�ã�����������ٶ�
//	//�Ĵ���->���ٻ���->�ڴ�->Ӳ�� �ٶȴӸߵ��� ������С����  �漰���������
//	unsigned int a = 0;//�޷���������ʹ��-1 ������Ҳ��1
//	return 0;
//}
//�ؼ��ֲ��ܺͱ�������ͻ int float  (err)
//#include<stdio.h>
//int main()
//{
//	typedef unsigned int u_int;//���Ͷ��壨��������
//	unsigned int a = 10;
//	u_int b = 10;
//	return 0;
//}




//static���ξֲ�����
// �ֲ��������������ڱ䳤
// static����ȫ�ֱ���
// �ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ���ԭ�ļ��ڲ�ʹ��
// ����Դ�ļ���û��������
// static���κ���
// �ı��˺������������ԣ�ʧȥ�������������е��ⲿ��������
// ������ڲ���������
//#include<stdio.h>
//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�����.����������a�Ͳ������� �ֲ��������������ڱ䳤��
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while(i < 5)
//	{
//		test();//Ϊʲô�ӷֺ�? �����ʽ 
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	extern int g_val;//�����ⲿ���ŵ�
//	printf("%d\n",g_val);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	extern int Add(int,int);
//	sum = Add(a,b);
//	printf("sum = %d\n",sum);
//	return 0;
//}


//#define ����ĳ����ͺ�
//#include<stdio.h>
////#define MAX 100//����= ����ֻ�ÿո����
////#define���Զ��� ��--������
//
////�����Ķ���
//int Max(int x, int y)
//{
//	if (x > y)//ע�������ǣ��������ǣ�
//		return x;
//	else
//		return y;
//}
//#define MAX(X,Y) (X>Y?X:Y) //������
//int main()
//{
//	//����
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("%d\n",max);
//	//��
//	max = MAX(a,b);
//	//(a>b?a:b)  ��Ӧ��X Y
//	printf("%d\n",max);
//	return 0;
//} 

//ָ��
//Ҫ��ָ�룬����Ū���ڴ�
//�����е��ɵ�ַ���  32λ�Ļ� ����2^32����ַ���
//1�ڵ�33λ Ȩ����2^32
//��ָ����ú����ȽϽ�ʡ�ռ�

//
//#include<stdio.h>
//int main()
//{
//	int a = 10; 
//	int* p = &a; //��һ�ֱ���������ŵ�ַ�� ������ ָ����� �ͽ�p
//	//p��������int*������һ���﷨��ʽ ����*p��һ��
//	printf("%p\n",&a);//000000CCF60FFA34  ��ַ��ӡ����Ϊ16�������������Ǹ����������� 
//	printf("%p\n",p);
//	*p = 20;//*Ϊ �����ò����� (��ӷ��ʲ�����)ͨ��*p�ҵ�a�ĵ�ַ���Ѹõ�ַ�д��ֵ�滻Ϊ20
//	printf("%d\n",a);
//
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	printf("%d\n",sizeof(pc));//ָ��Ĵ�С
//	printf("%p\n",&ch);
//	*pc = 'w';
//	printf("%c\n",ch);//�ַ�����%c
//	return 0;
//}

//ָ���С   ��32λƽ̨��4���ֽڣ���64λƽ̨��8���ֽ�

//#include<stdio.h>
//int main()
//{
//	double d = 3.14;
//	double* pd=&d;
//	printf("%p\n",&d);
//	*pd = 6.28;   //pc  pd pf p
//	printf("%lf\n",d);//����Ҳ���Դ�ӡ*pd��    double���͵���%lf  
//	return 0;
//}

//�ṹ��

//�� �� �и��Ӷ���
//�����Ķ�������࣬�ýṹ���ʾ �ṹ�����Լ�������һ������
// structΪ�ṹ��ؼ���



//����һ���ṹ������
//#include<stdio.h>
//#include<string.h>
//struct Book
//{
//	char name[20];//C���Գ������
//	//short price;//�۸�55Ԫ
//	/*char price[10];*/  //�������д�Ļ�������������ôд��
//	short price;
//};//�ֺŲ���ȱ
//int main()
//{
//	//���ýṹ������ ������һ�������͵Ľṹ�����
//	struct Book b1 = {"C���Գ������",55};
//	printf("������%s\n",b1.name);
//	printf("�۸�%d\n",b1.price);
//	b1.price = 15;//price��һ��������������ֱ�Ӹ�
//	strcpy(b1.name,"sdfd");//name�������� �������Ǹ���ַ��
//	//strcpy--�ַ�������
//
//	printf("�޸ĺ�ļ۸�%d\n",b1.price);
//	printf("�޸ĺ�����ƣ�%s\n", b1.name);
//
//	return 0;
//}



//#include<stdio.h>
//struct Book 
//{
//	char name[20];
//	int price;
//};
//int main()
//{
//	struct Book b1 = {"C���Գ������",66};
//	struct Book* pb= &b1;
//	printf("%s\n",pb->name);
//	printf("%d\n", pb->price);//���ý����ã�ָ��pbֱ��ָ��
//	printf("%s\n", (*pb).name);//�����õ������һ�������д������   *pb���൱��b1��    ���ϣ���
//	//��������*pbʱ��b1��������Ѿ����ҵ��ˣ�������Ǿ��嵽��һ����
//	printf("%d\n", (*pb).price);
//	return 0;
//}


//�ṹ�� ����.��Ա
//�ṹ�� ָ��->��Ա






