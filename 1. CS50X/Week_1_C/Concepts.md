# CS50 Week 1: C

## High-Level Abstractions

* **Source Code:** Human-readable text written in a specific programming language (like C) that dictates instructions for a computer. It cannot be run directly; it must first be translated by a compiler into machine code (binary) so the computer can execute it.
* **IDE (Integrated Development Environment):** A software application that provides a comprehensive central interface for programmers to write, test, build, and debug code.
* **Header Files:** Files ending in .h (like stdio.h) that contain function declarations and macros for a C library. They are imported into the top of a source file using a preprocessor directive (like #include <stdio.h>). This tells the compiler how a function (like printf) operates before the actual compiled library is linked to the program.
* **CLI (Command Line Interface):** A text-based interface used to interact directly with a computer's operating system. It is where you write and execute text commands within a terminal application to perform tasks like compiling code.
    * In the terminal window (CLI) for Linux, some common commands used:
        * cd, for changing current directory
        * cp, for copying files and directories
        * ls, for listing files in a directory
        * mkdir, for making a directory
        * mv, for moving (renaming) files and directories
        * rm, for removing (deleting) files
        * rmdir, for removing (deleting) directories
* **Conditionals:** Control structures that allow a program to make decisions and branch its execution path based on boolean logic (true or false).
* **Data Type:** A strict classification system in C that specifies exactly what kind of value a variable will hold. Because C requires manual memory management, declaring a data type dictates how much RAM the compiler must allocate and how the CPU must interpret the underlying binary.
* **Format Codes:** Specific placeholder symbols (starting with %) used within formatted strings, primarily in functions like printf. They tell the compiler exactly which data type is being inserted into the text and how to format the corresponding variable's memory footprint.
* **Variables:** Named containers in a computer's memory used to store data. A variable must be strictly defined by two things before it can be used: its **data type** and its **name**.
* **Dynamic User Input (Runtime):** The process of pausing program execution to wait for a user to provide data via the CLI.
* **Exhaustive Conditional Branching (if / else if/ else):** A control flow structure used when a variable can exist in more than two mutually exclusive states.
* **Relational Operator (Equality ==):** A comparison operator used in conditional statements to check if two values are identical. It must not be confused with the assignment operator (=), which stores a value.
* **Literal Notation (Quotes):** Strict syntax rules dictating how the compiler interprets raw text data:
    * **Single Quotes (' '):** Used exclusively for a single char (e.g., 'y').
    * **Double Quotes (" "):** Used exclusively for a string of characters (e.g., "yes").
* **Functions (Abstractions):** Self-contained, named blocks of code that acts as "mini-programs" to perform one specific task. By packaging complex logic into a single function, you don't to rewrite the same code over and over. 
* **Function Prototypes:** A forward declaration placed on top of a C file. It informs the compiler of a function's name, return type, and parameters before the actual logic is defined later in the file, preventing compilation errors.
* **Function Anatomy:** The strict blueprint required to define a custom function:
    * **Return Type:** The data type the function sends back when it finishes (e.g., "int", "char", or "void" if it returns nothing).
    * **Parameters:** The variables declared inside the parentheses that acts as placeholders for the data the function needs to do its job.
* **Variable Scope (Pass-by-Value):** The rule dictating that variables only exist within the specific function (or curly braces) when they are declared. When you pass a variable from "main" into another function, C does not send the original variable; it sends a clone (a copy of the value). Modifying the copy inside the function does not alter the original value in "main".
* **Greedy Algorithms:** A problem-solving approach that always takes the best, largest, or most optimal immediate "bite" out of a problem at each step, passing the remaining data down the line until the problem is solved.

## Core Engineering Principles

* **D.R.Y. (Don't Repeat Yourself):** A fundamental software architecture rule. If you are copy and pasting the exact same line of code (like printf multiple times), the design is inefficient and requires a control structure to automate the repetition.
* **Zero-Indexing:** The standard practice in computer science of starting counts at 0 rather than 1.
* **The Three Axes of Code Quality:** The strict evaluation framework used to ensure software is functional, efficient, and maintainable.
    * **Correctness:** Functional accuracy; verifying that the logic strictly produces the expected output for all possible inputs.
    * **Design:** Architectural efficiency; assessing how well the code is structured, ensuring principles like D.R.Y. are utilized.
    * **Style:** Aesthetic readability; ensuring the syntax formatting (like indentation) is consistent and visually pleasing so that other humans can read it.
    






