#include "counting_sort.h"
#include <algorithm>

void countingSort(std::vector<int>& arr) {
    if (arr.empty()) return;
    int maxVal = *std::max_element(arr.begin(), arr.end());
    int minVal = *std::min_element(arr.begin(), arr.end());
    int range = maxVal - minVal + 1;

    std::vector<int> count(range, 0);
    std::vector<int> output(arr.size());

    for (int x : arr) {
        count[x - minVal]++;
    }
    for (size_t i = 1; i < count.size(); ++i) {
        count[i] += count[i - 1];
    }
    for (int i = (int)arr.size() - 1; i >= 0; --i) {
        output[count[arr[i] - minVal] - 1] = arr[i];
        count[arr[i] - minVal]--;
    }
    arr = output;
}
