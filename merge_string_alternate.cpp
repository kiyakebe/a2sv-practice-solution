class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int word1_l = word1.length(), word2_l = word2.length(), short_l;
        if(word1_l < word2_l) short_l = word1_l;
        else short_l = word2_l;
        
        for(int i = 0; i < short_l; i++){
            merged = merged + word1[i] + word2[i]; 
        }

        if(word1_l < word2_l)merged += word2.substr(short_l, word2_l - 1);
        if(word2_l < word1_l)merged += word1.substr(short_l, word1_l - 1);

        return merged;
    }
};