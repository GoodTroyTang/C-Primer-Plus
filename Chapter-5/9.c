#include<stdio.h>
void Temperatures(double fah);
int main(void)
{
	double fah,cel,kel;//�����¶ȣ������¶ȣ������¶�
	printf("Input the Fahrenheit temperature: ");
	while(scanf("%lf",&fah)==1)
	{   
		Temperatures(fah);
		printf("Next input: ");
	}
	printf("Done.\n");
}


void Temperatures(double fah)
{
	const double a=5.0,b=9.0,c=32.0,d=276.13;
	printf("%.2f �H is %.2f ��, %.2f K.\n",
	fah,a/b*(fah-c),a/b*(fah-c)+d);
}






