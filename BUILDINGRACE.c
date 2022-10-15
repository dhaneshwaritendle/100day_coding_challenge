#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
 scanf("%d",&t);
while(t!=0){
	    float a,b,x,y;
	    scanf("%f %f %f %f",&a,&b,&x,&y);
	    double l=a/x;
	    double m=b/y;
	    if(l<m){
	        printf("Chef\n");
	    }
	    
	    else if(l>m){
	        printf("Chefina\n");
	    }
	    else if(l==m){
	        printf("Both\n");
	    }
	    t--;
	}
	return 0;
}

