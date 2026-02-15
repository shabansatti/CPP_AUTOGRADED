
/*
Do **not** modify:
- Any files in the `tests/` directory
- Function signatures
- Header files
*/

/* Task Description
You are given a function. Write a for loop in it that sums the numbers upto n.
*/

#include <iostream>
using namespace std;

int sumUpTo(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}