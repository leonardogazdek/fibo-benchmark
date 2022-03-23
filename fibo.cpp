#include "constants.h"
#include "benchmarks.h"

int main() {
    Benchmarks::benchmarkIterative();
    Benchmarks::benchmarkIterativeMemoized();
    Benchmarks::benchmarkRecursive();
    return 0;
}
