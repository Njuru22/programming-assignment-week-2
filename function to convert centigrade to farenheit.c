//function to convert temperature from centigrade to  fahrenheit
#include<stdio.h>
float fahrenheit(float temp);
int main()
{
	float input, output;
	printf("enter tempereture");
	scanf("%f",&input);
	
	output=(input*9/5+32);
	printf("temperture of %.2f is %.2f, input, output");
	return 0;
}
float farenheit(float temp)
{
float tempF;
tempF=temp*1.8+32;
return tempF;
}