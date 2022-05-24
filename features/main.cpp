//
// Created by Djibril on 21/05/2022.
//
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "MyMLP.h"
#include "Eigen/Dense"

void func(int32_t *npl){
    int *arr = npl;
    printf("%d", arr[0]);
    //std::cout << arr;
    //delete arr;
}

float * random_val(int nb){
    //int nb = 5;
    float arr[nb];
    constexpr int FLOAT_MIN = -1;
    constexpr int FLOAT_MAX = 1;


    std::srand(std::time(nullptr));
    for (int i = 0; i < nb; i++){
        //std::setprecision(17);
        arr[i] = FLOAT_MIN + (float)(rand()) / ((float)(RAND_MAX/(FLOAT_MAX - FLOAT_MIN)));
    }
    return arr;
}

int main(){

   /* int *m =  array_weight(1, 3);
    std::cout << m<<std::endl;*/



/*
        double mean = 0.0;
        double std = std::sqrt(2.0 / static_cast<double>(W.size()));
        std::normal_distribution<double> rand_normal(mean, std);
        for (unsigned int j=0; j<W.size(); ++j) {
            W[j] = rand_normal(gen);
        }*/

        //func(m);
/*

        int nb = 5;
        float arr[5];
    constexpr int FLOAT_MIN = -1;
    constexpr int FLOAT_MAX = 1;


    std::srand(std::time(nullptr));
    for (int i = 0; i < nb; i++){
        std::setprecision(17);
        arr[i] = FLOAT_MIN + (float)(rand()) / ((float)(RAND_MAX/(FLOAT_MAX - FLOAT_MIN)));
    }

    std::cout << arr[0] << std::endl;
    std::cout << arr[1] << std::endl;
    std::cout << arr[2] << std::endl;
    std::cout << arr[3] << std::endl;
    std::cout << arr[4] << std::endl;
*/
    //float arry[5];
    //arry = random_val(5);
    //std::cout << random_val(5)[2] << std::endl;
    //std::cout << arry[0] << std::endl;

    int* test = static_cast<int *>(malloc(sizeof(int) * 3));
    test[0] = 3;
    test[1] = 2;
    test[2] = 1;
    func(test);
    delete test;
    return 0;
}


/*
    constexpr int FLOAT_MIN = -1;
    constexpr int FLOAT_MAX = 1;


    std::srand(std::time(nullptr));
    for (int i = 0; i < 5; i++)
        std::cout << std::setprecision(17)
             << FLOAT_MIN + (float)(rand()) / ((float)(RAND_MAX/(FLOAT_MAX - FLOAT_MIN)))
             << std::endl;

             */
