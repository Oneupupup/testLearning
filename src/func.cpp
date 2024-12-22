#include "func.hpp"
#include "robin_hood.h"

func::func() {
    data1 = 1;
}

func::~func() {
    data1 = 0;
}

int func::get_data1() const {
    return data1;
}

void func::set_data1(int data) {
    data1 = data;
}

// 示例：在 func 类中使用 robin_hood::unordered_map
void func::example_robin_hood_usage() {
    robin_hood::unordered_map<int, std::string> map;
    map[1] = "one";
    map[2] = "two";

    for (const auto& kv : map) {
        std::cout << kv.first << ": " << kv.second << std::endl;
    }
}

void func::example_std_map_usage() {
    std::map<int, std::string> map;
    map[1] = "one";
    map[2] = "two";

    for (const auto& kv : map) {
        std::cout << kv.first << ": " << kv.second << std::endl;
    }
}

void func::test_robin_hood() {
    auto start = std::chrono::high_resolution_clock::now();

    robin_hood::unordered_map<int, int> map;
    for (int i = 0; i < 100000000; i++) {
        map[i] = i;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start;
    std::cout << "robin_hood::unordered_map: " << diff.count() << " s" << std::endl;
}

void func::test_std_map() {
    auto start = std::chrono::high_resolution_clock::now();

    std::map<int, int> map;
    for (int i = 0; i < 100000000; i++) {
        map[i] = i;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start;
    std::cout << "std::map: " << diff.count() << " s" << std::endl;
}