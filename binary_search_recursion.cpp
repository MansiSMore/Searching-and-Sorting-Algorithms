//Binary Search - Search a sorted array by repeatedly dividing the search interval in half.
//The time complexity : O(logn). 

/*
Note : Thank you. Exactly what I was looking for. (left + right) / 2 is not a safe operation on high numbers.
Better to use left + ((right - left)/2) or (right + left) >> 1 which are equivalent.
*/

#include <iostream>
using namespace std;

int binary_search_recursion(int arr[], int low, int high, int x)
{
    if(low <= high)
    {
        int mid = low + (high - low) / 2;

        //If the element is present at the middle
        if(arr[mid] == x)
            return mid;
        
        //If the element is lower than search element
        else if(x < arr[mid])
            return binary_search_recursion(arr, low, mid - 1, x);
        //If the element is greater than search element
        else
            return binary_search_recursion(arr, mid + 1, high, x);
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70 };
    //If array is not sorted, first sort it.
    
    int len = sizeof(arr)/sizeof(int), x = 0, ans = 0;

    cout << "Enter the element which you want to search : \n";
    cin >> x;

    ans = binary_search_recursion(arr, 0, len - 1, x);
    if(ans == -1)
        cout << "Element is not present in array.\n";
    else
        cout << "Element is present at index " << ans << endl;
    
    return 0;

}