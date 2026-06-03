class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        std::array<int,26> arr = {};
        std::array<int,26> arr1 = {};
        for(int i = 0 ; i < s.length() ; i++){
            arr[s[i] - 'a']++;
            arr1[t[i] - 'a']++;
        }
        if(arr == arr1){
            return true;
        }
        return false;
    }
};class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        std::array<int,26> arr = {};
        std::array<int,26> arr1 = {};
        for(int i = 0 ; i < s.length() ; i++){
            arr[s[i] - 'a']++;
            arr1[t[i] - 'a']++;
        }
        if(arr == arr1){
            return true;
        }
        return false;
    }
};
