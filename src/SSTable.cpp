// src/SSTable.cpp
#include "SSTable.h"
#include <fstream>

SSTable::SSTable(const std::string& path) : file_path(path) {}

void SSTable::write(const std::map<std::string, std::string>& data) {
    std::ofstream file(file_path, std::ios::app);
    for (const auto& pair : data) {
        file << pair.first << ":" << pair.second << "\n";
    }
    file.close();
}

std::map<std::string, std::string> SSTable::read() {
    std::map<std::string, std::string> data;
    std::ifstream file(file_path);
    std::string line;
    while (std::getline(file, line)) {
        size_t pos = line.find(':');
        if (pos != std::string::npos) {
            std::string key = line.substr(0, pos);
            std::string value = line.substr(pos + 1);
            data[key] = value;
        }
    }
    file.close();
    return data;
}
