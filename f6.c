# include<stdio.h>

int powerfunc(int base,int power)
{
    int result = 1;
    for(int i = 1;i<=power;i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int base;
    scanf("%d",&base);
    int power;
    scanf("%d",&power);

    printf("%d",powerfunc(base,power));
}