# include<stdio.h>
# include<string.h>
# include<math.h>

int tobinary(char* s)
{
    int len  = strlen(s);
    int result = 0;
    int k = 0;
    for(int i = len-1;i>=0;i--)
    {
        result += (s[i]-'0')*pow(2,k);
        k++;
    }
    return result;
}

int main()
{
char s[10];
scanf("%s",s);
int result = tobinary(s);
printf("%d",result);
}