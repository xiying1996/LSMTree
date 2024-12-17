// src/LSMTree.cpp
#include "LSMTree.h"

LSMTree::LSMTree(const std::string& db_path, size_t size_threshold)
    : sstable(db_path), memtable_size_threshold(size_threshold) {}

void LSMTree::put(const std::string& key, const std::string& value) {
    memtable.insert(key, value);
    if (memtable.size() > memtable_size_threshold) {
        flush();
    }
}

std::string LSMTree::get(const std::string& key) {
    if (memtable.get(key) != "") {
        return memtable.get(key);
    } else {
        return sstable.read()[key];
    }
}

void LSMTree::flush() {
    sstable.write(memtable.get_data() );
    memtable.clear();
}
