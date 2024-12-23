class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1+str2 != str2+str1) {
            return "";
        }

        int gcd_length = gcd(str1.size(),str2.size());

        return str1.substr(0, gcd_length);
    }
private:
    int gcd (int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
};
