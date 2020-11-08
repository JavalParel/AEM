#include<stdio.h>

int main(){
int a[5],b[5],c[5],d[5];
float x[100],y[100],z[100],xn,yn,zn;
xn=yn=zn=0;
printf("Eg\na1*x+b1*y+c1*z=d1\na2*x+b2*y+c2*z=d2\na3*x+b3*y+c3*z=d3\n");
for (int i = 0; i < 3; i++)
{
	printf("Enter a%d :- ",i+1 );
	scanf("%d",&a[i]);
	printf("Enter b%d :- ",i+1 );
	scanf("%d",&b[i]);
	printf("Enter c%d :- ",i+1 );
	scanf("%d",&c[i]);
	printf("Enter d%d :- ",i+1 );
	scanf("%d",&d[i]);
}
for (int i = 0; i < 3; i++)
{
printf("%d*x+%d*y+%d*z=%d\n",a[i],b[i],c[i],d[i]);
}

for (int i = 0; i < 60; i++)
{
	x[i]=(d[0]-b[0]*yn-c[0]*zn)/a[0];
	y[i]=(d[1]-a[1]*xn-c[1]*zn)/b[1];
	z[i]=(d[2]-a[2]*xn-b[2]*yn)/c[2];
	printf("x%d = %f   \ty%d = %f   \tz%d = %f\n",i+1,x[i],i+1,y[i],i+1,z[i] );
	xn=x[i];
	yn=y[i];
	zn=z[i];
}


}