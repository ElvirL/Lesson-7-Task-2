
#include "gpu.cpp"

void compute(int n[8]){
    int sum = 0;
    for (int i=0; i<8; ++i){
        sum+=n[i];
    } 
    print(sum);
}