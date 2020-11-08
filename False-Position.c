#include<stdio.h>
#include<math.h>
float expression(float x)
{
	//enter your expression here
	//For power - pow(base, power)
	//for base 10 use- log10(x)
	return (2*x-log10(x)-6);
}
int main(){
	int x,itr,start,a,b,j;
	float xn[100],f[100],a_new,b_new,eq,fa[100],fb[100];
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
	fa[i]=expression(a_new);
	fb[i]=expression(b_new);
	xn[i]=(a_new*fb[i]-b_new*fa[i])/(fb[i]-fa[i]);
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
printf("Iteration\tx\t\tf(x)\t\tf(a)\t\tf(b)\n");
for (int i = 1; i <= itr; ++i)
{
	printf("   %d\t\t%f\t%f\t%f\t%f\n",i,xn[i],f[i],fa[i],fb[i] );
}
}