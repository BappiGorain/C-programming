#include<stdio.h>
#include <stdbool.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
   
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    bool flag = true;
     
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j] != a[j][i]) 
            {
    
               flag = false;
           }
        }
    }
    
    if(!flag) printf("Not a symetric matrix \n");
    else printf("symetric matrix");
}
