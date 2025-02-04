#include "nanobench.h"

#include <atomic>

// https://en.algorithmica.org/hpc/data-structures/binary-search/

int main() {
    int y = 0;
    std::atomic<int> x(0);
    ankerl::nanobench::Bench().run("compare_exchange_strong", [&] {
        x.compare_exchange_strong(y, 0);
        });
}