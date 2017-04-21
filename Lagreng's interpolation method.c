#include<stdio.h>
#include<math.h>
 main()
{
float x[20],f[20],sum,prod;
int n=4,i,j,b;
printf("enter the observation \n");
for(i=1;i<=n;i++)
 {
 scanf("%f%f",&x[i],&f[i]);
 }
 printf("enter the value of b where to interpolation\n");
 scanf("%f",&x);
 sum=0;
 for(i=1;i<=n;i++)
  {
    prod=1;
   {
     for(j=1;j<=1;j++)
    {
      if(i!=j)
      {
        prod=(prod*(b-x[j]))/(x[i]-x[j]);
      }
     }
    }
    sum=sum+prod*f[i];
    printf("the answer is =%f",sum);
    getch();
  }
}

