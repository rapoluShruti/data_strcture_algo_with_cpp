#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int> &arr, int target)
{
    int left = 0, right = (int)arr.size() - 1;
    while (left <= right)
    {
        // Avoid overflow here by using:
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // target not found
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 7;

    int index = binarySearch(arr, target);
    if (index != -1)
        cout << "Found target " << target << " at index " << index << "\n";
    else
        cout << "Target not found\n";

    return 0;
}
