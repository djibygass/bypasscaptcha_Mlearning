//
// Created by Djibril on 24/05/2022.
//

/*float * random_val(int nb){
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
}*/


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


//randomize_weights();

/* Eigen::MatrixXd arr = randomize_weights(array_weight(2, 3));
 std::cout << arr <<std::endl;*/

//std::cout << arr << std::endl;
//std::cout << arr.size()-1;

/*Eigen::MatrixXd arr(2, 3);
arr<<1,2,3,
    4,5,6;
std::cout << arr(0,1);*/



/*std::vector<Eigen::MatrixXd> func(int32_t *npl, int32_t npl_size){//[2,3,1] , 3
    std::vector<Eigen::MatrixXd> W;
    if (npl_size == 3){

        Eigen::MatrixXd weight_ih = randomize_weights(create_matrix(npl[0], npl[1]));
        Eigen::MatrixXd weight_ho = randomize_weights(create_matrix(npl[1],npl[2]));

        //Eigen::MatrixXd W[2];
        W.push_back(weight_ih);
        W.push_back(weight_ho);
        //W[0] = weight_ih;
        std::cout << "ih : "<< W[0] << std::endl;
        //W[1]= weight_ho;
        std::cout << "Oh : "<< W[1] << std::endl;

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
    return W;
}*/
