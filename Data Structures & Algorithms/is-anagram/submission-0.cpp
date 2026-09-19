class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length())
        return false;

        unordered_map<char, int> countS;
        unordered_map<char, int> countT;

        for(char s_view : s)
        {
            countS[s_view]++;
        }

        for (char t_view : t)
        {
            countT[t_view]++;
        }

      

        return countS == countT;
        
    }
};
