#include <cstdint>
#include "MyMLP.h"

#if WIN32
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT
#endif

extern "C" {
DLLEXPORT MyMLP *create_mlp_model(int32_t *npl, int32_t npl_size) {
    return new MyMLP(npl, npl_size);
}

DLLEXPORT  void train_mlp_model(
        MyMLP *model, float *all_samples_inputs,
        int32_t num_sample,
        int32_t num_features,
        float *all_samples_expected_outputs,
        int32_t num_outputs,
        int32_t is_classification,
        float learning_rate,
        int32_t nb_iter) {
    model->train_mlp_model(all_samples_inputs, num_sample, num_features, all_samples_expected_outputs,
                           num_outputs, is_classification, learning_rate, nb_iter);
}

DLLEXPORT     float *predict_mlp_model(
        MyMLP *model, float *sample_inputs,
        int32_t num_features,
        bool is_classification) {
    return model->predict_mlp_model(sample_inputs, num_features, is_classification);
}

DLLEXPORT void destroy_mlp_model(MyMLP *model) {
    delete model;
}
}



extern "C" {
DLLEXPORT int32_t add(int32_t a, int32_t b) {
    return a + b;
}


DLLEXPORT int32_t sum_array_elements(int32_t *arr, int32_t arr_size) {
    int32_t total = 0;
    for (auto i = 0; i < arr_size; i++) {
        total += arr[i];
    }
    return total;
}


DLLEXPORT int32_t *create_some_array() {
    auto arr = new int32_t[5];

    for (auto i = 0; i < 5; i++) {
        arr[i] = i;
    }

    return arr;
}

DLLEXPORT void destroy_some_array(int32_t *arr, int _arr_size) {
    delete[] arr;
}


}