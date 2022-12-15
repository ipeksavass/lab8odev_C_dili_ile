#include <stdio.h>
#include <stdlib.h>

int main()
{
	int f;
	double cm;
	printf("bir f degeri giriniz :");
	scanf("%d",&f);
	
	cm = f * 30.48;
	printf("bir f nin cm degeri %.2lf",cm);
	
	return 0;
}

