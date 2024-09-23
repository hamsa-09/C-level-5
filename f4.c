# include<stdio.h>
# include<string.h>
# include<stdbool.h>
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

    for(int i=0;i<len1;i++)
    {
        arr1[s1[i]-'a']++;
        arr2[s2[i]-'a']++;
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

int main()
{
    char s1[100];
    fgets(s1,100,stdin);
    s1[strcspn(s1,"\n")]='\0';

    char s2[100];
    fgets(s2,100,stdin);
    s2[strcspn(s2,"\n")]='\0';

    if(isanagram(s1,s2))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

}