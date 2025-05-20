// useful libraries, vector for dynamic arrays and iostream for input/output stream
#include <vector>
#include <iostream>

// using declarations to avoid typing std::
using std::vector;
using std::cout;

// returns the number of numbers that are duplicated
int numberOfDuplicates(const vector<int>&);
// prints out the contents of the vector
void printVector(const vector<int>&);

int main(void) { 
    // create and test example1 vector
    vector<int> example1{1, 1, 1, 1};
    printVector(example1);
    cout << "It has " << numberOfDuplicates(example1) << " duplicate(s)\n";

    // create and test example2 vector
    vector<int> example2{1, 1, 2, 2};
    printVector(example2);
    cout << "It has " << numberOfDuplicates(example2) << " duplicate(s)\n";

    // create and test example3 vector
    vector<int> example3{1, 3, 4, 3, 1, 3, 4, 3};
    printVector(example3);
    cout << "It has " << numberOfDuplicates(example3) << " duplicate(s)\n";

    // create and test example4 vector
    vector<int> example4{1, 2, 3, 4};
    printVector(example4);
    cout << "It has " << numberOfDuplicates(example4) << " duplicate(s)\n";

    // program executed successfully
    return 0;
}
