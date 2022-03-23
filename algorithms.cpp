#include "algorithms.h"


unsigned long long Algorithms::fiboRecursive(unsigned long long n) {
    if(n <= 2) {
        return 1;
    }
    return fiboRecursive(n - 2) + fiboRecursive(n - 1);
}

unsigned long long Algorithms::fiboIterative(unsigned long long n) {
    unsigned long long 
        numPrev = 1,
        numCur = 1,
        res = 1;
    for(int i = 2; i < n; i++) {
        res = numPrev + numCur;
        numPrev = numCur;
        numCur = res;
    }
    return res;
}

unsigned long long Algorithms::fiboIterativeMemoized(unsigned long long n) {
    unsigned long long res = 1;
    if(n >= 3) {
        res = Memoization::memoArray[n - 2] + Memoization::memoArray[n - 1];
    }
    Memoization::memoArray[n] = res;
    return res;
}
