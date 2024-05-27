class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        int i = 0, j = 0;
        int size1 = nums1.size(), size2 = nums2.size();
        int totalSize = size1 + size2;

        while (i < size1 && j < size2) {
            if (nums1[i] < nums2[j]) {
                merged.push_back(nums1[i]);
                i++;
            } else {
                merged.push_back(nums2[j]);
                j++;
            }
        }

        while (i < size1) {
            merged.push_back(nums1[i]);
            i++;
        }

        while (j < size2) {
            merged.push_back(nums2[j]);
            j++;
        }

        if (totalSize % 2 == 0) 
            return (merged[totalSize / 2 - 1] + merged[totalSize / 2]) / 2.0;
        else
            return merged[totalSize / 2];
    }
};
