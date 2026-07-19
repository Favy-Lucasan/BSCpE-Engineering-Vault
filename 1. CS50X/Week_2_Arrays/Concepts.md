# CS50 Week 2: Arrays

## High-Level Abstractions

* **Memory Allocation:** The process of reserving physical space inside the computer's finite RAM to store data. In higher languages like Python or JavaScript, this process is hidden from us. But in a low-level language like C, we are forced to manage this manually.
* **Memory Sizes:** In higher-level languages like Java, an "int" data type is strictly defined as 4 bytes, no matter what machine we run it on. However, in lower-level languages like C, it depends on the compiler's implementation and the target platform's ABI (Application Binary Interface), which are influenced by the computer architecture (such as 16-bit, 32-bit, or 64-bit systems).
* **Array:** Is a sequence of values of the same data type stored contiguously in memory.
* **Strings:** While higher-level languages have a dedicated string data type, C does not. A string is practically just a sequence of characters, meaning it is architected as an array of char values. The memory size of a string is variable and requires an unknown amount of bytes up front—its total memory footprint depends entirely on the length of the character array.
* **Command-Line Arguments (Standard C CLI Inputs):** In professional software engineering, programs are often designed to accept inputs directly from terminal execution command before the core logic even begins. To capture this data, the standard "int main(void)" function signature is modified to accept two specific parameters: int main(int argc, char *argv[]).
    * **argc (Argument Count):** An integer representing the total number of words/arguments typed in the terminal command. | Standard C Memory Structure: int
    * **argv (Argument Vector):** An array of character pointers (the native C equivalent of strings) containing the actual text of the arguments passed. | Standard C Memory Structure: char *[]
* **Exit Status (Return Codes):** An integer value returned by the "int main" function to the operating system when a program terminates, signaling exactly how the execution concluded.
    * **Success (0):** Returning '0' explicitly tells the operating system that the program executed flawlessly without encountering any errors.
    * **Failure (Non-Zero):** Returning '1' (or any other non-zero integer) signals to the operating system that an error occured. We can assign different non-zero values to different types of errors to make debugging easier.
    * **Status Check (echo $?):** A CLI command used in the terminal immediately after executing a program to print the hidden exit status of that most recently run process.

## String Manipulation and Memory Boundaries
* **Nul Terminator ( \0 ):** Because C does not have a native string data type, the compiler does not inherently know where a string ends in memory. To solve this, C relies on a strict memory boundary called the NUL character ( \0 ). To manually find a string's length, an engineer must loop through the array in RAM until this specific 0-byte is detected.
* **ASCII Mathematics:** Characters in C are essentially just integers mapped to the ASCII standard. Because lowercase and uppercase letters are separated by exactly 32 positions in the ASCII table, we can convert a character to uppercase by subtracting 32 from its integer value.

## Standard Libraries
* **string.h (strlen):** Instead of writing a custom loop to hunt for the \0 terminator, importing <string.h> gives us access to the strlen() function, which calculates and returns the length of a string automatically.
* **ctype.h (toupper):** Instead of manually checking if a character's ASCII value is between 'a' and 'z' and mathematically subtracting 32, <ctype.h> provides toupper(). It securely handles the abstraction by converting only valid lowercase letters and safely ignoring punctuation, numbers, or characters that are already uppercase.
