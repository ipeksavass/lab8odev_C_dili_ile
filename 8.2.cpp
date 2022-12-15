#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
/* dairenin alanini bulma */
int main()
{
	int r;
	double alan;
	printf("bir r degeri giriniz :");
	scanf("%d",&r);
	
	alan = PI * r* r;
	printf("dairenin alani %d",alan);
	
	return 0;
}
