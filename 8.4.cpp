#include <stdio.h>
#include <stdlib.h>
/* sicaklik donma nok. altinda mi ustunde mi kontrolu */
int main ()
{
	int T;
	printf("bir T degeri giriniz :");
	scanf("%d",&T);
	
	if(T>0)
	{
		printf("T donma sicakliginin ustundedir.");
	}
 	else 
 	{
		if (T<0)
 			printf("T donma sicakliginin altindadir.");
		else 
			printf("T donma sicakligindadir.");
	}

	return 0;

}

