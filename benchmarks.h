class Benchmarks {
public:
    static void benchmarkRecursive();
    static void benchmarkIterative();
    static void benchmarkIterativeMemoized();

private:
    static void outputStats(const char* benchmarkName, int msElapsed, unsigned long long result, int iterations);
};