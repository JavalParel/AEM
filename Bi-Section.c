#include<stdio.h>
#include<math.h>
float expression(float x)
{
	//enter your expression here
	//For power use like that - pow(base, exp)
	return (pow(x,5)-3*x*x+6*x-15);
}
int main(){
	int x,itr,start,a,b,j;
	float xn[100],f[100],a_new,b_new,eq;
	printf("Enter starting point :- ");
	scanf("%d",&start);
	printf("Enter Number of Iteration :- ");
	scanf("%d",&itr);
	if(expression(start)>=0){
	do{
		x=start;
		j=start;
		eq=expression(x);
		printf("f(%d) = %.2f\n",j,expression(x) );
		if(eq>0)
			{
				a=start-1;
				b=start;
			}
		start++;
		j++;
	}while(eq>=0);
	}

	else{
	do{
		x=start;
		eq=expression(x);
		printf("f(%d) = %.2f\n",x,expression(x) );
		if(eq>0)
			{
				a=start-1;
				b=start;
			}
		start++;
	}while(eq<0);}
printf("a = %d\tb = %d\n",a,b);
a_new=a;
b_new=b;
for (int i = 1; i <= itr; i++)
{
	
	xn[i]=(a_new+b_new)/2;
	eq=expression(xn[i]);
	printf("x%d = %f\t  ",i,xn[i]);
	
	if(eq<0)
		a_new=xn[i];
	else
		b_new=xn[i];
	printf("a = %f\t  b = %f\t  ",a_new,b_new);
	
	f[i]=eq;
	printf("f(%d) = %f\n",i,f[i] );
}
printf("Iteration\tx\t\tf(x)\n");
for (int i = 1; i <= itr; ++i)
{
	printf("   %d\t\t%f\t%f\n",i,xn[i],f[i] );
}
}