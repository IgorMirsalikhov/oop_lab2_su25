// useful libraries, vector for dynamic arrays and iostream for input/output stream
#include <vector>
#include <iostream>

// using declarations to avoid typing std::
using std::vector;
using std::cout;

// returns true if a given int vector has an element that repeats
bool hasDuplicate(const vector<int>&);

int main(void){
    // create and test example1 vector
    vector<int> example1{1, 2, 3, 1};
    if (hasDuplicate(example1)) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }

    // create and test example2 vector
    vector<int> example2{1, 2, 3, 4};
    if (hasDuplicate(example2)) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }

    // create and test example3 vector
    vector<int> example3{1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    if (hasDuplicate(example3)) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }

    vector<int> example4{1, 0, -100, 3, 5, 7, 8, 2, 4, 2};
    if (hasDuplicate(example4)) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }

    // program executed successfully
    return 0;
}
