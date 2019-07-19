#include<stdio.h>
int fab(int a,int b,int n)
{
   
   if(n==0)
    {
       return 0;
    }
   
   int c;
   c=a+b;
   a=b;
   b=c;
   printf("%d ",c);
   n--;
   fab(a,b,n);
   
}
int main()
{
    int n;
   printf("enter the no. of elements fabonacci have:");
   scanf("%d",&n);
    int a=0,b=1;
    printf("%d ",a);
    printf("%d ",b);
     fab(a,b,n-2);
}
