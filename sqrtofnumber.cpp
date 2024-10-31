#include <iostream> // For standard input/output

class Solution {
public:
    int mySqrt(int x) {
        long long si = 0, ei = x;
        int ans = 0;

        while (si <= ei) {
            long long mid = (si + ei) / 2;
            if (mid * mid <= x) {
                ans = mid;       // Update answer if mid^2 is less than or equal to x
                si = mid + 1;    // Move to the right half
            } else {
                ei = mid - 1;    // Move to the left half
            }
        }

        return ans;
    }
};

int main() {
    Solution solution;
    int x;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> x;

    int result = solution.mySqrt(x);
    std::cout << "The integer square root of " << x << " is " << result << std::endl;

    return 0;
}
