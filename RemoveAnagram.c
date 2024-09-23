# include<stdio.h>
# include<string.h>
# include<stdbool.h>
#include<ctype.h>
bool isanagram(char* s1, char* s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int arr1[26]={0};
    int arr2[26]={0};

    if(len1 != len2)
    {
        return false;
    }

    for(int i = 0 ; i<len1;i++)
    {
      arr1[(s1[i]-'a')]++;
      arr2[(s2[i]-'a')]++;
    }

    for(int i = 0;i<26;i++)
    {
        if(arr1[i] != arr2[i])
        {
            return false;
        }
    }

    return true;
}

void convertToLower(char word[][100] , int len)
{
    for(int i = 0;i<len;i++)
    {
        for(int j = 0;j<strlen(word[i]);j++)
        {
            if(isupper(word[i][j]))
            {
                word[i][j]=tolower(word[i][j]);
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    char word[n][100];

    for(int i = 0;i<n;i++)
    {
        scanf("%s",word[i]);
    }
    convertToLower(word,n);
  
  for(int i = 0;i<n;i++)
{
    printf("%s",word[i]);
    for(int j = i+1;j<n;j++)
    {
        if(isanagram(word[i],word[j]))
        {
            for(int k = j;k<n;k++)
            {
                strcpy(word[k],word[k+1]);
            }
            n--;
            j--;
        }
    }
    printf("\n");
}
}