You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively. 
Merge nums1 and nums2 into a single array sorted in non-decreasing order. 
  
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3 

output : [1, 2, 2, 3, 5, 6]

int arr[3] = {1, 2, 3};
int i = 0;
int j = 0;
int k = 0;

while(i<m && j<n){
    if(arr[i]<=nums2[j]){
        nums1[k] = arr[i];
        i++;
        k++;
    }
    else{
        nums1[k] = nums2[j];
        j++;
        k++;
    }
}

while(i<m){
    nums1[k] = arr[i];
    i++;
}

while(j<n){
    nums1[k] = nums2[j];
    j++;
}


