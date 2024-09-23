# include<stdio.h>
# include<string.h>
# include<limits.h>
int maxProduct(int arr[], int n)
{
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for(int i = 0;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max3 = max2;
            max2=max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2)
        {
            max3 = max2;
            max2 = arr[i];
        }
        else if(arr[i]>max3)
        {
            max3 = arr[i];
        }
        if(arr[i]<min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i]<min2)
        {
            min2 = arr[i];
        }
    }
    int result1  = max1 * max2 * max3;
    int result2 = min1 * min2 * max1;

    return result1>result2?result1 : result2;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int maximumProduct = maxProduct(arr,n);
    printf("Maximum Product: %d",maximumProduct);
}
