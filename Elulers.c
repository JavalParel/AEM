#include<stdio.h>
#include<math.h>

float equation(float x,float y)
{
return ((y-x)/(y+x));
}
int main(){
float x[100],y[100],dydx[100],y_new[100],h;
printf("Enter value of y :-");
scanf("%f",&y[0]);
printf("Enter value of x :-");
scanf("%f",&x[0]);
printf("Enter value of h :-");
scanf("%f",&h);
y_new[0]=y[0];
printf("Itt \t h \t\t x  \t\t y  \t\t dy/dx \t\t y_new\n");
for (int i = 0; i < 11; ++i)
{
	dydx[i+1]=equation(x[i],y[i]);
	y_new[i+1]=y_new[i]+h*dydx[i+1];

	printf("%d \t %f \t %f \t %f \t %f \t %f\n",i,h,x[i],y[i],dydx[i+1],y_new[i+1] );
	x[i+1]=h+x[i];
	y[i+1]=y_new[i+1];
}
}