#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	float a,b,c;
	//float avg;
	scanf("%d\n",&t);
	while(t!=0)
	{
	  	scanf("%f ",&a);     
	    scanf("%f ",&b);
	    scanf("%f ",&c);
	       if((a+b)/2>=35 && (a+c)/2>=35 && (b+c)/2>=35)
	            printf("pass\n");
	        else
	            printf("fail\n");
	    t--;
	}
	return 0;
}

