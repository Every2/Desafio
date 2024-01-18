#include <iostream>
#include <array>

template<typename T, std::size_t N>
int solution(std::array<T, N> a, std::array<T, N> b) {
    int min_distance{abs(a.at(0) - b.at(0))};
    for (T x: a) {
        for (T y: b) {
            int distance{abs(x - y)};
            if (distance < min_distance) {
                min_distance = distance;
            }
        }
    }
    return min_distance;
}

int main() {
    std::array<int, 10>  a{70, 25, 38, 1, 51, 62, 777, 98, 19, 180};
    std::array<int, 10>  c{221, 232, 523, 924, 725, 826, 127, 28, 329, 30};
    std::cout << solution(a, c);
}
