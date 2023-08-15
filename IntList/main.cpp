#include <iostream>
#include <string> // Again, replace with <cstring> if your compiler doesn't recognize <string>
#include "IntList.h"

void initIntListTester();
void addTests(int testNum[]);
void getTests(int testNum[]);
void removeTests(int testNum[]);
void removeAtTests(int testNum[]);
void insertTests(int testNum[]);
void clearTests(int testNum[]);

// Prints test results, don't worry about templates yet ;P
template<typename TGenericObject>
void printResults(TGenericObject expected, TGenericObject actual, 
                   std::string description, int testNum);


// Tester function, run main() and see your results!
int main() {
    // Comment this line and run your own tests once you've passed
    initIntListTester();
}


// Initiates IntList tester
void initIntListTester() {
    const int SINGLE_TEST_NUM = 1;
    int testNum[SINGLE_TEST_NUM];
    testNum[0] = 0;

    addTests(testNum);
    getTests(testNum);
    removeTests(testNum);
    removeAtTests(testNum);
    insertTests(testNum);
    clearTests(testNum);
}

// Runs tests for IntList.add()
void addTests(int testNum[]) {
    IntList list;

    list.add(10);
    list.add(20);
    list.add(30);

    std::string expected = "[10, 20, 30]";
    std::string actual = list.toString();
    std::string description = "add(): Adds [10, 20, 30] to list";
    printResults(expected, actual, description, ++testNum[0]);

    // --------------

    list = IntList(); // Reinitializes to empty list

    list.add(-5);
    list.add(-5);
    list.add(-5);
    list.add(-5);
    list.add(-5);
    list.add(-5);
    list.add(-5);
    list.add(-5);
    list.add(-5);
    list.add(-5);

    expected = "[-5, -5, -5, -5, -5, -5, -5, -5, -5, -5]";
    actual = list.toString();
    description = "add(): Adds -5 ten times to list";
    printResults(expected, actual, description, ++testNum[0]);

    // --------------

    list = IntList();

    const int MAX_ADD = 100;
    expected = "[0"; // WARNING: Not real expected. Gets altered in for loop!!!
    for (int addIndex = 1; addIndex < MAX_ADD; addIndex++) {
        list.add(addIndex);
        expected += ", ";
        expected += std::to_string(addIndex);
    }

    expected += "]";
    actual = list.toString();
    description = "add(): Adds from 0–99 to list";
    printResults(expected, actual, description, ++testNum[0]);

}

// Runs tests for IntList.get()
void getTests(int testNum[]) {
    IntList list;
    list.add(10);
    list.add(20);
    list.add(30);
    list.add(40);
    list.add(50);

    int expected = 30;
    int actual = list.get(2);
    std::string description = "get(): Getting middle value from [10, 20, 30, 40, 50] (30)";
    printResults(expected, actual, description, ++testNum[0]);

    // --------------

    expected = 10;
    actual = list.get(0);
    description = "get(): Getting first value from [10, 20, 30, 40, 50] (10)";
    printResults(expected, actual, description, ++testNum[0]);

    // --------------

    expected = 50;
    actual = list.get(4);
    description = "get(): Getting last value from [10, 20, 30, 40, 50] (50)";
    printResults(expected, actual, description, ++testNum[0]);
}

// Runs tests for IntList.remove()
void removeTests(int testNum[]) {
    IntList list;
    list.add(10);
    list.add(20);
    list.add(30);
    list.add(40);
    list.add(50);

    list.remove();

    std::string expected = "[10, 20, 30, 40]";
    std::string actual = list.toString();
    std::string description = "remove(): Removing from end of list";
    printResults(expected, actual, description, ++testNum[0]);

    // --------------

    list = IntList();

    list.add(10);
    list.remove();

    expected = "[]";
    actual = list.toString();
    description = "remove(): Removing list until list is empty";
    printResults(expected, actual, description, ++testNum[0]);
    
}

// Runs tests for IntList.removeAt()
void removeAtTests(int testNum[]) {
    IntList list;
    list.add(10);
    list.add(20);
    list.add(30);
    list.add(40);
    list.add(50);

    list.removeAt(2);

    std::string expected = "[10, 20, 40, 50]";
    std::string actual = list.toString();
    std::string description = "removeAt(): Removing from middle of list (30)";
    printResults(expected, actual, description, ++testNum[0]);

    // --------------

    list.removeAt(0);

    expected = "[20, 40, 50]";
    actual = list.toString();
    description = "removeAt(): Removing from beginning of list (10)";
    printResults(expected, actual, description, ++testNum[0]);

    // --------------

    list.removeAt(2);

    expected = "[20, 40]";
    actual = list.toString();
    description = "removeAt(): Removing from end of list (50)";
    printResults(expected, actual, description, ++testNum[0]);
}

// Runs tests for IntList.insert()
void insertTests(int testNum[]) {
    IntList list;
    list.add(10);
    list.add(20);
    list.add(30);
    list.add(40);
    list.add(50);

    list.insert(2, 69);

    std::string expected = "[10, 20, 69, 30, 40, 50]";
    std::string actual = list.toString();
    std::string description = "insert(): Inserting 69 from middle of list";
    printResults(expected, actual, description, ++testNum[0]);

    // --------------

    list.insert(5, 420);

    expected = "[10, 20, 69, 30, 40, 50, 420]";
    actual = list.toString();
    description = "insert(): Inserting 420 from end of list";
    printResults(expected, actual, description, ++testNum[0]);

    // --------------

    list = IntList();
    list.insert(0, 10101);

    expected = "[10101]";
    actual = list.toString();
    description = "insert(): Inserting 10101 from empty list";
    printResults(expected, actual, description, ++testNum[0]);
}

// Runs tests for IntList.clear()
void clearTests(int testNum[]) {
    IntList list;
    list.clear();

    std::string expected = "[]";
    std::string actual = list.toString();
    std::string description = "clear(): Clearing from empty list";
    printResults(expected, actual, description, ++testNum[0]);

    // --------------

    list = IntList();

    const int MAX_ADDS = 100;
    for (int addIndex = 0; addIndex < MAX_ADDS; addIndex++) {
        list.add(addIndex);
    }

    list.clear();
    expected = "[]";
    actual = list.toString();
    description = "clear(): Clearing from list with elements 0-99";
    printResults(expected, actual, description, ++testNum[0]);
}

// Prints test results
template<typename TGenericObject> // don't worry about templates yet ;P
void printResults(TGenericObject expected, 
                TGenericObject actual, std::string description, int testNum) {
    std::cout << "Initiating test no. " << testNum << ": " << description << std::endl;

    std::cout << "Expected: " << expected << "\nActual: " << actual << std::endl;
    if (expected == actual) {
        std::cout << "Result: PASSED\n" << std::endl;
    } else {
        std::cout << "Result: FAILED\n" << std::endl;
    }
}