#include <memory>
#include "memoization.h"
#include "constants.h"


auto Memoization::memoArray = std::make_unique<unsigned long long[]>(ITERATIVE_MEMOIZED_ITERATIONS);