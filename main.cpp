// main.cpp - Hung
#include <iostream>
#include <vector>

#include "functions.h"

int main() {
    std::vector<int> sales;
    std::vector<int> targets;
    int invalidCount = 0;

    // TODO (Hung): test 1 (missing or empty file): write a sensible report instead of exiting.
    if (!readSales("sales.txt", sales, invalidCount)) {
        std::cout << "Cannot open sales.txt\n";
        return 1;
    }
    readTargets("targets.txt", targets);

    // Sort COPIES, keep the original for linear search
    std::vector<int> bubbleCopy = sales;
    std::vector<int> selectionCopy = sales;
    long long bubbleComparisons = 0;
    long long selectionComparisons = 0;
    std::vector<SearchResult> results;

    if (!sales.empty()) {
        bubbleSort(bubbleCopy, bubbleComparisons);
        selectionSort(selectionCopy, selectionComparisons);

        for (int target : targets) {
            // Reset both counters to 0 before every call
            long long linearComparisons = 0;
            long long binaryComparisons = 0;
            int linearIndex = linearSearch(sales, target, linearComparisons);
            int binaryIndex = binarySearch(bubbleCopy, target, binaryComparisons);
            results.push_back({target, linearIndex, linearComparisons, binaryIndex, binaryComparisons});
        }
    }

    writeReport("report.txt", bubbleCopy, invalidCount,
                bubbleComparisons, selectionComparisons, results);
    return 0;
}
