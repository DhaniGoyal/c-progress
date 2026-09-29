// Simple Calculator Project
#include<stdio.h>
#include<windows.h>
void add(int x,int y)
{
printf("enter two numbers\n");
scanf("%d %d",&x,&y);
printf("addition =%d\n",x+y);
}


void sub(int x,int y)
{
printf("enter two numbers\n");
scanf("%d %d",&x,&y);
printf("subtraction =%d\n",x-y);
}


void product(int x,int y)
{
printf("enter two numbers\n");
scanf("%d %d",&x,&y);
printf("multiply =%d\n",x*y);
}


void divi(int x,int y)
{
printf("enter two numbers\n");
scanf("%d %d",&x,&y);
printf("division =%d\n",x/y);
}


void factorial(int x)
{
printf("enter one number\n");
scanf("%d",&x);
int f,i;
f=1;
for (i=1;i<=x;i++)
{
f=f*i;
}
printf("factorial =%d\n",f);
}


void armstrong(int x)
{
printf("enter one number\n");
scanf("%d",&x);
int m,sum,i,r;
m=x;
sum=0;
while (x>0)
{
r=x%10;
x=x/10;
sum=sum+r*r*r;
}
if (sum==m)
{
printf("armstrong =%d\n",x);
}
else
{
printf("not armstrong =%d\n",x);
}
}


void perfect(int x)
{
printf("enter one number\n");
scanf("%d",&x);
int sum,i,m,r;
sum=0;
m=x;
for(i=1;i<=x/2;i++)
{
if (x%i==0)
{
sum=sum+i;}
}
if (sum==m)
{
printf("perfect = %d\n",m);}
else
{
printf("not perfect = %d\n",m);
}
}


void prime(int x)
{
int i,flag=1;
printf("Enter a number");
scanf("%d",&x);
if(x<=1)
{flag=0;}
for(i=2;i<=x/2;i++)
{
if(x%i==0)
{
flag=0;
break;
}
}

if(flag)
printf("%d is Prime\n",x);
else
printf("%d is not Prime\n",x);
}


void table(int x,int y)
{printf("enter two numbers\n");
scanf("%d %d",&x,&y);
int i,j;
for(i=x;i<=y;i++)
{
for (j=1;j<=10;j++)
{
printf("%d x %d=%d\n",i,j,i*j);
}}}


int main()
{
int x,y,ch;
char choice='Y'|| choice=='y';
printf("--------------------------------------------------------\n");
printf("            WELCOME TO FUNCTIONAL CALCULATOR            \n");
printf("---------------------------------------------------------\n");
printf("\n");
printf("\n");

do
{

printf("\nChoose that operator u want to function from the list given below........\n");
printf("\n");
printf("Your choices are getting loaded.....");
Sleep(1000);
printf(".....");
Sleep(1000);
printf("\n1.Addition\n");
printf("2.subtraction\n");
printf("3.product\n");
printf("4.division\n");
printf("5.factorial\n");
printf("6.armstrong\n");
printf("7.perfect\n");
printf("8.prime\n");
printf("9.table\n");
printf("\n");

printf("enter your choice");
scanf("%d",&ch);
if (ch==1)
{

    add(x,y);
}
else if (ch==2)
{

    sub(x,y);
}
else if (ch==3)
{

    product(x,y);
}
else if (ch==4)
{

    divi(x,y);
}
else if (ch==5)
{

    factorial(x);
}
else if (ch==6)
{

    armstrong(x);
}
else if (ch==7)
{

    perfect(x);

}
else if(ch==8)
{

    prime(x);
}
else if (ch==9)
{

    table(x,y);
}
else if(ch==0)
{
    printf("exit");
    break;
}
else
{
    printf("invalid choice");
}
printf("do u want to run it again(enter:Y/N)\n");
choice=getche();
}while (choice=='Y'|| choice=='y');
} // main
