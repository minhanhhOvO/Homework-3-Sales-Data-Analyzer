// sort_search_dat.cpp - Dat
#include "functions.h"

void bubbleSort(std::vector<int>& values, long long& comparisons) {
    // TODO: bubble sort with early exit (stop when a pass makes no swap).
    // Count a comparison exactly here, right before the if:
    //     ++comparisons;
    //     if (values[i] > values[i + 1]) { ... }
    (void)values;
    (void)comparisons;
}

int binarySearch(const std::vector<int>& values, int target, long long& comparisons) {
    // TODO: values is sorted. Count a comparison exactly here, right before the if:
    //     ++comparisons;
    //     if (values[mid] == target) { ... }
    // Return the index, or -1 if not found.
    (void)values;
    (void)target;
    (void)comparisons;
    return -1;
}
