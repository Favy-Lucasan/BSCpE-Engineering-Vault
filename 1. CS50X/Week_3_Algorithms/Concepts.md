# CS50 Week 3: Algorithms

## High-Level Abstractions
* **Algorithms:** A computer's systematic, step-by-step procedure to solve a specific problem.
* **Time Complexity (Efficiency):** The theoretical measurement of an algorithm's processing cost. An algorithm's efficiency dictates whether it scales gracefully (low time cost) or bottlenecks the system (high time cost) as the amount of input data increases.

## Algorithmic Efficiency and Running Time
* **Running Time:** The theoretical measurement of an algorithm's processing cost. It is quantified not in physical seconds, but by the number of computational steps required relative to the size of the input data ($n$).
* **Big O Notation ($O$):** The **upper bound** or worst-case scenario of an algorithm's running time. It mathematically guarantees that the algorithm will take *no longer* than this specific order of steps.
    * $O(n^2)$: Quadratic time (highly inefficient for large datasets)
    * $O(n \log n)$: Linearithmic time
    * $O(n)$: Linear time
    * $O(\log n)$: Logarithmic time
    * $O(1)$: Constant time (highest efficiency; execution cost is independent of input size)
* **Omega Notation ($\Omega$):** The **lower bound** or best-case scenario of an algorithm's running time. It mathematically guarantees that the algorithm will take *at least* this specific order of steps under perfect conditions.
* **Theta Notation ($\Theta$):** The **tight bound**. This notation is used strictly when an algorithm's best-case ($\Omega$) and worst-case ($O$) scenarios are identical, meaning its processing cost scales at the exact same rate regardless of how the input data is arranged.
* **Asymptotic Notation:** The mathematical framework used to describe the limiting behavior and processing cost of an algorithm as the input size ($n$) approaches infinity. It provides the standardized language (Big $O$, $\Omega$, and $\Theta$) that engineers use to evaluate and compare hardware-independent algorithmic scalability.

## Searching Algorithms and Core Mechanics
* **Searching Algorithm:** The systematic computational process of locating a specific target value within a data structure.
* **Linear Search:** An algorithm that iterates sequentially through an array, evaluating each contiguous memory block one by one from start to finish until the target value is found or the end of the array is reached.
* **Linear Search Time Complexity:** Because it must check every single element in the worst-case scenario, its upper bound time complexity is $O(n)$, making it highly inefficient for massive datasets, though its best-case scenario (finding the target on the first try) is $\Omega(1)$.
* **Binary Search:** A divide-and-conquer algorithm that locates a target value within a strictly **sorted** array. It operates by comparing the target to the middle element and systematically discarding the half of the search space where the target cannot possibly reside, repeating this process until the target is found.
* **Binary Search Time Complexity:** Because it halves the remaining data structure on every single iteration, its upper bound time complexity is $O(\log n)$. This makes it exponentially more efficient than Linear Search for massive datasets, though its best-case scenario (finding the target in the exact middle on the first try) remains $\Omega(1)$.
* **`strcmp` (String Compare):** A function imported from the `<string.h>` standard library used to systematically compare two strings character by character (using their ASCII values). 
    * **The Zero Trap:** Because it calculates the ASCII difference between the two strings, it returns `0` if the strings are an exact match. (It returns a negative value if string 1 is lesser, and a positive value if string 1 is greater).
* **`typedef struct`:** A combination of C keywords used to define a custom, composite data structure. It allows an engineer to group multiple related variables of different data types (e.g., a `string` for a name and an `int` for a vote count) under a single, unified type in memory.

## Sorting Algorithms and Recursion
* **Sorting:** The computational process of organizing an unsorted sequence of data into a strictly ordered arrangement (typically ascending or descending) to drastically optimize future search operations.
* **Selection Sort:** An algorithm that iterates through the unsorted portion of an array to find the smallest element, swapping it with the first unsorted element. It repeats this process systematically until the entire array is ordered. Theta notation works for selection sort.
    * **Worst-Case (Upper Bound):** $O(n^2)$
    * **Best-Case (Lower Bound):** $\Omega(n^2)$ (Because the algorithm must still scan the entire remaining array to verify the smallest number, it cannot terminate early).
* **Bubble Sort:** An algorithm that repeatedly iterates through an array, comparing **adjacent** elements side-by-side and swapping them if they are in the wrong order. This process forces the largest unsorted elements to "bubble" to the end of the array.
    * **Worst-Case (Upper Bound):** $O(n^2)$
    * **Best-Case (Lower Bound):** $\Omega(n)$ (If the algorithm completes a full pass without making a single swap, it knows the array is perfectly sorted and can terminate early).
* **Recursion:** A programming technique where a function calls itself to solve smaller, progressively simpler instances of the same problem.
    * **Base Case:** The mandatory terminating condition that stops the recursion. Without this, the function will call itself infinitely, leading to a fatal memory error known as a "stack overflow."
    * **Recursive Case:** The branch of the function that executes the self-call, systematically modifying the input parameters so they converge toward the base case.
* **Merge Sort:** A recursive, divide-and-conquer sorting algorithm. It systematically halves an unsorted array until it reaches base cases of a single element (which are inherently sorted), and then merges those halves back together in strictly ascending or descending order.
    * **Worst-Case (Upper Bound):** $O(n \log n)$
    * **Best-Case (Lower Bound):** $\Omega(n \log n)$
    * **The Tight Bound ($\Theta$):** Because Merge Sort must always mathematically divide the array and merge it back together regardless of whether the initial data was already sorted, its best and worst cases scale at the exact same rate. Therefore, it operates strictly in $\Theta(n \log n)$ time.


