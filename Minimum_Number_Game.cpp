class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        //T(C(N)==O(N)) and S(C(N)==O(1)) as it requires non memory space allocation iteratively
        sort(nums.begin(),nums.end());//Sorting the Nums's 1st and Ending Indx elements
        for(int i=0;i<nums.size();i+=2){swap(nums[i],nums[i+1]);}return nums;}};//Iterating through Nums's size and printing its min.(element) by  swapping 
