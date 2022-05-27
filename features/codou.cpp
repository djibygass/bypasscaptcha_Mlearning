//
// Created by Djibril on 26/05/2022.
//
float *MyMLP::predict_mlp_model(float *sample_inputs, int32_t num_features, bool is_classification) {



/* copier les valeurs dans les X de la couche 0*/





    for(int layer = 1; layer < W.size(); layer++ ){
        for (int j =0 ; j < W[layer].size(); j++){
            float somme =0;
            for (int i =0 ; i < W[layer-1].size(); i++){

                somme+= W[layer][i][j]*X[layer -1][i];

            }

            if (is_classification || layer < W.size()-1)
            {

                X[layer][j]=tanh(somme)
            }

            else
            {
                X=somme

            }


        }

        return X[W.size()-1];





///BACKpropagation



        void MyMLP::train_mlp_model(float *all_samples_inputs,
                                    int32_t num_sample,
                                    int32_t num_features,
                                    float *all_samples_expected_outputs,
                                    int32_t num_outputs,
                                    bool is_classification,
                                    float learning_rate,
                                    int32_t nb_iter ) {

            // prendre un exemple ettiquété au hasard au niveau des inputs

            for (int i =0 ; i <nb_iter; i++) // normalement les inputs

            {

                int k = rand() % sample_inputs.rows();
                sample_inputs= all_simples_expected_inputs[k];
                sample_outputs=all_simples_expected_output[k];

            }


            // Pour les j de la dernières couche

//toute la couche
            for(int layer= W.size()-1 ; layer >=0 ; layer--)
            {
                if(layer==W.size()-1){
                    if(is_classification){
                        delta[layer] *= (1-(pow(X[layer][j])))
                    }
                    else
                    {
                        delta[layer]=X[layer]-Y[j]
                    }

                }
            }


//Pour tous les neurones de la dernière couche

            for(int layer = 1; layer < W.size(); layer++ ){
                ()
                for (int j =0 ; j < W[layer].size(); j++){

                    float somme =0;

                    for (int i =0 ; i < W[layer-1].size(); i++){

                        somme+= W[layer][i][j]*Delta[layer][i];
                        somme *= 1 -X[layer-1[i]].pow();
                        Delta[layer-1][i]=somme;

                    }



//mise à jour des poids


                    for(int layer = 1 ; W.size() ; layer++){
                        for(int i =1 ; W[layer - 1] ; i++){
                            for(int j= 1 ; j<W[layer].size(); i++){
                                W.[layer][i][j] -= learning_rate * X[layer-1][i] * delta[layer][j]
                            }
                        }
                    }
                }




            }