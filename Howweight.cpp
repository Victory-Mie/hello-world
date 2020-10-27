#include <stdio.h>
int main()
{
	int height ,length , width , volume , weight;
	printf("Enter height of the box:");
	scanf("%d",&height);
	printf("Enter length of the box:");
	scanf("%d",&length);
	printf("Enter width of the box:");
	scanf("%d",&width);
	
	volume = height*length*width;
	weight = (volume+165)/166;
	
	printf("volume:%d\n",volume);
	printf("weight:%d\n",weight);
	return 0;
	
 } 
