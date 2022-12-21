class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        if(start>=n || start<0 || arr[start]==-1)
        return false;
        if(arr[start]==0)
      return true;
      int temp = arr[start];
      arr[start]=-1;
      bool x = canReach(arr,start+temp);
      bool y = canReach(arr,start-temp);
      return x||y;
    }
};
