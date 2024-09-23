# include<stdio.h>
# include<string.h>
int fabb(int n)
{
    int result = 0;
    int n1 = 0;
    int n2 = 1;

    for(int i = 1;i<=n;i++)
    {
      int temp = n1+n2;
      n1 = n2;
      n2 = temp;
      result += temp;