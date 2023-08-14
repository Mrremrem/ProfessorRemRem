/*
 * This CodeCamp is made by Remzy!
 * The purpose of this assignment is to understand
 * how dynamic arrays work. You will be writing your
 * very first list data structure (or at least I believe
 * you are), and will eventually make a real vector-like
 * class. For now, this data structure will work with ints.
 * Also, please follow me on github.com/Mrremrem :)
 */

#ifndef CODECAMP_H
#define CODECAMP_H

#include <string> // Change to <cstring> if your compiler doesn't recognize <string>

/*
 * This class will act as a dynamic array for ints. 
 * What do I mean by dynamic array? Unlike 
 * traditional arrays such as 'int matrix[][]' or
 * 'int array[]', a dynamic array will automatically
 * resize when it gets full. Your job is to use
 * traditional arrays to achieve an array that can
 * store integers with no limit in terms of size.
 * Remember: Lists start at index 0!!!
 * 
 * A list of functions you need to write:
 * add()
 * get()
 * toString()
 * remove()
 * removeAt()
 * size()
 * insert()
 * clear()
 * resize()
 * 
 * Unless you're going to write helper methods (which I strongly
 * encourage you to), you don't need to touch this file. If you
 * do write helper methods, please make them private. You will
 * begin writing in IntList.cpp and writing your own tests in
 * main.cpp
 * 
 * NOTE: Please, write toString() first before you run my tests
 * Otherwise, you will fail all tests!!! (Make sure it's written
 * correctly too, contact me if you need help!!!)
 */
class IntList {
public:
    IntList();
    ~IntList();

    void add(int value); // Adds value to end of data[]

    int get(int index); // Gets value from specified index

    std::string toString(); // Returns a string representing the array

    void remove(); // Removes value from end of data[]
    void removeAt(int index); // Removes value from specified index

    void insert(int index, int value); // Inserts value at target index 

    void clear(); // Clears array, totalSize = 0

    int size(); // Returns size of data


private:
    /*
     * Also, if you don't know what static 
     * means, it's okay. You don't have to worry 
     * about it for now. Just know that this is a 
     * class constant. Leave INITIAL_CAPACITY unchanged.
    */ 
    static const int INITIAL_CAPACITY = 10;  // Initial capacity of the array
    static const int RESIZE_MULTIPLYER = 2; // Multiplier for capacity resize
    int container[INITIAL_CAPACITY]; // Array where the data (your ints) will be stored
    int capacity; // Max # of elements that container[] can hold before it needs to be resized

    /* 
     * Total # of elements inside container[]. 
     * Update every time you add, insert, 
     * or remove elements from your IntList
     */
    int totalSize; 

    void resize(); // Resizes container[]
};


#endif // CODECAMP_H