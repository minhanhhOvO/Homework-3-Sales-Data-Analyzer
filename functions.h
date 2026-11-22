// functions.h - shared function signatures for Homework 3: Sales Data Analyzer
// DO NOT change a signature without telling the whole group.
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <vector>

// ---- Hung: io.cpp ----
// Returns false if the file cannot be opened (test 1), true otherwise.
// An empty file returns true with an empty vector.
// readSales keeps only whole numbers >= 0 and counts every other entry in invalidCount.
bool readSales(const std::string& filename, std::vector<int>& values, int& invalidCount);
bool readTargets(const std::string& filename, std::vector<int>& targets);

// One row of the search table in report.txt
struct SearchResult {
    int target;
    int linearIndex;
    long long linearComparisons;
    int binaryIndex;
    long long binaryComparisons;
};

// Writes report.txt (format of slide 72). sortedValues is the sorted copy of the valid sales.
// Provisional signature: Hung may change it, since only main.cpp and io.cpp use it.
void writeReport(const std::string& filename,
                 const std::vector<int>& sortedValues,
                 int invalidCount,
                 long long bubbleComparisons,
                 long long selectionComparisons,
                 const std::vector<SearchResult>& results);

// ---- Khoi: stats.cpp ----
// main() only calls these when values is NOT empty.
long long calculateTotal(const std::vector<int>& values);
double calculateAverage(const std::vector<int>& values);
int findMin(const std::vector<int>& values);
int findMax(const std::vector<int>& values);

// ---- Dat: sort_search_dat.cpp ----
// Sorts the vector passed in (main passes a COPY). comparisons is set by main to 0 before the call.
void bubbleSort(std::vector<int>& values, long long& comparisons);
// values must be sorted. Returns the index or -1.
int binarySearch(const std::vector<int>& values, int target, long long& comparisons);

// ---- Anh: sort_search_anh.cpp ----
void selectionSort(std::vector<int>& values, long long& comparisons);
// Searches the ORIGINAL (unsorted) vector. Returns the index or -1.
int linearSearch(const std::vector<int>& values, int target, long long& comparisons);

#endif
