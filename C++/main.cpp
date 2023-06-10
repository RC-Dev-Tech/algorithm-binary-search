#include <iostream>
#include <vector>

// Binary Search implementation.
bool binarySearch(const std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return true;  // Target element found.
        } else if (nums[mid] < target) {
            left = mid + 1;  // Update left pointer.
        } else {
            right = mid - 1;  // Update right pointer.
        }
    }

    return false;  // Target element not found.
}

int main() {
    std::vector<int> nums = {10, 15, 25, 40, 45, 55, 60, 80, 90};
    int target = 55;

    bool found = binarySearch(nums, target);

    if (found) {
        std::cout << "Found " << target << " in the array." << std::endl;
    } else {
        std::cout << "Could not find " << target << " in the array." << std::endl;
    }

    return 0;
}
