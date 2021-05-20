//#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//#include <string.h>
//int main()
//{
//	
//	char d[20] = {0};
//	system("shutdown -s -t 20");
//	printf("请在30s内输入我是猪来结束关机：");
//	scanf("%s", d);
//	if (strcmp(d,"我是猪")==0)
//	{
//		printf("\t\t\t\t\t没\n");
//		Sleep(1000);
//		printf("\t\t\t\t\t错\n");
//		Sleep(1000);
//		printf("\t\t\t\t\t你\n");
//		Sleep(1000);
//		printf("\t\t\t\t\t就\n");
//		Sleep(1000);
//		printf("\t\t\t\t\t是\n");
//		Sleep(1000);
//		printf("\t\t\t\t\t！\n");
//		Sleep(1000);
//cm:
//
//		system("start cmd");
//	
//		goto cm;
//		
//	}
//	else
//	{
//		printf("\t\t\t\t\t你\n");
//		Sleep(1000);
//		printf("\t\t\t\t\t真\n");
//		Sleep(1000);
//		printf("\t\t\t\t\t的\n");
//		Sleep(1000);
//		printf("\t\t\t\t\t很\n");
//		Sleep(1000);
//		printf("\t\t\t\t\t棒\n");
//		Sleep(1000);
//		system("cls");
//	cmd:
//		system("start cmd");
//	
//		goto cmd;
//	}
//
//
//}
//#include <stdio.h>
//#include <string.h>
////测试不同状态下sizeof的数据长度
//void text(int ch[])
//{
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[10] = {0};
//	text(arr);
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	int num1, num2, num;
//	int c;
//	char temp;
//	printf("Please enter a calc:");
//	scanf("%d%c%d=%d", &num1, &temp, &num2, &num);
//	
//	//测试
//	/*printf("%d%c%d=%d", num1, temp, num2, num);*/
//	switch (temp)
//	{
//	case '*':
//		c=num1*num2;
//		break;
//	case '/':
//		
//		if(num2==0)
//		{
//			printf("除数不能为0\n");
//			c=num1/num2;
//			
//		}
//		else
//		{
//		c=num1/num2;
//		}
//		break;
//	case '+':
//		c=num1+num2;
//		break;
//	case '-':
//		c=num1-num2;
//		
//
//		break;
//	}
//	if(num==c)
//	{
//		printf("Perfect!\n");
//	}
//	else
//	{
//		printf("Error!\n%d%c%d=%d\n",num1,temp,num2,c);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//#define FORMAT "%d   %d\n"
//struct studen
//{
//	int i;
//	int j;
//	struct student* p;
//};
//int main(void)
//{
//	struct student a, b, c;
//	struct student* q, * head;
//	
//	a.i = 100;
//	a.j = 99;
//	b.i = 100;
//	b.j = 88;
//	c.i = 99;
//	c.j = 55;
//	a.p = &b;
//	
//	a.p = &b;
//	b.p = &c;
//	c.p = NULL;
//	head = &a;
//	q = head;
//	do
//	{
//		printf("%d %d\n", q->i, q->j);
//		q = q->p;
//	} while (q != NULL);
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int a,b;
//	a=b=5;
//	printf("a=%d,b=%d\n",a,b);
//	b=b+5;
//	printf("a=%d,b=%d\n",a,b);
//	a=a+1;
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//#include <stdlib.h>
////文件的读写操作
//int main(void)
//{
//	FILE* fp;
//	char ch1[20]="string";
//	char c;
//	
//	if ((fp = fopen(ch1, "w")) == NULL)
//	{
//		printf("创建失败,即将退出程序.");
//		exit(0);
//	}
//	c = getchar();
//	while (c != '#')
//	{
//		fputc(c, fp);
//		putchar(c);
//		c = getchar();
//	}
//	//关闭
//	fclose(fp);
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//int main(void)
//{
//	FILE* p1;
//	FILE* p2;
//	//分别打开两个指向文件
//	p1 = fopen("string", "r");
//	p2 = fopen("string2", "w");
//	if (p1 == NULL)
//	{
//		printf("文件string打开失败!!!!");
//		exit(0);
//	}
//	if (p2 == NULL)
//	{
//		printf("string2创建失败!!!!!");
//		exit(0);
//	}
//	while (!feof(p1))
//	{
//		fputc(fgetc(p1), p2);
//	}
//	fclose(p1);
//	fclose(p2);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main(int argc,char *argv[])
//{
//	FILE *in;
//	FILE *out;
//	if(argc!=3)
//	{
//		printf("创建失败!!");
//		exit(0);
//	}
//	in=fopen(argv[1],"r");
//	out=fopen(argv[2],"w");
//	if(in==NULL)
//	{
//		printf("创建失败!!");
//		exit(0);
//	}
//	if(out==NULL)
//	{
//		printf("创建失败!!");
//		exit(0);
//	}
//	while(!feof(in))
//	{
//		fputc(fgetc(in),out);
//	}
//	fclose(in);
//	fclose(out);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define NAME 3
//struct student
//{
//	int num;
//	int x;
//	int age;
//}stu[NAME];
//void start()
//{
//	int i=0;
//	FILE *p1;
//
//	p1=fopen("abc","wb");
//	if(p1==NULL)
//	{
//		printf("打开失败！！！！");
//		exit(0);
//	}
//	for(i=0;i<NAME;i++)
//	{
//	    fwrite(&stu[i],sizeof(struct student),1,p1);
//	}
//	fclose(p1);
//
//}
//void copy_my()
//{
//	int i=0;
//	FILE*p1;
//	p1=fopen("abdc","rb");
//	if(p1==NULL)
//	{
//		printf("出错了!");
//		exit(0);
//	}
//	
//	for(i=0;i<NAME;i++)
//	{
//		fread(&stu[i],sizeof(struct student),1,p1);
//	 
//	}
//	fclose(p1);
//}
//void display()
//{
//	int i=0;
//	FILE *p1;
//	p1=fopen("abc","rb");
//	if(p1==NULL)
//	{
//		printf("打开失败！！！！");
//		exit(0);
//	}
//	for(i=0;i<NAME;i++)
//	{
//		fread(&stu[i],sizeof(struct student),1,p1);
//		printf("num:%d sex:%d age:%d\n",stu[i].num,stu[i].x,stu[i].age);
//	}
//	fclose(p1);
//}
//int main(void)
//{
//	//拷贝函数
//	copy_my();
//	//int i=0;
//
//	/*for(i=0;i<3;i++)
//	{
//
//		scanf_s("%d%d%d",&stu[i].num,&stu[i].x,&stu[i].age);
//	}*/
//	//将数据放入文件中
//	start();
//	//将文件读入内存并且打印出来
//	display();
//	
//	
//
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#include <Windows.h>
//int main(void)
//{
//	FILE*fp;
//	char string[81];
//	fp=fopen("abcde","w");
//	
//	if(fp==NULL)
//	{
//		printf("创建失败!即将退出!");
//		exit(0);
//	}
//	//从键盘读入数据判断长度是否大于0
//	while(strlen(gets(string))>0)
//	{
//		fputs(string,fp);
//	}
//	fputs("\0",fp);
//	
//	fclose(fp);
//	fp=fopen("abcde","r");
//	if(fp==NULL)
//	{
//		printf("创建失败!即将退出!");
//		exit(0);
//	}
//	 while(fgets(string,81,fp)!=NULL)
//	 {
//		  fputs(string,stdout);
//		  printf("\n");
//	 }
//	
//	 fclose(fp);
//	 return 0;
//}
//
//
//#include <math.h>
//#include <stdio.h>
//void main(void)
//{
//	 int j=65535;
//	printf("%d", j);
//}

//#include<stdio.h>
//
//int main()
//{
//    int i = 8;
//    printf("%d %d %d %d %d %d", ++i, i, i++, ++i, i++, i);
//    return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	char ch1;
//	scanf("%c",&ch1);
//	printf("%c",ch1);
//	return 0;
//}

//#include <stdio.h>
//void main(void)
//{
//	int i;
//	int sum;
//	
//	for (i = 1; i < 6; i++)
//		sum += i;
//	printf("%d\n", sum);
//}

//#include <stdio.h>
//int main(void)
//{
//	float a=2;
//	float b=4;
//	float h=3;
//	double c;
//	c=(a+b)*h/2;
//	printf("%lf\n",c);
//	c=(1/2)*(a+b)*h;
//	printf("%lf\n",c);
//	c=(a+b)*h*1/2;
//	printf("%lf\n",c);
//	c=h/2*(a+b);
//	printf("%lf\n",c);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//
//{
//
//	/************found************/
//
//	char  str1[81], str2[81];
//
//	int j = 0, flag;
//
//	printf("\n");
//
//	/************found************/
//
//	scanf("%s%s", str1, str2);
//
//	/************found************/
//
//	while (str1[j] == str2[j])
//
//	{
//
//		j++;
//
//		if (str1[j] == '\0' || str2[j] == '\0')
//
//		{
//
//			break;
//
//		}
//
//	}
//
//	if (str1[j] == '\0' && str2[j] == '\0')
//
//	{
//
//		/************found************/
//
//		flag = 1;
//
//	}
//
//	else
//
//	{
//
//		flag = 0;
//
//	}
//
//	if (flag)
//
//	{
//
//		printf("the two string are equal.");
//
//	}
//
//	else
//
//	{
//
//		printf("the two string are not equal.");
//
//	}
//
//}

#include <stdio.h>
#define M 9
int main(void)
{
	int a[M][M];
	int i,j,m;
	int b=0;
	printf("请输入m的值来确定N阶行列式:");
	
	scanf("%d",&m);
	while(1)
	{
		if(m<2||m>9)
		{
			printf("输入值的值<2 or >9");
		scanf("%d",&m);
		}
		else
		{
			break;
		}
	}
	for(i=1;i<=m;i++)
	{
		
		b=i;
		for(j=0;j<m;j++)
		{
			a[i-1][j]=b;
			b=b+i;
		}
		b=0;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
		printf(" %-2d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

