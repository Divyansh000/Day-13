
class Solution {
public:
    int singleNonDuplicate(vector<int>& v)
    {
        int x=0,i=0;
        for(i=0;i<v.size();i++)
        {
            x=x^v[i];
        }
        return x;

    }
};
