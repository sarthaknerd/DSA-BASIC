//tle approach
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;

        for(int i = 0 ;i<n;i++){
            for(int j = 0 ; j<n;j++){
                int area = (j-i) * min(height[i],height[j]);
                ans = max(ans,area);
            }
        }
        return ans;
    }
};

//O(n) approach
//video link :https://www.youtube.com/watch?v=ZHQg07n_tbg&t=622s&ab_channel=Codebix
class Solution {
public:
    int maxArea(vector<int>& height) {
        int mArea = 0 ;
        int n = height.size();
        int left = 0 ;
        int right = n-1;
        while(left<right){
            int area = (right - left) *  min(height[left],height[right]);
            mArea = max(mArea,area);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }

        }
    return mArea;

    }
};
