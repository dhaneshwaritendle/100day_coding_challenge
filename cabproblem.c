#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	int x, y;
scanf("%d", &t);
while(t>0)
	{
	
	scanf("%d", &x);
	scanf("%d", &y);
    	 if(x<y)
    	{printf("FIRST\n");}
    	else if(x>y)
        	{printf("SECOND\n");}
    	else
    	    {printf("ANY\n");}
    
    t--;
    }
	//while(t<0);
	return 0;
}

