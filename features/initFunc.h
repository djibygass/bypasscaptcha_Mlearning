//
// Created by Djibril on 25/05/2022.
//
//content all the function that assist the MLP at the initialisation
#include <random>
#include "Eigen/Dense"

#ifndef FEATURES_INITFUNC_H
#define FEATURES_INITFUNC_H

//initialize a null matrix
Eigen::MatrixXd create_matrix(int row, int col){
    Eigen::MatrixXd m1(row,col);
    return m1;
}

//give random values to all matrix elems
Eigen::MatrixXd randomize_weights(Eigen::MatrixXd m){
    std::random_device seed;
    std::default_random_engine generator(seed());
    std::uniform_real_distribution<double> distributionDouble(-1.0,1.0);
    //std::cout << distributionDouble(generator);

    for (int i = 0; i < m.size(); ++i){
        m(i) = distributionDouble(generator);
        //std::cout << m(i) << std::endl;
    }
    //std::cout << m << std::endl;
    return m;

}


#endif //FEATURES_INITFUNC_H
