#include <iostream>
#include <string> // Again, replace with <cstring> if your compiler doesn't recognize <string>
#include "IntList.h"

void initIntListTester();
void addTests(int testNum[]);

// Prints test results, don't worry about templates yet ;P
template<typename TGenericObject>
void printResults(TGenericObject expected, 
                    TGenericObject actual, std::string description, int testNum);

// Tester function, 
int main() {
    // Uncomment and run your own tests once you've passed all tests
    initIntListTester();
}


// Initiates IntList tester
void initIntListTester() {
    const int SINGLE_TEST_NUM = 1;
    int testNum[SINGLE_TEST_NUM];

    addTests(testNum);
}

// Runs tests for IntList.add()
void addTests(int testNum[]) {
    IntList list;

    list.add(10);
    list.add(20);
    list.add(30);

    std::string expected = "[10, 20, 30]";
    std::string actual = list.toString();
    std::string description = "Adds [10, 20, 30] to list";
    printResults(expected, actual, description, ++testNum[0]);

    // ------------------------ //

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
    description = "Adds -5 ten times to list";
    printResults(expected, actual, description, ++testNum[0]);

    // ------------------------ //

    list = IntList();

    const int MAX_ADD = 100;
    expected = "[0"; // WARNING: Not real expected. Gets altered in for loop!!!
    for (int addIndex = 0; addIndex < MAX_ADD; addIndex++) {
        list.add(addIndex);
        expected += ", ";
        expected += addIndex;
    }

    expected += "]";
    actual = list.toString();
    description = "Adds from 0–99 to list";
    printResults(expected, actual, description, ++testNum[0]);

}

// Prints test results
template<typename TGenericObject> // don't worry about templates yet ;P
void printResults(TGenericObject expected, 
                TGenericObject actual, std::string description, int testNum) {
    std::cout << "Initiating test no. " << testNum << ": " << description << std::endl;

    std::cout << "Expected: " << expected << "\n Actual: " << actual << std::endl;
    if (expected == actual) {
        std::cout << "Result: PASSED\n" << std::endl;
    } else {
        std::cout << "Result: FAILED\n" << std::endl;
    }
}