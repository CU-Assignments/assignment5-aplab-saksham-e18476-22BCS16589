//
//  main.cpp
//  ap exp 6
//
//  Created by saurav saha on 19/02/25.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else if (nums[mid] == 2) {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main() {
    Solution solution;
    
    // Example 1
    vector<int> nums1 = {2, 0, 2, 1, 1, 0};
    solution.sortColors(nums1);
    cout << "Sorted array for Example 1: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;
    
    // Example 2
    vector<int> nums2 = {2, 0, 1};
    solution.sortColors(nums2);
    cout << "Sorted array for Example 2: ";
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
