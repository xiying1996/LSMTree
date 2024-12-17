// src/main.cpp
#include "LSMTree.h"
#include <iostream>
int main() {
    LSMTree lsm("./db", 2);

    lsm.put("key1", "value1");
    lsm.put("key2", "value2");
    lsm.put("key3", "value3");

    std::cout << lsm.get("key1") << std::endl;  // 应该输出 value1
    std::cout << lsm.get("key2") << std::endl;  // 应该输出 value2
    std::cout << lsm.get("key3") << std::endl;  // 应该输出 value3

    lsm.put("key4", "value4");
    lsm.put("key5", "value5");

    std::cout << lsm.get("key4") << std::endl;  // 应该输出 value4
    std::cout << lsm.get("key5") << std::endl;  // 应该输出 value5

    return 0;
}
