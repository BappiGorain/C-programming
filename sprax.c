#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    int c = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            c++;
        }
    }
    if(c>=(m*n)/2) printf("Sparx matix");
    else printf("Not sparx matix"); 
}
