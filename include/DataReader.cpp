#include "DataReader.h"
#include <fstream>  // Для работы с файлами
#include <iostream> // Для работы с std::cerr

DataReader::DataReader(const std::string& filename) {
    file.open(filename);  // Открытие файла для чтения
    if (!file.is_open()) {
        std::cerr << "Failed to open file!" << std::endl;
    }
}

std::string DataReader::readNextLine() {
    std::string line;
    if (std::getline(file, line)) {
        return line;  // Возвращаем строку
    }
    return "";  // Если достигнут конец файла
}

bool DataReader::eof() const {
    return file.eof();  // Проверяем, достигнут ли конец файла
}

DataReader::~DataReader() {
    if (file.is_open()) {
        file.close();  // Закрытие файла
    }
}

