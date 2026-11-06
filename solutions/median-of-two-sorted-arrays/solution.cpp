class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        priority_queue<int>pq;
        vector<int> ans;
        for(int i= 0;i<nums1.size();i++){
            pq.push(nums1[i]);
        }
        for(int i= 0;i<nums2.size();i++){
            pq.push(nums2[i]);
        }

        if(pq.size() %2 == 0){
            int mid = pq.size()/2;
            while(--mid){
                pq.pop();
            }
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            double median = (a+b)/(double)2;
            return median;
        }
         int mid = pq.size()/2;
            while(mid--){
                pq.pop();
            }
            int a = pq.top();
            pq.pop();
         
           
            return a;
    }
};