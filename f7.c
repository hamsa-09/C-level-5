# include<stdio.h>
# include<string.h>


void compression(char* s)
{
    int len = strlen(s);
    for(int i =0;i<len;i++)
    {
        int count = 1;
        if(s[i]!='\0')
        {
            for(int j = i+1;j<len;j++)
            {
                if(s[i]==s[j])
                {
                    count++;
                    s[j]='\0';
                }
            }
        }

        if(count >1)
        {
            printf("%c%d",s[i],count);
        }
        else if(count==1 && s[i] != '\0')
        {
            printf("%c",s[i]);
        }
    }
}

int main()
{
    char s[100];
    fgets(s,100,stdin);
    s[strcspn(s,"\n")]='\0';

    compression(s);
}