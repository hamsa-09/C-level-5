# include<stdio.h>
void matrixTransposition(int arr[][100],int n,int m)
{
    int trans[100][100];
    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            trans[j][i]=arr[i][j];
        }
    }
    printf("[");
    int in = 0;
    
    for(int i = 0;i<m;i++)
    {
        printf("[");
        
        for(int j = 0;j<n;j++)
        {
            if(j != n-1)
            {
                printf("%d,",trans[i][j]);
            }
            else if(j == n-1)
            {
                       printf("%d",trans[i][j]);
            }
        }
        if(i != m-1)
        {
            printf("],");
        }
        else if(i == m-1)
        {

            printf("]");
        }
    
    
    }

    printf("]");
}

int main()
{
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[100][100];
    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            scanf(" %d",&arr[i][j]);
        }
    }

    matrixTransposition(arr,n,m);
}