#include<stdio.h>
#include<math.h>
float f(float x)
{
    return(x*x*x-(4*x)+1);
}
void main()
{
float x0,x1,x2,f0,f1,f2,e=0.0001;
printf("Enter the initial guess values\n");
scanf("%f%f",&x0,&x1);
x2=((x0+x1)/2);
f0=f(x0);f1=f(x1);f2=f(x2);
if(f0*f1>0)
{printf("Reenter guess values");
}
else{
while(abs(x1-x0)>e)
{
if(f0*f2<0)
{x1=x2;}
else
{x0=x2;}
x2=((x0+x1)/2);
f0=f(x0);f1=f(x1);f2=f(x2);
}
}
printf("The required root in=%f",x2);
getch();
}
