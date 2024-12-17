// include/SSTable.h
#ifndef SSTABLE_H
#define SSTABLE_H
#include <map>
#include <string>

class SSTable {
public:
    SSTable(const std::string& path);
    void write(const std::map<std::string, std::string>& data);
    std::map<std::string, std::string> read();

private:
    std::string file_path;
};

#endif // SSTABLE_H
