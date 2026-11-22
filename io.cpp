// io.cpp - Hung
#include "functions.h"

bool readSales(const std::string& filename, std::vector<int>& values, int& invalidCount) {
    // TODO: open the file; return false if it cannot be opened.
    // Read line by line. Keep whole numbers >= 0, count everything else in invalidCount.
    (void)filename;
    (void)values;
    (void)invalidCount;
    return false;
}

bool readTargets(const std::string& filename, std::vector<int>& targets) {
    // TODO: read one integer target per line.
    (void)filename;
    (void)targets;
    return false;
}

void writeReport(const std::string& filename,
                 const std::vector<int>& sortedValues,
                 int invalidCount,
                 long long bubbleComparisons,
                 long long selectionComparisons,
                 const std::vector<SearchResult>& results) {
    // TODO: write report.txt in the exact format of slide 72.
    // Use calculateTotal, calculateAverage, findMin, findMax (Khoi) only when sortedValues is not empty.
    (void)filename;
    (void)sortedValues;
    (void)invalidCount;
    (void)bubbleComparisons;
    (void)selectionComparisons;
    (void)results;
}
