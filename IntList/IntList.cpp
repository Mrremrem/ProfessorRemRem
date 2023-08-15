#include "IntList.h"

/*
 * Initializes capacity and totalSize.
 * No need to touch this unless it's essential
 */
IntList::IntList() {
    capacity = INITIAL_CAPACITY; // capacity is now 10
    totalSize = 0;
}

IntList::~IntList() {
    // Default deconstructor, change if necessary
}

/*
 * Adds a value to IntList
 * Example: list = [10, 20, 30]
 *          list.add(40)
 *          list = [10, 20, 30, 40]
 * If your container[] is full, make a new array,
 * copy all elements from old container[] to
 * a new container, then set container[] equal
 * to the new container.
 *
 * Precondition: none
 * Postcondition: size() = size() + 1
 */
void IntList::add(int value) {
    // Write your code under this comment

}

/*
 * Gets a value from index in IntList
 * Example: list = [10, 20, 30]
 *          std::cout(list.get(0))
 *          Output: 10
 * Precondition: 0 <= index < size(), 
 *               size() > 0,
 *               throws error otherwise
 * Postcondition: Returns value from index in this IntList
 */
int IntList::get(int index) {
    // Write your code under this comment

    return -1; // Remove this line and return your result
}

/*
 * Returns a string representing the array
 * Example: list = [10, 20, 30]
 *          std::cout(list.toString())
 *          Output: [10, 20, 30]
 * Your job here is to return a string that returns
 * a list of values in IntList enclosed in brackets
 * Precondition: none
 * Postcondition: Returns IntList as a string,
 *                returns [] if empty
 */
std::string IntList::toString() {
    // Write your code under this comment

    return "Update Your toString()!"; // Remove this line and return your result
}

/*
 * Removes a value from the back of IntList
 * Example: list = [10, 20, 30]
 *          list.remove()
 *          list = [10, 20]
 * Precondition: size() > 0, 
 *               throws error otherwise
 * Postcondition: size() = size() - 1
 */
void IntList::remove() {
    // Write your code under this comment

}

/*
 * Removes a value from specified index in IntList
 * Example: list = [10, 20, 30]
 *          list.removeAt(0)
 *          list = [20, 30]
 *          list.removeAt(1)
 *          list = [20]
 * Precondition: size() > 0,
 *               throws error otherwise
 * Postcondition: size() = size() - 1
 */
void IntList::removeAt(int index) {
    // Write your code under this comment

}

/*
 * Inserts an element to index in IntList.
 * Example: list = [10, 20, 30]
 *          list.insert(1, 69)
 *          list = [10, 69, 20, 30]
 * Precondition: 0 <= index < size()
 *               throws error otherwise
 * Postcondition: size() = size() + 1
 */
void IntList::insert(int index, int value) {
    // Write your code under this comment

}

/*
 * Clears whole IntList
 * Example: list = [10, 20, 30]
 *          list.clear()
 *          list = []
 * Precondition: none
 * Postcondition: size() = 0
 */
void IntList::clear() {
    // Write your code under this comment

}

/*
 * Returns # of elements in IntList
 * Example: list = [10, 20, 30]
 *          std::cout(list.size())
 *          Output: 3
 * Precondition: none
 * Postcondition: Returns totalSize
 */
int IntList::size() {
    // Write your code under this comment

    return -1; // Remove this line and return your result
}

/*
 * Helper function for resizing data[]
 * Multiply capacity by RESIZE_MULTIPLYER,
 * then copy old container[] to new container,
 * after that, set the container[] member variable
 * equal to the new container (to resize)
 * Precondition: none
 * Postcondition: capacity = RESIZE_MULTIPLYER * capacity
 */
void IntList::resize() {
    // Write your code under this comment
    
}