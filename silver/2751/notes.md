https://www.acmicpc.net/problem/2751

sorting

first idea: insert as you go
- but that would take O(n^2)
- also inserting and shifting might be inefficient

second idea: merge
- put them in pairs
- sort that pair
- compare and merge pairs
- repeat til there's only one giant list

Notes
- can selectively import stuff like `using std::vector` instead of doing namespace std
- ++it is better than it++ because it++ involves making a copy of the iterator which is wasteful
- iterator comparison isn't supported for some data structures
- iterators my beloved
- Could be more optimized in terms of memory. Something to look into in the future