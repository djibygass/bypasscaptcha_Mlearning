//
// Created by Djibril on 21/05/2022.
//

#ifndef BYPASS_CAPTCHA_MYMLP_H
#define BYPASS_CAPTCHA_MYMLP_H

#include <cstdint>
#include <cstdlib>
#include "Eigen/Dense"
#include <vector>


class MyMLP {

public:

    MyMLP() = default;
    MyMLP(int *npl, int npl_size);

    std::vector<Eigen::MatrixXd> Weights_init(int *npl,int npl_size);

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


    std::vector<Eigen::MatrixXd> Weights;


};






#endif //BYPASS_CAPTCHA_MYMLP_H
