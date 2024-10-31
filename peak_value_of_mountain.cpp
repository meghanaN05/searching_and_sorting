
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0, r = arr.size() - 1, mid;
        while (l < r) {
            mid = (l + r) / 2;
            if (arr[mid] < arr[mid + 1])
                l = mid + 1;
            else
                r = mid;
        }
        return r;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {0, 2, 5, 3, 1}; // Example mountain array
    int peakIndex = sol.peakIndexInMountainArray(arr);
    cout << "Peak index in the mountain array: " << peakIndex << endl;
    return 0;
}
