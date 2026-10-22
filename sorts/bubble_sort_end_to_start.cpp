#include "bubble_sort_end_to_start.h"
#include <utility>

void bubbleSortSwapEndToStart(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = n - 1; j > i; --j) {
            if (arr[j - 1] > arr[j]) {
                std::swap(arr[j - 1], arr[j]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}
