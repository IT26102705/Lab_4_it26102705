#include<stdio.h>
int main(void)
{
	int fingerprint,scan,card;
	if (fingerprint && scan)
	{
			printf("Access Granted");
	}
	else if (scan && card)
	{
		printf("Access Granted");
	}
	else if ( fingerprint && card)
	{
		printf("Access Granted");
	}
	else 
	{ 
		printf("Access Denied");
	}
	
	return 0;
}


 
