#include<stdio.h>
#include<math.h>
float g(float x)
 { return(1/(sqrt(x+1)));}
main()
 {
  float x0,x1,e=0.0001;
  printf("enter the guess value \n");
  scanf("%f", &x0);
  x1=g(x0);
  while(fabs(x1-x0)>e)
   {
    x0=x1;
    x1=g(x0);
   }
 printf("the root is:%f",x1);
 getch();
 }
