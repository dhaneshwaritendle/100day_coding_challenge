#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,a[n],pro=1,count=0;
	scanf("%d\n",&t);
	while(t!=0)
	{
	    scanf("%d\n",&n);
	    //array input
	    for(int i=0;i<n;i++)
    	   { scanf("%d\n",&a[i]);
    	       pro=a[i]*pro;
    	   }
    	   if(pro<0)
    	   {
    	       //check the array for a negative number
    	       for(int i=0;i<n;i++)
    	       {
    	         if(a[i]<0)
    	            count++;
    	       }
    	       printf("%d\n",count);
    	   }
    	   else
    	       {printf("0\n");}
    	
	    t--;
	}
	return 0;
}

