#include<stdio.h>
# include<string.h>
void largestword(char* word[],int len)
{
    int Largest = strlen(word[0]);
    char* large = word[0];

    for(int i = 0;i<len;i++)
    {
        if(strlen(word[i]) > Largest)
        {
            Largest = strlen(word[i]);
            large = word[i];
        }
    }
    printf("%s\n",large);
}


void smallestword(char* word[],int len)
{
    int small = strlen(word[0]);
    char* smallword = word[0];

    for(int i = 0;i<len;i++)
    {
        if(strlen(word[i]) < small)
        {
            small = strlen(word[i]);
            smallword = word[i];
        }
    }
    printf("%s",smallword);
}
int main()
{
    char s[100];
    fgets(s,100,stdin);
    s[strcspn(s,"\n")]='\0';

    char* word[100];
    char* token = strtok(s," ");
    int index = 0;

    while(token != NULL)    
    {
        word[index++] = token;
        token = strtok(NULL," ");
    }
    word[index] = '\0';
    largestword(word,index);
    smallestword(word,index);


}