# include<stdio.h>
#include<string.h>
#include<ctype.h>
# include<stdbool.h>

bool ispalindrome(char* s, int len)
{
    int start = 0;
    int end = len-1;

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
int main()
{
    char s[100];
    fgets(s,100,stdin);
    s[strcspn(s,"\n")]='\0';

    char s1[100];
int index=0;
    for(int i = 0;s[i]!='\0';i++)
    {
        if(isalnum(s[i]))
        {
            s1[index]=s[i];
            index++;
        }
    }

    for(int i = 0;i<index;i++)
    {
        if(isupper(s1[i]))
        {
            s1[i]=tolower(s1[i]);
        }
    }


    if(ispalindrome(s1,index))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}