#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	int n,m;
	scanf("%d\n", &t);
	while(t!=0)
	{
	  scanf("%d\n", &n); 
	  scanf("%d\n", &m);
	  if(n%2==0 && n%m==0)
	    printf("yes\n");
	  else
	    printf("no\n");
	   
	    t--;
	}
	return 0;
}

