
#include "ram.h"
#include "kbd.cpp"
#include "cpu.cpp"

void input(){
    for (int i=0; i<8; ++i){
        buffer[i] = read();
    }
}

void display(){
    for (int i=0; i<8; ++i){
        std::cout << buffer[i] << " " << std::endl;
    }
}

void sum(){
    compute(buffer);
}
