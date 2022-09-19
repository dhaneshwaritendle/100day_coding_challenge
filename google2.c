#include<stdio.h>

int main()
{
int t, v[100],y, n;
while(t!=0)
    {
    scanf("%d",&n); //enter number of days
    for(int i;i<n;i++)//enter data of each days visitors
        {scanf("%d",&v[i]);}
    for(int i=0;i<=n;i++)
    {
        if(v[i]<v[i-1] || v[0]>v[i])
            y++;
        else if(v[i]>v[i+1] || v[n-1]>v[i])
            y++;
    }
    
    printf("case#%d:%d",t, y);
    
    }
}