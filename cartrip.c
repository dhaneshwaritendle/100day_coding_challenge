#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
     int x;
     scanf("%d", &t);
  
    while(t>0) {
	scanf("%d\n",&x);
    if(x>=300)
	   printf("\n%d\n",x*10);
	else
	   printf("\n3000");
	t--;
    }  
	return 0;
}