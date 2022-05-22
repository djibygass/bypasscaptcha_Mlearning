//
// Created by Djibril on 21/05/2022.
//

#include "MyMLP.h"
#include "Eigen/Dense"

MyMLP::MyMLP(int32_t *npl, int32_t npl_size) {

}

void MyMLP::train_mlp_model(float *all_samples_inputs, int32_t num_sample, int32_t num_features,
                            float *all_samples_expected_outputs, int32_t num_outputs, bool is_classification,
                            float learning_rate, int32_t nb_iter) {

}

float *MyMLP::predict_mlp_model(float *sample_inputs, int32_t num_features, bool is_classification) {
    return nullptr;
}

MyMLP::~MyMLP() {

}
