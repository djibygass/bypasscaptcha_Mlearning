//
// Created by Djibril on 21/05/2022.
//

#ifndef FEATURES_MYMLP_H
#define FEATURES_MYMLP_H


class Cylinder {

    public:

        Cylinder(double base_radius,double height);/*{
            base_radius = 2.0;
            height = 2.0;

        }*/
        double volume(double height);/*{
            return  PI * base_radius * base_radius * height;
        }*/


    ~Cylinder();
};


#endif //FEATURES_MYMLP_H
