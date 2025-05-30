// Complete Guide to C++ Programming Foundations
// Exercise 08_06
// Queues and Stacks, by Eduardo Corpeño 

#include <iostream>
#include <queue>
#include <stack>

int main(){
    std::queue<std::string> eventQueue;  // FIFO container for game events
    std::stack<std::string> undoStack;   // LIFO container 

    // Adding events to the queue, push adds elements to the back of the queue
    eventQueue.push("Move Forward");
    eventQueue.push("Collect Coin");
    eventQueue.push("Attack Enemy");

    // Processing events in FIFO order
    while (!eventQueue.empty()){
        std::string currentEvent = eventQueue.front(); // Assign element at the front of the queue to currentEvent
        std::cout << "Performing event: " << currentEvent << std::endl; // Print the output
        eventQueue.pop(); // Remove the element at the front of the queue
        undoStack.push(currentEvent);
    }

    std::count << std::endl << std::endl;

    // Processing undo in LIFO order 
    while (!undoStack.empty()){
        std::cout << "Undo action: " << undoStack.top() << std::endl;
        undoStack.pop();
    }


    std::cout << std::endl << std::endl;
    return 0;
}
