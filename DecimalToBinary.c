# include<stdio.h>
# include<string.h>

void tobinary(int n)
{
    int arr[10];
    int hold = n;
    int index = 0;
    while(hold>0)
    {
        int rem = hold % 2;
        arr[index++]=rem;
        hold /= 2;
    }
for(int i = index-1;i>=0;i--)
{
    printf("%d",arr[i]);
}
}

int main()
{
    int n;
    scanf("%d",&n);
    tobinary(n);

}