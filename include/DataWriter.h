#ifndef DATAWRITER_H
#define DATAWRITER_H

#include <string>
#include <fstream>  // Для работы с файловыми потоками

class DataWriter {
public:
    DataWriter(const std::string& filename);
    void writeLine(const std::string& line);
    ~DataWriter();  // Деструктор
private:
    std::ofstream file;  // Поток для записи в файл
};

#endif

