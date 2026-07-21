class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 != str2 + str1)
            return "";
        // If strings are equal than  i can return the substring from 0 to gcd 
        return str1.substr(0, gcd(str1.size(), str2.size()));
    }
};