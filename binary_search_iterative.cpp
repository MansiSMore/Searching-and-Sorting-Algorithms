//Binary Search - Search a sorted array by repeatedly dividing the search interval in half.
//The time complexity : O(logn). 

/*
Note : Thank you. Exactly what I was looking for. (left + right) / 2 is not a safe operation on high numbers.
Better to use left + ((right - left)/2) or (right + left) >> 1 which are equivalent.
*/

#include <iostream>
using namespace std;

int binary_search_iterative(int arr[], int low, int high, int x)
{        
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
            
        if(arr[mid] == x)
            return mid;
        else if(arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70 }, x = 0, ans = 0, len = sizeof(arr) / sizeof(int) - 1;
    //If array is not sorted, first sort it.
    
    cout << "Enter the element which you want to search : \n";
    cin >> x;

    ans = binary_search_iterative(arr, 0, len, x);
    if(ans == -1)
        cout << "Element is not present in array.\n";
    else
        cout << "Element is present at index " << ans << endl;
    
    return 0;

}