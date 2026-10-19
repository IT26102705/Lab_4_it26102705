#include<stdio.h>
int main(void)
{
	int fingerprint = 1;
	int scan = 1;
	int card = 1;

	printf("Enter the fingerprint\n");
	scanf("%d",&fingerprint);

	printf("Face scaning...\n");
	scanf("%d",&scan);

	printf("Enter the card\n");
	scanf("%d",&card);


	if (fingerprint && scan)
	{
	       printf("Access Granted\n");
	}
	else if (scan && card)
	{
		printf("Access Granted\n");
	}
	else if (fingerprint && card)	
	{
		printf("Access Granted\n");
	}
	
	else
	{
		printf("Access Denied\n");
	}
	
	return 0;
}
