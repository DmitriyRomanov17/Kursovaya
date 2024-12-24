#include "DataWriter.h"
#include <fstream>  // Для работы с файлами
#include <iostream> // Для работы с std::cerr
#include <ostream>  // Для std::endl

DataWriter::DataWriter(const std::string& filename) {
    file.open(filename, std::ios::out | std::ios::app);  // Открытие файла для записи
    if (!file.is_open()) {
        std::cerr << "Failed to open file!" << std::endl;
    }
}

void DataWriter::writeLine(const std::string& line) {
    if (file.is_open()) {
        file << line << std::endl;  // Запись строки в файл с новой строкой
    } else {
        std::cerr << "Failed to open file!" << std::endl;
    }
}

DataWriter::~DataWriter() {
    if (file.is_open()) {
        file.close();  // Закрытие файла
    }
}

