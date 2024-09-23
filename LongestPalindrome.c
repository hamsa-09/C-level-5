#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

void convertLowerCase(char* s)
{
    for(int i = 0 ;s[i] != '\0';i++)
    {
        if(isupper(s[i]))
        {
            s[i]=tolower(s[i]);
        }
    }
}


bool ispalindrome(char* s, int start, int end)
{
    while(start<end)
    {
        if(s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}


void longestPalindrome(char* s,char* result,int len)
{
    int maxLength = 0;

    for(int i = 0 ; i<len;i++)
    {
        for(int j = i+1;j<len;j++)
        {
           if( ispalindrome(s,i,j))
            {
                int current = j-i+1;
                if(current>maxLength)
                {
                    maxLength = current;
                    strncpy(result,s+i,maxLength);
                    result[maxLength]='\0';
                }
            }
        }
    }
}
int main()
{
    char s[100];
    fgets(s,100,stdin);
    s[strcspn(s,"\n")]='\0';
    int len = strlen(s);
    char result[100];
    convertLowerCase(s);
    longestPalindrome(s,result,len);
    printf("%s",result);
}