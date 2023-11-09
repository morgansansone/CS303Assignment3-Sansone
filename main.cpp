#include <iostream>
#include "ExpressionManager.h"
#include "Queue.h"

int main() {
    // Testing ExpressionManager class
    ExpressionManager expressionManager;
    std::string infixExpression;
    std::cout << "Enter an infix expression: ";
    std::cin >> infixExpression;

    // Check if the input infix expression has balanced parentheses using ExpressionManager class
    if (expressionManager.isBalanced(infixExpression)) {
        // If the expression is balanced, convert it to postfix notation
        std::string postfixExpression = expressionManager.infixToPostfix(infixExpression);
        std::cout << "Postfix Expression: " << postfixExpression << std::endl;
    } else {
        // If the expression is not balanced, display an error message
        std::cout << "Invalid expression. Unbalanced parentheses detected.\n";
    }

    // Testing Queue class
    Queue queue;
    queue.enqueue(1); // Enqueue element 1 into the queue
    queue.enqueue(2); // Enqueue element 2 into the queue
    queue.enqueue(3); // Enqueue element 3 into the queue

    std::cout << "Front element: " << queue.peek() << std::endl; // Display the front element of the queue
    std::cout << "Dequeuing: " << queue.dequeue() << std::endl; // Dequeue an element from the queue
    std::cout << "Front element after dequeue: " << queue.peek() << std::endl; // Display the front element after dequeue
    std::cout << "Is queue empty? " << (queue.isEmpty() ? "Yes" : "No") << std::endl; // Check if the queue is empty
    std::cout << "Queue size: " << queue.getSize() << std::endl; // Display the size of the queue

    return 0;
}
