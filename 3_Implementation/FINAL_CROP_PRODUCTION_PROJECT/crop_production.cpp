#include "crop_production.h"
#include <iostream>
using namespace std;

CropProduction::CropProduction():
    statename{""},district{""},crop_year{0},season{""},crop{""},area{0},production{0}{}

CropProduction::CropProduction(string sn,string dis,int cy,string ses,string cro,double are,double prod):
    statename{sn},district{dis},crop_year{cy},season{ses},crop{cro},area{are},production{prod}{}

string CropProduction::getName(){return statename;}

string CropProduction::getDistrict(){ return district;}

int CropProduction::getCropYear(){return crop_year; }

string CropProduction::getSeason(){return season; }

string CropProduction::getCrop(){ return crop; }

double CropProduction::getArea(){ return area; }

double CropProduction::getProduction(){ return production; }


