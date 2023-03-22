#include <iostream>
#include "Student.h"
using namespace std;



int main() {
    int *results = new int[]{95,85,75};
    Student john("D00124569","John",
                 3,
                 results);
    cout << john;

    delete[] results;
    return 0;
}
