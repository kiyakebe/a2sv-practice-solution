class Solution {
public:
    bool isPalindrome(int x) {
        string string_x = to_string(x);
        int right = string_x.length()-1;
        for(int i = 0; i < string_x.length(); i ++){
            if(i > right){
                break;
            }
            if(string_x[i] != string_x[right]){
                return false;
            }
            right--;
        }
        return true;
    }
};