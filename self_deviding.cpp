class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answers;
        string num_string;
        bool selfDeviding = true;
        for(int i = left; i <= right; i++){
            selfDeviding = true;
            if(nosZero(i) ){
                num_string = to_string(i);
                for(char j: num_string){
                    if(i % stoi(string(1, j)) != 0){
                        selfDeviding = false;
                        break;
                    }
                }
            }else{
                selfDeviding = false;
            }
            if(selfDeviding){
                answers.push_back(i);
            }
        }
        return answers;
    }
    bool nosZero(int n){
        if(to_string(n).find('0') == -1) return true;
        return false;
    }
};