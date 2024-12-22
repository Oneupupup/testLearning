// File: func.hpp
#pragma once

#include <iostream>
#include <map>
#include <chrono>
#include "robin_hood.h"

class func {
public:
    func();
    ~func();

    int get_data1() const;
    void set_data1(int data);

    // 声明使用 robin_hood 的示例方法
    void example_robin_hood_usage();
    void example_std_map_usage();

    //性能测试
    void test_robin_hood();
    void test_std_map();

private:
    int data1;
};