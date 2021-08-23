//Linear Search - From the starting position of an array to the end ,compare your array element with the targeted one.
//The time complexity of the below algorithm is O(n). 

#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int x)
{
    int pos = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            pos = i;
            break;
        }
    }
    return pos;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70 };
    int len = sizeof(arr)/sizeof(int), x = 0, ans = -1;

    cout << "Enter the element which you want to search : \n";
    cin >> x;

    ans = linear_search(arr, len, x);
    if(ans == -1)
        cout << "Element is not present in array.\n";
    else
        cout << "Element is present at " << ans << endl;
    
    return 0;

}