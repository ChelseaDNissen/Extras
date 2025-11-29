class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0; i< nums2.size();i++){
            nums1.push_back(nums1.at(i));
        }
        sort(nums1.begin(),nums1.end());
        double median ;
        median =  ( ( nums1.at((nums1.size()/2)-1)) + nums1.at(nums1.size()/2) )/2 ) ;
        return  median;
    }
};
