// ---------------------------------
// target < nums[m]
// ---------------------------------

int search(vector<int>& nums, int target) {
    // init possible boundary
    int n = nums.size(), l = 0, r = n - 1;
    while (l < r) {
        // get the middle one
        // for even number of elements, take the upper one
        int m = l + (r - l + 1) / 2;
        // exclude m
        if (target < nums[m]) r = m - 1;
        // include m
        else l = m;
    }
    return nums[l] == target ? l : -1;
}
