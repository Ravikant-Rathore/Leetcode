class Solution {
public:
    int largestInteger(int num) {
        vector<int>e;
        vector<int>o;
        vector<int>temp;
        while(num>0)
        {
            int r=num%10;
            if(r%2==0)
            {
                e.push_back(r);
                temp.push_back(1);
            }
            else
            {
                o.push_back(r);
                temp.push_back(0);
            }
            num=num/10;
        }
        reverse(temp.begin(),temp.end());
        sort(e.begin(), e.end(), greater<int>());
        sort(o.begin(), o.end(), greater<int>());
        int i=0;
        int j=0;
        int k=0;
        int ans=0;
        while(k<temp.size())
        {
            if(temp[k]==1)
            {
               ans=ans*10+e[i];
                i++;
            }
            if(temp[k]==0)
            {
               ans=ans*10+o[j];
                j++;
            }
            k++;
        }
        return ans;
        }
};