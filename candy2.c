#include<stdio.h>

int main()
{
int t;
scanf("%d",&t);
while(t!=0){
    int n;// number of candy bags
    int m;// number of kids
    scanf("%d",&n);
    scanf("%d",&m);
    int sum=n*(n+1)/2;
    int r=sum/m;
    int l=sum-m*r;
    printf("Case #%d:%d",t,l);
t--;}
}