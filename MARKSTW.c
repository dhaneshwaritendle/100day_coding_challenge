#include <stdio.h>

int main(void) {
	// your code goes here
	int  x, y;//x foralice and y is for bob
	scanf("%d %d", &x, &y);
	int result=(x>=(2*y))?printf("yes"):printf("no");
	return 0;
}