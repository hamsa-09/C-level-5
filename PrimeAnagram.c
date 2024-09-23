#include<stdio.h>
#include<string.h>
# include<stdbool.h>
bool isprime(int num)
{
    for(int i = 2;i<=num/2;i++)
    {
        if(num%i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isanagram(char* s1,char* s2,int len1,int len2)
{
    int arr1[9]={0};
    int arr2[9]={0};

    if(len1 != len2)
    {
        return false;
    }
    for(int i = 0; i<len1;i++)
    {
        arr1[s1[i]-'0']++;
        arr2[s2[i]-'0']++;
    }

    for(int i = 0;i<9;i++)
    {
        if(arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{   
    int start;
    int end;
    printf("Enter the start: ");
    scanf("%d",&start);
    printf("Enter the End: ");
    scanf("%d",&end);

    for(int i = start;i<end;i++)
    {
        if(isprime(i))
        {
            for(int j = i+1;j<end;j++)
            {
                if(isprime(j))
                {
                    char n1[100];
                    char n2[100];
                    sprintf(n1,"%d",i);
                    sprintf(n2,"%d",j);
                    int len1 = strlen(n1);
                    int len2 = strlen(n2);

                    if(isanagram(n1,n2,len1,len2))
                    {
                        printf("%d,%d\n",i,j);
                    }
                }
            }
        }
    }
}