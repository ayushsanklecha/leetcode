class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long original = x;
        long long revnum = 0;
        long long temp = x;

        while (temp > 0) {
            int ld = temp % 10;
            revnum = revnum * 10 + ld;  // now in long long, no overflow
            temp = temp / 10;
        }

        return revnum == original;
    }
};