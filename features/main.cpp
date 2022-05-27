//
// Created by Djibril on 21/05/2022.
//
#include "MyMLP.h"
#include "iostream"
void generate_biais(int nb_neur_of_the_next_layer){
;
}

void input_flat(float *sample_inputs, int32_t num_features){
    Eigen::MatrixXd inputs = reinterpret_cast<Eigen::Matrix<double, -1, -1, 0> &&>(sample_inputs);

}


int main(){
    int* test = static_cast<int *>(malloc(sizeof(int) * 3));
    test[0] = 2;
    test[1] = 3;
    test[2] = 1;
    // test[3] = 1;

    MyMLP nn{test,3};
    std::vector<Eigen::MatrixXd> m = nn.Weights;


    std::cout << "1)" << nn.Weights[0] << std::endl;
    std::cout << "####################"<< std::endl;
    std::cout << "2)"<< nn.Weights[1] << std::endl;
    std::cout << "####################"<< std::endl;

    return 0;
}
//pour chaque
//for(int i = 0; i< num_features;i++){

//}
// s = somme W*input+biais
//out = tanh(s)
// out put-> next layer jusqu'au dernier

/*

    int* test = static_cast<int *>(malloc(sizeof(int) * 3));
    test[0] = 2;
    test[1] = 3;
    test[2] = 1;
   // test[3] = 1;

    MyMLP nn{test,3};
    std::vector<Eigen::MatrixXd> m = nn.Weights;


    std::cout << "1)" << nn.Weights[0] << std::endl;
    std::cout << "####################"<< std::endl;
    std::cout << "2)"<< nn.Weights[1] << std::endl;
    std::cout << "####################"<< std::endl;
    //std::cout << "3)" << nn.Weights[2] << std::endl;

    return 0;


    std::cout << "####################"<< std::endl;
    std::cout << "4)" << nn.Weights[3] << std::endl;*//*

    delete test;*/