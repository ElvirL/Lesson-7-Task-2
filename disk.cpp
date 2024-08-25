#include "ram.h"
#include <fstream>
#include <iostream>

void save(){
    std::ofstream file("data.txt", std::ios::binary);
    if (file.is_open()){
        file.write((char*) buffer, sizeof(buffer)*8);
    }
    else {
        std::cout << "Файл не открыт" << std::endl;
    }
    file.close();
}

void load(){
    std::ifstream file("data.txt", std::ios::binary);
    if (file.is_open()){
        file.read((char*) buffer, sizeof(buffer)*8);
    }
    else {
        std::cout << "Файл не открыт" << std::endl;
    }
}