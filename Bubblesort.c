#include<stdio.h>
 void main()
{
  int x[5],i=0,j,tmp,flg;
  printf("\nArray Data\n");
  for(i=0;i<5;i++)
    scanf("%d",&x[i]);
  printf("\nBefore sorting\n");
  for(i=0;i<5;i++)
    printf("%4d",x[i]);
   for(i=0;i<4;i++)
   {
      flg=1;
       for(j=0;j<4-i;j++)
       {
         if(x[j]>x[j+1])
         {
           tmp=x[j];
           x[j]=x[j+1];
           x[j+1]=tmp; flg=0;
          }
        }
          if(flg==1)
          break;
     }
     printf("\nAfter Sorting\n");
     for(i=0;i<5;i++)
       printf("%5d",x[i]);
      return;
  }
  
  
  //Output
  //Before Sorting
  //45 89 67 12 1
  
  //After Sorting
  //1 12 45 67 89
