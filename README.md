# Question 2:

# Element Search — Decrease and Conquer

A recursive algorithm that searches an array for an element satisfying the condition `arr[i] == 2 * i`, using the decrease-and-conquer strategy.

---

## Algorithm Design

The algorithm uses **decrease-by-one** decrease and conquer. Starting from the last index, it checks whether the element at position `i` satisfies `arr[i] == 2 * i`. If not, it reduces the problem size by 1 and recurses on `i - 1`. This continues until either a match is found or the index goes below 0.

**Base case:** `i < 0` → return `-1` (element not found)  
**Recursive case:** check current index; if no match, search `i - 1`

---

## Implementation

```python
def element_search(arr, i):
    if i < 0:
        return -1
    if arr[i] == 2 * i:
        return arr[i]
    return element_search(arr, i - 1)
```

### Usage

```python
arr = [0, 3, 4, 6, 9]
result = element_search(arr, len(arr) - 1)
print(result)  # Output: 6
```

---

## How the Problem Size Reduces

Each recursive call decreases the index `i` by exactly 1, shrinking the search space by one element per step.

| Call | Index `i` | `arr[i]` | `2 * i` | Match? |
|------|-----------|----------|---------|--------|
| 1st  | 4         | 9        | 8       | No     |
| 2nd  | 3         | 6        | 6       | ✅ Yes  |

In the worst case (no match exists), the calls proceed:

```
element_search(arr, n-1)
  → element_search(arr, n-2)
    → element_search(arr, n-3)
      → ...
        → element_search(arr, 0)
          → element_search(arr, -1)  ← base case, return -1
```

---

## Recurrence Relation

At each step, the algorithm does O(1) work (one comparison) and makes one recursive call on a problem of size `i - 1`.

$$T(n) = T(n-1) + O(1)$$

With base case:

$$T(0) = O(1)$$

### Solving the Recurrence

Expanding the recurrence:

```
T(n) = T(n-1) + c
     = T(n-2) + c + c
     = T(n-3) + 3c
     ...
     = T(0)   + n*c
     = O(1)   + n*c
     = O(n)
```

---

## Worst-Case Time Complexity

| Case | Condition | Complexity |
|------|-----------|------------|
| Best | Match found at last index `i = n-1` | O(1) |
| Average | Match found somewhere in the middle | O(n) |
| Worst | No match exists / match is at index 0 | O(n) |

**Worst-case: O(n)** — the algorithm scans every element before hitting the base case.

> ⚠️ **Space Complexity:** O(n) due to the recursive call stack. For very large arrays, consider the iterative version below to avoid stack overflow.

---

## Iterative Alternative

```python
def element_search_iterative(arr):
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] == 2 * i:
            return arr[i]
    return -1
```

This achieves the same O(n) time complexity but with **O(1) space**.

---

## Summary

| Property | Value |
|----------|-------|
| Strategy | Decrease and Conquer (decrease by one) |
| Recurrence | T(n) = T(n-1) + O(1) |
| Time Complexity | O(n) |
| Space Complexity | O(n) — recursive stack |
| Best Case | O(1) |
