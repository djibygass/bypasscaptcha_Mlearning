//
// Created by Djibril on 21/05/2022.
//
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "MyMLP.h"
#include "initFunc.h"
#include "Eigen/Dense"



void func(int32_t *npl, int32_t npl_size){
    if (npl_size == 3)
        ;
    for (int i = 0; i < npl_size; ++i){
        //m(i) = npl[i];
        //std::cout << m(i) << std::endl;
    }

}

int main(){

    int* test = static_cast<int *>(malloc(sizeof(int) * 3));
    test[0] = 2;
    test[1] = 3;
    test[2] = 1;
    func(test,3);
    delete test;
    return 0;
}


