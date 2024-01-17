class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int a = nums.size();
        
        int res = 0;
        for(int i=0; i <= (1<<a);i++)
        {
           // cout<<" i "<<i<<endl;
            int x =i;
            int total = 0;
            for(int j=0; j<a; j++)
            {
                //cout<<" j "<<j<<endl;
                if(x & 1 == 1)
                {
                    total ^= nums[j];
                    //cout<<" total "<<total <<endl;
                    
                }
                //cout<<" x "<<x<<endl;
                x >>=1;
            }
            res += total;
            //cout<<" result "<<res<<endl<<endl;
        }
        return res;       
    }
};