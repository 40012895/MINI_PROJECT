#ifndef CROP_PRODUCTION_H_INCLUDED
#define CROP_PRODUCTION_H_INCLUDED
#include<string>
#include<cstdint>

using namespace std;
class CropProduction
{
    string statename;
    string district;
    int crop_year;
    string season;
    string crop;
    double area;
    double production;

public:
    CropProduction();
    CropProduction(string,string,int,string,string,double,double);
    virtual void costestimation()=0;
    string getName();
    string getDistrict();
    int getCropYear();
    string getSeason();
    string getCrop();
    double getArea();
    double getProduction();

};

#endif // CROP_PRODUCTION_H_INCLUDED
