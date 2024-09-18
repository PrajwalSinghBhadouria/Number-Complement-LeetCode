class Solution {
public:
    int findComplement(int num) {
        int c = num;
        vector<int> v1;
        while(c!=0){
            v1.push_back(c%2);
            c /=2;
        }
        vector<int> v2;
        for(int i=0; i<v1.size(); i++){
            if(v1[i]==1){
                v2.push_back(0);
            }
            else{
                v2.push_back(1);
            }
        }
        int ans=0;
        for(int i=0 ; i<v2.size(); i++){
            ans = pow(2,i)*v2[i]+ans;
        }
        return ans;
    }
};
