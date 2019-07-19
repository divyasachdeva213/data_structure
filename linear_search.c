#include<stdio.h>
int main(int argc,const char *argv[])
{
    
    int arr[4],index,p;
    int n,k=0;
   int count=argc-1;
   
   for(int i=1;i<argc;i++)
      {
             arr[k]=atoi(argv[i]);
             k++;
      }
    //n=atoi(argv[argc]);
        scanf("%d",&n);
    for(int i=0;i<=count;i++)
      {
         if(arr[i]==n)
           {
             p=1;
            index=i;
           }
             
      }
          if(p==1)
               {
                    printf("the element is at: %d",index);
                }
          else
              {
                   printf("element not found");
                }
return 0;
     
   
}
