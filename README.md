# CS303Assignment3-Sansone

Expression Manager and Queue Implementation

This repository contains C++ code for an Expression Manager that performs operations such as balanced parentheses check and infix to postfix conversion, using stacks. It also includes an implementation of a queue with basic operations.

How to Run
Clone the Repository:

bash
Copy code
git clone <repository-url>
Compile the Code:

Navigate to the project directory containing the source files.
Compile the code using a C++ compiler. For example, using g++:
css
Copy code
g++ main.cpp ExpressionManager.cpp Queue.cpp -o main
Run the Executable:

bash
Copy code
./main

1. Balanced Parentheses Check:
Input: Ask the user to enter an expression containing parentheses, curly braces, and square brackets.
Purpose: This scenario is used to test the program's ability to check if the input expression has balanced parentheses, curly braces, and square brackets.

Instructions:
Example Input 1 (Balanced): ((a + b) * (c - d))
Expected Output: The expression has balanced parentheses.

Example Input 2 (Balanced): {[()]}
Expected Output: The expression has balanced parentheses, curly braces, and square brackets.

Example Input 3 (Unbalanced): ((2 + 3) * (7 - 4)
Expected Output: The expression has unbalanced parentheses.


2. Unbalanced Parentheses Check:
Input: Ask the user to enter an expression containing unbalanced parentheses, curly braces, or square brackets.
Purpose: This scenario is used to test the program's ability to identify unbalanced parentheses, curly braces, or square brackets.

Instructions:

Example Input 1 (Unbalanced): ((a + b) * (c - d)
Expected Output: The expression has unbalanced parentheses.

Example Input 2 (Unbalanced): [{(})]
Expected Output: The expression has unbalanced curly braces.

Example Input 3 (Unbalanced): )(2 + 3) * (7 - 4)
Expected Output: The expression has unbalanced parentheses.


3. Infix to Postfix Conversion:
Input: Ask the user to enter a valid infix expression.
Purpose: This scenario is used to test the program's ability to convert a valid infix expression to postfix notation.
Instructions:

Example Input 1: 3 + 4 * 2 / (1 - 5)^2
Expected Output: 3 4 2 * 1 5 - 2 ^ / +


5. Queue Operations:
Input: Perform enqueue and dequeue operations on a queue.
Purpose: This scenario is used to test the basic queue operations.

Instructions:

Example Input 1 (Enqueue): Enqueue 1, 2, 3
Expected Output: Queue contains elements: 1, 2, 3

Example Input 2 (Enqueue and Dequeue): Enqueue 10, 20, 30, 40
Expected Output:
Front element: 10
Dequeue: 10
Front element after dequeue: 20
Is queue empty? No
Queue size: 3


Screenshots

Balanced Parentheses Check
![Screen Shot 2023-11-09 at 2 46 59 PM](https://github.com/morgansansone/CS303Assignment3-Sansone/assets/113535872/f9ebfd83-0c8f-4f0b-8989-1cee589fcac6)
![Screen Shot 2023-11-09 at 2 47 28 PM](https://github.com/morgansansone/CS303Assignment3-Sansone/assets/113535872/d5669064-1ce9-40ed-a1ab-773b10445a4c)




Unbalanced Parentheses Check
![Screen Shot 2023-11-09 at 2 48 45 PM](https://github.com/morgansansone/CS303Assignment3-Sansone/assets/113535872/c3a52e6f-c137-44b8-86f0-467378958052)
![Screen Shot 2023-11-09 at 2 49 11 PM](https://github.com/morgansansone/CS303Assignment3-Sansone/assets/113535872/89f5d271-4fcb-45d6-9be4-c550daeffe2a)




Infix to Postfix Conversion
![Screen Shot 2023-11-09 at 2 50 16 PM](https://github.com/morgansansone/CS303Assignment3-Sansone/assets/113535872/e6be8e49-f540-4177-82f2-01bb3a2bddf3)
![Screen Shot 2023-11-09 at 2 50 44 PM](https://github.com/morgansansone/CS303Assignment3-Sansone/assets/113535872/f1d1ab65-7a98-4939-a8e7-eeaaa16c980e)




Queue Operations

Enqueue
![Screen Shot 2023-11-09 at 2 51 25 PM](https://github.com/morgansansone/CS303Assignment3-Sansone/assets/113535872/6409ddd2-80b3-4259-8cc5-daf29405856d)
![Screen Shot 2023-11-09 at 2 51 49 PM](https://github.com/morgansansone/CS303Assignment3-Sansone/assets/113535872/e2674e8c-8f65-490c-991f-4b4a2424246b)


Dequeue
![Screen Shot 2023-11-09 at 2 52 24 PM](https://github.com/morgansansone/CS303Assignment3-Sansone/assets/113535872/81b5c731-c53f-4e91-93dd-9ac764bf092d)
![Screen Shot 2023-11-09 at 2 52 49 PM](https://github.com/morgansansone/CS303Assignment3-Sansone/assets/113535872/e98391b9-b70f-4398-b23f-c315a0a0ed91)


Project Overview

Expression Manager

Balanced Parentheses Check:
The ExpressionManager class checks if the input infix expression has balanced parentheses and brackets.

Infix to Postfix Conversion:
The ExpressionManager class also converts a valid infix expression to postfix notation using the Shunting Yard algorithm.

Queue Implementation

The Queue class provides basic queue operations:

Enqueue: Inserts a new element at the rear of the queue.
Dequeue: Removes the front element of the queue and returns it.
Peek: Returns the front element present in the queue without removing it.
isEmpty: Checks if the queue is empty.
getSize: Returns the total number of elements present in the queue.

