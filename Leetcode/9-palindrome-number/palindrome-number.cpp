class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false; // Negative numbers are not palindromes
        }

        int n = x;
        long long revNo = 0; // Use long long to prevent overflow

        while (n > 0) {
            int d = n % 10;
            revNo = revNo * 10 + d;
            n = n / 10;
        }

        // Compare the reversed number with the original.
        return revNo == x;
    }
};
