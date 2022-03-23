#include <iostream>
#include <chrono>
#include <iomanip>
#include "constants.h"
#include "algorithms.h"
#include "benchmarks.h"

void Benchmarks::benchmarkRecursive() {
    auto start = std::chrono::high_resolution_clock::now();
    unsigned long long result;
    for(int i = 1; i < RECURSIVE_ITERATIONS; i++) { 
        result = Algorithms::fiboRecursive(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    int msElapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    outputStats("Recursive", msElapsed, result, RECURSIVE_ITERATIONS);
}

void Benchmarks::benchmarkIterative() {
    auto start = std::chrono::high_resolution_clock::now();
    unsigned long long result;
    for(int i = 1; i < ITERATIVE_ITERATIONS; i++) { 
        result = Algorithms::fiboIterative(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    int msElapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    outputStats("Iterative", msElapsed, result, ITERATIVE_ITERATIONS);
}

void Benchmarks::benchmarkIterativeMemoized() {
    auto start = std::chrono::high_resolution_clock::now();
    unsigned long long result;
    for(int i = 1; i < ITERATIVE_MEMOIZED_ITERATIONS; i++) { 
        result = Algorithms::fiboIterativeMemoized(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    int msElapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    outputStats("Iterative Memoized", msElapsed, result, ITERATIVE_MEMOIZED_ITERATIONS);
}

void Benchmarks::outputStats(const char* benchmarkName, int msElapsed, unsigned long long result, int iterations) {
    std::cout << std::left << std::setw(20) << benchmarkName << "Elapsed: " << 
        std::setw(7) << msElapsed << "ms\tfinal value: " << std::setw(25) << 
        result << "iterations: " << iterations << std::endl;
}
