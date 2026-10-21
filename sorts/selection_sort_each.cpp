#include "selection_sort_each.h"
#include <utility>

void selectionSortSwapEach(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[i]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}
