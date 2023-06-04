#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int arr[] = {21,20,32,27,45,29};

    int len = sizeof(arr)/sizeof(arr[0]);
    // Sort
    for (int i = 0; i < len; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sort List: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    // sum all element
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    printf("Sum: %d\n",sum);
    // sum all digit sumation
    int sum2 = 0;

    int sub = sum;
    while (sub > 0)
    {
        int mod = sub%10;
        sum2 += mod;

        sub /= 10;
    }

    printf("Digit Sum: %d\n",sum2);
    
    
    
    

    return 0;
}