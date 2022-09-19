#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	int n,m,x;
	while(t!=0)
	{
	    scanf("%d %d %d",&n, &m,&x);
	    int y=2*(n+m)*x;
	    
	    printf("%d\n",y);
	    t--;
	}
	
	return 0;
}

