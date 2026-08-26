class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;

        // Only store odd numbers.
        vector<bool> isComposite(n, false);

        int count = 1; // prime number 2

        for (int i = 3; i < n; i += 2) {
            if (!isComposite[i]) {
                count++;

                // i*i can be greater than n
                if (i <= (n - 1) / i) {
                    for (int j = i * i; j < n; j += 2 * i) {
                        isComposite[j] = true;
                    }
                }
            }
        }

        return count;
    }
};