#include <random>

namespace em
{
    template <typename ContainerT, typename T>
    void generate_uniformly_distributed_random_numbers(ContainerT& container, T min, T max, std::size_t count)
    {
        std::random_device               rd;
        std::mt19937                     gen(rd());
        std::uniform_real_distribution<T> dis(min, max);
        container.resize(count);
        for (auto& element : container)
        {
            element = dis(gen);
        }
    }
}