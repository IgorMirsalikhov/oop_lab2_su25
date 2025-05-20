// useful libraries, vector for dynamic arrays and iostream for input/output stream
#include <iostream>

void setDeepValue(int ***p, int value);

int main(void) { 
    int x = 0;
    int *p1 = &x;
    int **p2 = &p1;
    int ***p3 = &p2;
    setDeepValue(p3, 56);

    std::cout << x;

    // program executed successfully
    return 0;
}
