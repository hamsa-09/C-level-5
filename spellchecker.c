# include<stdio.h>
# include<string.h>


int 
int main()
{
    char word1[100];
    fgets(word1,100,stdin);
    word1[strcspn(word1,"\n")]='\0';

    char word2[100];
    fgets(word2,100,stdin);
    word2[strcspn(word2,"\n")]='\0';

    int result = spellchecker(word1,word2);
    printf("%d",result);
}