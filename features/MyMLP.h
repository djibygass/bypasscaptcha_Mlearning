//
// Created by Djibril on 21/05/2022.
//

#ifndef BYPASS_CAPTCHA_MYMLP_H
#define BYPASS_CAPTCHA_MYMLP_H
#include "Eigen/Dense"
#include <cstdint>
#include <cstdlib>
#include <random>

class MyMLP {

public:
    MyMLP(int32_t *npl, int32_t npl_size);

    float *wheight_init(int32_t *npl);

    void train_mlp_model(float *all_samples_inputs,
                         int32_t num_sample,
                         int32_t num_features,
                         float *all_samples_expected_outputs,
                         int32_t num_outputs,
                         bool is_classification,
                         float learning_rate,
                         int32_t nb_iter);

    float *predict_mlp_model(float *sample_inputs,
                             int32_t num_features,
                             bool is_classification);

    ~MyMLP();

private:
    int32_t *npl;
    int32_t npl_size;

};

Eigen::MatrixXd array_weight(int row, int col){
    Eigen::MatrixXd m1(row,col);
    return m1;
}










#endif //BYPASS_CAPTCHA_MYMLP_H
