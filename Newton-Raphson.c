#include<stdio.h>

float expression(float x)
{
	//enter your expression here
	//For power - pow(base, power)
	//for base 10 use- log10(x)
	return (pow(x,4)-12*x+7);
}
float intigration(float x)
{
	//enter your intigrated expression here
	//For power - pow(base, power)
	//for base 10 use- log10(x)
	return (4*pow(x,3)-12);
}

int main(){
int sel,j;
float eq,x0,f[100],fi[100],start,x[100];
printf("1 For x0\n2 For enter starting point\n");
scanf("%d",&sel);
if(sel==1)
{
	printf("Enter x0 :- ");
	scanf("%f",&x0);
}
else if(sel==2)
{
	printf("Enter starting point :- ");
	scanf("%f",&start);
	if(expression(start)>=0){
	do{
		x0=start;
		j=start;
		eq=expression(x0);
		printf("f(%d) = %.2f\n",j,expression(x0) );
		if(eq>0)
			{
				x0=start;
			}
		start++;
		j++;
	}while(eq>=0);
	}

	else{
	do{
		x0=start;
		eq=expression(x0);
		printf("f(%d) = %.2f\n",x0,expression(x0) );
		if(eq>0)
			{
				x0=start;
			}
		start++;
	}while(eq<0);}
}
printf("x0 = %.0f\n",x0);
for (int i = 0; i < 10; ++i)
{
	printf("f(%d) = %f  \tf'(%d) = %f\t",i,expression(x0),i,intigration(x0) );
	x[i]=x0-(expression(x0)/intigration(x0));
	printf("x%d = %f\n",i,x[i]);
	x0=x[i];
}
}