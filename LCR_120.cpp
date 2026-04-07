class Solution {
public:
    int findRepeatDocument(vector<int>& documents) {
        unordered_set<int> dic;
        vector<int>::iterator it;
        for(it = documents.begin();it!=documents.end();it++){
            if(dic.find(*it) == dic.end()){ //如果找不到
                dic.insert(*it);
            }
            else{
                return *it;
            }
        }
        return -1;
    }
};
