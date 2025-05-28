# Binary Search Algorithm (Overflow Safe)

## Overview

Binary Search is an efficient algorithm used to find a target element in a **sorted** array or list. It works by repeatedly dividing the search interval in half, drastically reducing the number of comparisons needed.

---

## How Binary Search Works (Pictorial Explanation)

Consider the sorted array:
Index: 0 1 2 3 4 5
Array: [1, 3, 5, 7, 9, 11]

We want to find the target value `7`.

1. **Start:**  
   Look at the middle element (index 2), which is `5`.

2. **Compare:**  
   Since `7 > 5`, discard the left half (indices 0 to 2).

3. **Next interval:**  
   Consider the right half (indices 3 to 5). Middle element is at index 4, which is `9`.

4. **Compare:**  
   Since `7 < 9`, discard the right half (indices 4 to 5).

5. **Narrow down:**  
   Now only index 3 remains, which is `7`.

6. **Found:**  
   Target found at index 3!

This approach reduces the search space by half at each step, leading to a very fast lookup.

---

## Why Avoid `(left + right) / 2`?

When computing the middle index, using the formula `(left + right) / 2` can cause **integer overflow** if `left` and `right` are large integers. This happens because their sum might exceed the maximum value an integer can hold.

Instead, calculate the middle index safely as:
mid = left + (right - left) / 2

This avoids adding two potentially large numbers directly and prevents overflow errors.

---

## Edge Cases to Consider

| Edge Case               | Description                                | Expected Behavior                           |
| ----------------------- | ------------------------------------------ | ------------------------------------------- |
| Empty array             | Searching in an empty list                 | Should return "not found"                   |
| Target smaller than all | Target is less than the smallest element   | Should return "not found"                   |
| Target larger than all  | Target is greater than the largest element | Should return "not found"                   |
| Single-element array    | Array contains only one element            | Returns index if it matches, else not found |
| Target at the beginning | Target is the first element                | Should find target at index 0               |
| Target at the end       | Target is the last element                 | Should find target at last index            |

---

## Practical Applications of Binary Search

Binary Search is widely used in many areas where fast lookup is required on sorted data:

- **Searching in sorted arrays or lists:** Quickly find a value without scanning each element.
- **Databases:** Efficient indexing and querying over sorted records.
- **Dictionaries and Lexicons:** Lookup words in sorted lists.
- **Gaming:** Finding elements or states efficiently in sorted datasets.
- **Computer Graphics:** Searching sorted arrays for ray tracing or collision detection.
- **Software Libraries:** Functions like `std::lower_bound` or `std::upper_bound` internally use binary search.
- **Optimizations and Search Problems:** Binary search can be applied on answer space in optimization tasks or when searching for thresholds.

---

## Summary

- Binary Search efficiently narrows down the search space by half every step.
- Overflow-safe middle index calculation is critical when working with large data.
- Works only on sorted data.
- Has a wide range of applications in computing and real-world scenarios.

---

Feel free to save this as your reference for understanding binary search and its practical uses.
