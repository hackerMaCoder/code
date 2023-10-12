#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>//调用库
//main函数前面的int表示main函数调用返回一个整型值
/*int a = 100;*///全局变量
//int gobal = 2020;//全局变量不同函数间，不同源文件间 也可以用，作用范围非常大
//void test()//test是函数，void用来定义函数的数据类型，注意主函数只有main函数一个
//{
//	printf("%d\n", gobal);
//	extern int g_val;//声明的标识符extern
//	printf("gval=%d\n",g_val)


//}

//int main()//主函数—程序的入口，main函数有且只有一个
//{//代码块
//	//test();//调用
	//printf("%d\n",gobal);
	/*int a = 10;
	//{
		printf("a=%d\n", a);*///能有结果
		//int a= 10;局部变量在括号外不能使用（作用域）
	//}
	/*int a = 10;*///局部变量,局部变量和全局变量的名字建议不要相同，容易误会产生bug，当同名字相的，局部变量优先
	/*printf("a=%d\n", a);*/
	/////*printf("Rookie\n");*/，/n表示换行
	//scanf("%d", &a);//scanf不要拼错，&符号为取地址
	//printf("a=%d\n", a);//printf不要拼错（print function）；\换行。//注释
	//ANSIC C89,C90
	//char字符数据类型
	//short短整型 age=20，用短整型就行2*8，16个比特位，能表示的最大数值是 2^16-1 节省内存
	//数据类型：int整型
	//long长整型
	//float单精度浮点数
	//double双精度浮点数          字节
	//printf("%d\n", sizeof(char));1 char ch ='A';像系统申请一个字节的内存来存放A
	//printf("%d\n", sizeof(short));2
	//printf("%d\n", sizeof(int));4
	//printf(/*"%d\n"*/, sizeof(long));4
	//printf("%d\n", sizeof(long long));8
	//printf("%d\n", sizeof(float));4
	//printf("%d\n", sizeof(double));8
	//short age = 20;//像内存申请2个字节
	//float weight = 95.6f;//向内存申请四个字节，加个f系统就不报错了
	//int  0;
	//int sum = 0;//变量要定义在当前num1 = 0, num2 =代码块的最前面
	//scanf("%d%d",&num1,&num2);//scanf为输入函数
	//sum = num1 + num2;
	//printf("sum = %d\n",sum);
	//局部变量的生命周期从{开始，到}结束，全局变量的生命周期是整个程序的生命周期
	// 不是说局部变量都放在main函数里，{}里的都叫局部变量
	//报错的函数还有
	//strcpy,strcat,sscanf,fopen,strlen……

//	return 0;//返回0，0表示整数
//}






//第二节课（结合课件）
//#include<stdio.h>
//#define MAX 10// #define定义的标识符常量。  记住后面不带；   又不是函数？
// 调用的函数在主函数里使用要加；
// 
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n",MAX);
	//3;//字面常量
	//100;
	//3.14;
	////const常量的属性
	////num为const修饰的 常变量 本质上还是变量-和动名词解释一个道理
	//const int num = 4;
	//printf("%d\n",num);
	////num = 8;//前面const已经修饰了num是4，就不能再定义成8了，这行代码得删
	//////printf("%d\n",num); 
	//const int n = 10;//n是变量 但n又有常属性，所以我们说n是常变量
	//int arr[n] = {0};//该用常量的地方用n就不行，得用10，表示arr里有10个整型常量

	/*return 0;
}*/

//枚举常量-一一列举，
//性别，三原色，星期
//枚举关键字-enum
//
//#include<stdio.h>
//enum Sex
//{	
//	MALE,
//	FEMALE,//定义常量的时候，只有最后一个常量不加逗号
//	SECRET
//};
////MALE FEMALE SECRET-枚举常量
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
//};//分号是电脑自动带的
//int main()
//{
//	enum color c = YELLOW;//打印出来的数字和这里写什么没关系，只要是三个中的一个就行
//	printf("%d\n",RED);//0
//	printf("%d\n", YELLOW);//2
//	printf("%d\n", BLUE);//1
//	return 0;
/*}*///两个枚举常量的例子


////字符串//	"aszfghj";"hello";"";//空字符串
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";//arr数组（数字组合）
//	char arr2[] = { 'a','b','c','\0'};//不然烫烫烫
//	printf("%s\n",arr1);//字符串用%s
//	printf("%s\n",arr2);//有没有\0的问题  "abc"里包括a b c 和\0 
//	// \0是隐藏在字符串末尾的 （\0是字符串结束的标志，不作为内容，是转义字符 ASCII码值为0  字符0的ASCII码值为48  数字0就是0）
//	return 0;
//}
//ASCII编码'a'=97 'A=65'(ascii码值) \0=0
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};//不放\0的时候是随机值，不一定在哪遇到\0
//	printf("%d\n",strlen(arr1));//strlen——string lenght字符串长度
//	printf("%d\n",strlen(arr2));
//	return 0;
//}
//\n ,换行  \t水平制表符（一段Tab的距离）
//C语言里的转义字符：三字母词/?


//#include<stdio.h>
//int main()
//{
//	
//	//("c:\\test\\32\\test.c");// 防止误识别为\t
//	printf("%c\n",'\'');
//	printf("%s\n", "\"");
//
//
//	return 0;
//}
//函数分库函数 得引头文件（strlen）和自定义函数（ADD）可以反复调用，节省时间
// 
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}
//   \ddd :例 \32 --32是一个八进制数字，注意八进制数字为0~7
//32作为八进制 代表32的十进制的那个数字 ASCII码值所对应的字符
// 
//   \xdd:例  \x61是一个十六进制数字，注意十六进制数字为0~F
//61作为16进制  代表61十进制的那个数字 ASCII码值所对应的那个字符
//#include<stdio.h>
//int main()
//{
//	printf("%c\n",'\32');//方框
//	printf("%c\n", '\x61'); //a
//	return 0;
//}
//ASCII码 A（65）和a（97）差值是32，bcd~~以此类推



//选择语句（if else）==表示判断  =表示赋值 if句后不加;
// 循环语句（while, for,  do while）line++   ifline>20000
// 函数（）


//#include<stdio.h>
//int Add(int x, int y)//函数的调用
//{
//	int z = x + y;//函数表达式
//	return z;//f(x)
//}//函数体
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("请输入两个操作数:>");//文字性的表述在定义完变量后就打印出来
//	scanf("%d%d",&a,&b);//先扫描，再求和
//	sum = Add(a, b);//()是函数调用操作符
//	printf("%d\n",sum);
//	return 0;
//}
 

//数组：一组相同类型元素的集合
//#include<stdio.h>
//int main()
//{
//	int arr[10] =     {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整型数字的数组  []里面是常量
//	//这些元素都有下标 0 1 2 3 4 5 6 7 8 9（n-1）
//	//printf("%d\n",arr[4]);//打印出来是5，用下标的形式访问元素，[]里放的是元素的下标
//	int i = 0;
//	while (i < 10)//while放在循环体的外面，谁告诉你放里面的？？？？
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


//操作符  + - / * %//加减乘除余
//#include<stdio.h>
//int main()
//{
//	int a = 5 % 2;//取模，就是余数
//	printf("%d\n",a);
//	return 0;
//}

//移(2进制)位操作符<<(向左) >>(向右)
//#include<stdio.h>
//int main()
//{
//	int a = 1;//a=00000000000000000000000000000001(整型4个字节，32个比特位)
//	int b = a << 2;//（最高位是无效位）
//	printf("%d\n",a);
//	printf("%d\n",b);
//	return 0;
//}


//(2进制)位操作符：&（按位与） |（按位或）^（按位异或不同为1，相同为0），同或是相同为1，不同为0  有空补一下数电
// 8421是指二进制数1111由高到低的权重，0~15全可以用这个方法,再大的数就向高位算一位，以此类推
//#include<stdio.h>
//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	//int c = a & b;//0*1+1*0+1*1=0001
//	//int c = a | b;//1+0+0+1+ 1+1(二进制中1+1=1)=0111
//	//int c = a ^ b;//0110
//	printf("%d\n",c);
//	return 0;
//}

//赋值操作符（+=，-=,*=,/=,&=,|=,^=,>>=,<<= 这些都是符合赋值符
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	a = a + 1;
//	a += 1;//(这两种写法是一样的)
//		return 0;
//}

//单目操作符（！，-负号 不是减号，+正号 不是加号，&，sizeof ~,--,++,*  （类型））
//双目操作符  有两个操作数
//三目操作符   有三个
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%d\n",sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));//sizeof后是int时（）不能省，是变量时（）能省
//	return 0;
//}




/* #include<stdio.h>   
int main()
{
	int arr[10] = { 0 };
	int sz = 0;
	//10*sizeof(int)
	printf("%d\n",sizeof(arr)); 
	sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	printf("sz = %d\n",sz);
	return 0;//写代码得有逻辑
}*/

//#include<stdio.h>
//#include<limits.h>
//
//int main()
//
//{
//	 INT_MAX;//int型最大值
//	int a = 3;
//	int b = 5;
//	/*int c = 0;*/
//	printf("交换前a=%d b=%d\n",a,b);
///*	a = a + b;
//	b = a - b;
//	a = a - b;*///加减法 数大的话可能整型溢出   
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;//异或时不会产生进位，所以不会溢出
//	//a += 2;
//	//b -= 2;
//	//c = a;
//	//a = b;
//	//b = c;//进入企业用这种，可读性高，执行效率高
//	printf("交换后a=%d b=%d\n",a,b);
//	return 0;
//}

//考算法（leetcode 200道左右）

//#include<stdio.h>
//main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };//找出5
//	int ret = 0;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^ arr[i];//这里得赋值
//	}
//	printf("单身狗是：%d\n", ret);//跳出循环
//	return 0;
//}
//异或满足交换律 0 ^ a = a, a ^ a = 0
//	              3^5^3=3^3^5=101
//不同的算法效率差异是非常大的





//写一个关机程序，一分钟内输入“我是猪”就不关机了

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 30");
//again ://注意"："
//	printf("请在半分钟内输入 我是傻逼 否则您的电脑将关机");
//	scanf("%s",&input);
//	if (strcmp(input, "我是傻逼") == 0)//判断input中是不是 我是傻逼-strcmp-string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//什么时候用;,什么时候不用？？？



//第四节课
//EOF -1 文件结束标志


//#include<stdio.h>                      
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;  
//	if (num1 > num2)
//		printf("较大值是：%d\n", num1);
//	else//else里包含了等于的情况
//		printf("较大值是：%d\n",num2);
//	return 0;
//}


//#include<stdio.h>
//int Max(int x, int y)//返回的x和y都是整型，所以Max定义为整型
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
//	int arr[] = { 0,1,2,3,4,5,6 };//数组的类型不是整型，它有自己的类型 。数组里的元素是整型
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);//不是sizeof（arr[10]）
//	printf("%d\n",sz);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = ~a;//按位取反~
//	//原码 反码 补码
//	//补码-1，最高位符号位不变，其余按位取反
//	//1111111111111111111111111111111  复数在内存中存储的是二进制的补码
//	//1111111111111111111111111111110
//	//1000000000000000000000000000001 (-1)
//	printf("%d\n",b);//打印的是这个数的原码
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	/*int b = a++;*///后置++，先赋值，再++  你得倒着看 是赋值 把a赋给b
//	//int c = ++a;//前置++，先++，在赋值
//	/*int b = a--;*/ //后置--，先赋值，再--
//	int b = --a;// 前置--，先--，再赋值
//	//printf("a = %d b = %d c= %d\n",a,b,c);
//	printf("a = %d b= %d\n", a, b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;//()为强制类型转换 3.14原为double类型的 。（）里加个int类型表示强制转化为整型
//	return 0;
//}


//关系操作符
// > 大于
// >= 大于等于
// < 小于
// <= 小于等于
// !=  判断不相等
// ==  判断相等
// =  是赋值操作符
//
//
// 逻辑操作符
// && 逻辑与 1*0 1*1
// || 逻辑或 1+0 0+0

//
//#include<stdio.h>
//int main()
//{
//	// 假-0
//	// 真-非0
//	int a = 3;
//	int b = 5;
//	int c = a && b;//a,b都为真
//	printf("c = %d\n",c);//打印出来是1
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	// 假-0
//	// 真-非0
//	int a = 0;
//	//int b = 5;
//	int b = 0;//a b都为0是才为假
//	int c = a||b;//a,b有一个为真
//	printf("c = %d\n", c);//打印出来是1
//	return 0;
//}


//条件操作符(三目操作符)
//exp1?exp2:exp3  (相当于if else 语句)
//（表达式1如果成立，执行表达式2，如果不成立 执行表达式三）

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	//arr[4] 下标引用操作符
//
//	return 0;
//}
//操作符还差& * .->没有讲



////常见关键字
////register寄存器关键字
//#include<stdio.h>
//int main()
//{
//	register int a = 10;//建议把a定义为寄存器变量  至于放不放，编译器自己会判断，因为电脑上就几十个寄存器  因为要频繁大量的使用，提高了运算速度
//	//寄存器->高速缓存->内存->硬盘 速度从高到低 容量从小到大  涉及到造价问题
//	unsigned int a = 0;//无符号数，即使是-1 定义完也是1
//	return 0;
//}
//关键字不能和变量名冲突 int float  (err)
//#include<stdio.h>
//int main()
//{
//	typedef unsigned int u_int;//类型定义（重命名）
//	unsigned int a = 10;
//	u_int b = 10;
//	return 0;
//}




//static修饰局部变量
// 局部变量的生命周期变长
// static修饰全局变量
// 改变了变量的作用域，让静态的全局变量只能在自己的原文件内部使用
// 出了源文件就没法再用了
// static修饰函数
// 改变了函数的链接属性，失去正常函数所具有的外部链接属性
// 变成了内部链接属性
//#include<stdio.h>
//void test()
//{
//	static int a = 1;//a是一个静态的局部变量.出了作用域a就不销毁了 局部变量的生命周期变长了
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while(i < 5)
//	{
//		test();//为什么加分号? 语句表达式 
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	extern int g_val;//声明外部符号的
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


//#define 定义的常量和宏
//#include<stdio.h>
////#define MAX 100//不用= （）只用空格隔开
////#define可以定义 宏--带参数
//
////函数的定义
//int Max(int x, int y)
//{
//	if (x > y)//注意这里是（），不是；
//		return x;
//	else
//		return y;
//}
//#define MAX(X,Y) (X>Y?X:Y) //两部分
//int main()
//{
//	//函数
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("%d\n",max);
//	//宏
//	max = MAX(a,b);
//	//(a>b?a:b)  对应的X Y
//	printf("%d\n",max);
//	return 0;
//} 

//指针
//要懂指针，必须弄懂内存
//把序列当成地址编号  32位的话 就有2^32个地址编号
//1在第33位 权重是2^32
//用指针调用函数比较节省空间

//
//#include<stdio.h>
//int main()
//{
//	int a = 10; 
//	int* p = &a; //有一种变量用来存放地址的 ——叫 指针变量 就叫p
//	//p的类型是int*，这是一种语法形式 ，和*p不一样
//	printf("%p\n",&a);//000000CCF60FFA34  地址打印出来为16进制数，但还是个二进制序列 
//	printf("%p\n",p);
//	*p = 20;//*为 解引用操作符 (间接访问操作符)通过*p找到a的地址，把该地址中存的值替换为20
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
//	printf("%d\n",sizeof(pc));//指针的大小
//	printf("%p\n",&ch);
//	*pc = 'w';
//	printf("%c\n",ch);//字符串是%c
//	return 0;
//}

//指针大小   在32位平台是4个字节，在64位平台是8个字节

//#include<stdio.h>
//int main()
//{
//	double d = 3.14;
//	double* pd=&d;
//	printf("%p\n",&d);
//	*pd = 6.28;   //pc  pd pf p
//	printf("%lf\n",d);//这里也可以打印*pd。    double类型的用%lf  
//	return 0;
//}

//结构体

//人 书 叫复杂对象
//描述的东西方面多，用结构体表示 结构体是自己创建的一种类型
// struct为结构体关键字



//创建一个结构体类型
//#include<stdio.h>
//#include<string.h>
//struct Book
//{
//	char name[20];//C语言程序设计
//	//short price;//价格55元
//	/*char price[10];*/  //如果这样写的话，主函数里怎么写？
//	short price;
//};//分号不能缺
//int main()
//{
//	//利用结构体类型 ，创建一个该类型的结构体变量
//	struct Book b1 = {"C语言程序设计",55};
//	printf("书名：%s\n",b1.name);
//	printf("价格：%d\n",b1.price);
//	b1.price = 15;//price是一个变量名，可以直接改
//	strcpy(b1.name,"sdfd");//name是数组名 本质上是个地址。
//	//strcpy--字符串拷贝
//
//	printf("修改后的价格：%d\n",b1.price);
//	printf("修改后的名称：%s\n", b1.name);
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
//	struct Book b1 = {"C语言程序设计",66};
//	struct Book* pb= &b1;
//	printf("%s\n",pb->name);
//	printf("%d\n", pb->price);//不用解引用，指针pb直接指向
//	printf("%s\n", (*pb).name);//解引用到具体的一项。这两种写法都行   *pb就相当于b1。    加上（）
//	//当你输入*pb时，b1里的内容已经被找到了，后面就是具体到哪一项了
//	printf("%d\n", (*pb).price);
//	return 0;
//}


//结构体 变量.成员
//结构体 指针->成员






