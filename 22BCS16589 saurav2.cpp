//
//  main.cpp
//  ap exp 6
//
//  Created by saurav saha on 19/02/25.
//

#include <iostream>
#include <vector>
#include <queue> // For priority_queue
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // Create a min-heap (priority queue)
        priority_queue<int, vector<int>, greater<int>> minHeap;

        // Iterate through the array
        for (int num : nums) {
            // Push the current element into the heap
            minHeap.push(num);

            // If the heap size exceeds k, remove the smallest element
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        // The top of the heap is the kth largest element
        return minHeap.top();
    }
};

int main() {
    Solution solution;

    // Example 1
    vector<int> nums1 = {3, 2, 1, 5, 6, 4};
    int k1 = 2;
    cout << "Kth largest element for Example 1: " << solution.findKthLargest(nums1, k1) << endl;

    // Example 2
    vector<int> nums2 = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int k2 = 4;
    cout << "Kth largest element for Example 2: " << solution.findKthLargest(nums2, k2) << endl;

    return 0;
}
