#include "radix_sort_bitwise.h"

void radixSortBinaryBitwise(std::vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return;

    std::vector<int> output(n);
    // Assumes non-negative integers. Sorts bit-by-bit using base 2.
    for (int shift = 0; shift < 31; ++shift) {
        int count[2] = {0, 0};
        for (int i = 0; i < n; ++i) {
            int bit = (arr[i] >> shift) & 1;
            count[bit]++;
        }
        count[1] += count[0];
        for (int i = n - 1; i >= 0; --i) {
            int bit = (arr[i] >> shift) & 1;
            output[count[bit] - 1] = arr[i];
            count[bit]--;
        }
        arr = output;
    }
}
