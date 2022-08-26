#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	float a,b,c;
	scanf("%d",&t);
	while(t>0)
	{
	    scanf("%f",&a);
	    scanf("%f",&b);
	    scanf("%f\n",&c);
	    float avg=(a+b)/2;
	    if(avg>c)
	        printf("yes\n");
	   else
	        printf("no\n");
	t--;
	}
	return 0;
}

