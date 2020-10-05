#ifndef CROPS_H_INCLUDED
#define CROPS_H_INCLUDED
using namespace std;
#include<iostream>
#include<string>
#include<cstdint>
#include "crop_production.h"

class Crop:public CropProduction
{
    double cost_esti;
public:
    Crop();
    Crop(string,string,int,string,string,double,double);
    void costestimation() override;
    };


#endif // CROPS_H_INCLUDED
