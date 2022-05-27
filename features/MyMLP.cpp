//
// Created by Djibril on 26/05/2022.
//

#include "MyMLP.h"
#include "initFunc.h"
#include "iostream"





MyMLP::MyMLP(int32_t  *npl, int32_t  npl_size) {
    this->npl = npl;
    this->npl_size = npl_size;
    this->Weights = Weights_init(npl, npl_size);

}


std::vector<Eigen::MatrixXd> MyMLP::Weights_init(int32_t *npl,int32_t  npl_size){
    std::vector<Eigen::MatrixXd> W;
    if (npl_size == 3){

        Eigen::MatrixXd weight_ih = randomize_weights(create_matrix(npl[0], npl[1]));
        Eigen::MatrixXd weight_ho = randomize_weights(create_matrix(npl[1],npl[2]));

        //Eigen::MatrixXd W[2];
        W.push_back(weight_ih);
        W.push_back(weight_ho);
        //W[0] = weight_ih;
        //std::cout << "ih : "<< W[0] << std::endl;
        //W[1]= weight_ho;
        //std::cout << "Oh : "<< W[1] << std::endl;

    }else if(npl_size == 4){

        Eigen::MatrixXd weight_ih = randomize_weights(create_matrix(npl[0], npl[1]));

        W.push_back(weight_ih);
        int nb_hidden_layers = npl[2];
        //Eigen::MatrixXd W[1+nb_hidden_layers];

        for (int i=1; i<nb_hidden_layers;i++){
            Eigen::MatrixXd weight_h = randomize_weights(create_matrix(npl[1],npl[1]));
            W.push_back(weight_h);
        }
        Eigen::MatrixXd weight_ho = randomize_weights(create_matrix(npl[1],npl[3]));
        W.push_back(weight_ho);
    }else if(npl_size == 2){
        Eigen::MatrixXd weight_io = randomize_weights(create_matrix(npl[0], npl[1]));
        W.push_back(weight_io);
    } else{
        throw std::invalid_argument("receive invalid argument you should send an array of at least 2 elements");
    }
    //std::cout << "HELLLL : "<< W[1] << std::endl;
    return W;
}




float *MyMLP::predict_mlp_model(float *sample_inputs, int32_t num_features, bool is_classification) {

    for(int layer = 0; layer < Weights.size(); layer++ ) {
    ;
    }
    return nullptr;
    }


void MyMLP::train_mlp_model(float *all_samples_inputs, int32_t num_sample, int32_t num_features,
                            float *all_samples_expected_outputs, int32_t num_outputs, bool is_classification,
                            float learning_rate, int32_t nb_iter) {

}

/*MyMLP::~MyMLP(){
    delete npl;
}*/
