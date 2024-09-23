# include<stdio.h>
# include<string.h>
int pivotFind(int arr[],int n)
{
    int total_sum = 0;
    int left_sum = 0;

    for(int i = 0 ;i <n;i++)
   {
    total_sum += arr[i];
  }

  for(int i = 0;i<n;i++)
  {
    total_sum -= arr[i];
    if(left_sum == total_sum)
    {
        return i;
    }
    left_sum += arr[i];
  }

  return -1;



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

    int pivotIndex = pivotFind(arr,n);

    if(pivotIndex != -1)
    {
        printf("Index: %d",pivotIndex);
    }
    else{
        printf(" Index is Not Find");
    }
}