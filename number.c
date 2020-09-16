#include<stdio.h>
int display(int n)
{
int i;
for (i=1;i<n;i++)
{
 printf("%d\n",i);
}
}

int main()
{
printf("number display upto user entered input ");
int a;
printf("enter number upto which you want to display a number");
scanf("%d",&a);
display(a);
return 0;
}
