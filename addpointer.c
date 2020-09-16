#include<stdio.h>
int main()
{
int a,b,res;
int *p,*q;
printf("enter the value of a and b");
scanf("%d %d",&a,&b);
p=&a;
q=&b;
res=(*p)+(*q);
printf("result of addition using pointer is %d",res);
return 0;
}
