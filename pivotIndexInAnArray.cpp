#include <iostream>
using namespace std;

// int getPivot(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int leftsum = 0;
//         int rightsum = 0;
//         // leftsum
//         for (int j = 0; j < i; j++)
//         {
//             leftsum += arr[j];
//         }
//         // rightsum
//         for (int k = i + 1; k < size; k++)
//         {
//             rightsum += arr[k];
//         }

//         if (leftsum == rightsum)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

int getPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    int pivot = getPivot(arr, 5);
    cout << "The pivot index of the array is " << pivot << endl;

    return 0;
}