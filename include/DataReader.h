#ifndef DATAREADER_H
#define DATAREADER_H

#include <string>
#include <fstream>  // Для работы с файловыми потоками

class DataReader {
public:
    DataReader(const std::string& filename);
    std::string readNextLine();
    bool eof() const;
    ~DataReader();  // Деструктор
private:
    std::ifstream file;  // Поток для чтения из файла
};

#endif

