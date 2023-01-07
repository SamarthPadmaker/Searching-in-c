#include <stdio.h>
int linearS(int arr[], int n, int num)
{
    int i = 0;
    while (i < n)
    {
        if (arr[i] == num)
        {
            return i;
        }
        i++;
    }
    return -1;
}
int binarySearch(int arr[], int n, int num)
{
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (num == arr[mid])
        {
            return mid;
        }
        if (num < arr[mid])
        {
            end = mid - 1;
        }
        else
            st = mid + 1;
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num;
    printf("Enter a number to be serched : ");
    scanf("%d", &num);

    printf("%d\n", linearS(arr, n, num));
    printf("%d\n", binarySearch(arr, n, num));

    return 0;
}
