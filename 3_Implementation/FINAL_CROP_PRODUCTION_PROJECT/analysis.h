#ifndef ANALYSIS_H_INCLUDED
#define ANALYSIS_H_INCLUDED

//#include"crops.h"
//#include "crop_production.h"
using namespace std;

#include <iostream>
#include <list>
#include <iterator>
#include <vector>
#include<list>

class Analysis
{
    list<Crop> crp;

public:

   void addEachrow(string sn,string dis,int cy,string ses,string cro,double are,double prod);
   string findStateusingProduction(double);
   void stateswithkharif();
   void removeProduction(double);
   Crop* findProductionById(double);
   int countAll();
   int countofstateswithpotato();
    string Stateswithminarea();
    string MaxproductionofDistrict();
};

#endif // ANALYSIS_H_INCLUDED
