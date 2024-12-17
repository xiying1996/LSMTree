// src/Memtable.cpp
#include "Memtable.h"

void Memtable::insert(const std::string& key, const std::string& value) {
    data[key] = value;
}

std::string Memtable::get(const std::string& key) {
    auto it = data.find(key);
    if (it != data.end()) {
        return it->second;
    }
    return "";
}

size_t Memtable::size() const {
    return data.size();
}

void Memtable::clear() {
    data.clear();
}
