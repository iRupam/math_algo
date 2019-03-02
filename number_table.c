#define ALGO_KEY 123789
#include<stdio.h>
#include<math.h>
void main()
{
  int a=0,b=1,res,limit;
  printf("ENter thelength of the table\n");
  scanf("%d",&limit);
  do{
      res=a+b;
      printf("\na=%d b=%d res=%d",a,b,res);
      a++;
      b++;
  
  }while(a<=b);
}
