#include<stdio.h>
int main(void)
{ 
	float sec1,sec2,sec3,avg,mark;
	//sec1,sec2,sec3 - section 1 , section 2, section 3
	//avg - avarage

	printf("Enter marks for Section 01 :\n");
	scanf("%f",&sec1);

	printf("Enter marks for Secton 02 :\n");
	scanf("%f",&sec2);

	printf("Enter marks for Section 03 :\n");
	scanf("%f",&sec3);

	avg = (sec1+sec2+sec3)/3;
	
	if (sec1 >= 70 && sec2>= 70 && sec3 >= 70 && avg >= 75)
	{
		printf("Pass\n");
	}
	else
	{
		printf("Fail\n");
	}

	return 0;
}
