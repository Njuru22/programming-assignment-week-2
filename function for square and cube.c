//function to calculate cube and square of a number
#include<stdio.h>
float cube(float num);
float square(float y);
int main()
{
	float input, output, output2;
	printf("enter a number");
	scanf("%f",&input);
	
	output=cube(input);
	output2=square(input);
	printf("\n cube of %.2f is %.2f",input, output);
	printf("\n square of %.2f is %.2f",input, output2);
	
	return 0;
}
float cube(float num)
{
	float num_cubed;
	num_cubed=num*num*num;
	
	return num_cubed;
}
float square(float y)
{
	float y_squared;
	y_squared=y*y;
	return y_squared;
}