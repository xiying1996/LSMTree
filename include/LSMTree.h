// include/LSMTree.h
#ifndef LSMTREE_H
#define LSMTREE_H

#include "Memtable.h"
#include "SSTable.h"

class LSMTree {
public:
    LSMTree(const std::string& db_path, size_t size_threshold = 1000);
    void put(const std::string& key, const std::string& value);
    std::string get(const std::string& key);
    void flush();

private:
    Memtable memtable;
    SSTable sstable;
    size_t memtable_size_threshold;
};

#endif // LSMTREE_H
