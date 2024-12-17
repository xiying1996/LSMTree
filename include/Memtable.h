// include/Memtable.h
#ifndef MEMTABLE_H
#define MEMTABLE_H

#include <map>
#include <string>

class Memtable {
public:
    void insert(const std::string& key, const std::string& value);
    std::string get(const std::string& key);
    size_t size() const;
    void clear();
    const std::map<std::string, std::string>& get_data() const { return data; }
private:
    std::map<std::string, std::string> data;
};

#endif // MEMTABLE_H
