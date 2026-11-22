# Sales Data Analyzer (Homework 3)

## Who owns which file
| File | Owner | Functions |
|---|---|---|
| `functions.h` | everyone (do not change signatures alone) | declarations |
| `main.cpp`, `io.cpp` | Hung | `main`, `readSales`, `readTargets`, `writeReport` |
| `stats.cpp` | Khoi | `calculateTotal`, `calculateAverage`, `findMin`, `findMax` |
| `sort_search_dat.cpp` | Dat | `bubbleSort`, `binarySearch` |
| `sort_search_anh.cpp` | Anh | `selectionSort`, `linearSearch` |
| `tests/` | Khoi | input files for the 8 tests |

## Rules
- Only edit your own file. Run `git pull` before you start working.
- Comparison counting: `++comparisons;` goes right before the `if` shown in slide 73.
- `main` sorts COPIES; linear search uses the ORIGINAL vector.

## Build and run
```bash
g++ -std=c++17 -Wall main.cpp io.cpp stats.cpp sort_search_dat.cpp sort_search_anh.cpp -o analyzer
./analyzer
```
`sales.txt` and `targets.txt` must be in the folder you run from.
