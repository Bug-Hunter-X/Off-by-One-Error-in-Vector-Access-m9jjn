# Off-by-One Error in C++ Vector Access
This repository demonstrates a common off-by-one error when iterating through a `std::vector` in C++.  The error arises from incorrectly accessing the element at index `vec.size()`, which is one past the valid range of indices.

The `bug.cpp` file contains the erroneous code. The `bugSolution.cpp` file shows the corrected code with the proper loop condition.

This example highlights the importance of careful index checking when working with vectors and other array-like data structures in C++ to avoid undefined behavior and potential crashes.