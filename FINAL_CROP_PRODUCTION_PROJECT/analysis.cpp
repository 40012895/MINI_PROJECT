#include "crops.h"
#include "crop_production.h"
#include "analysis.h"
#include <iostream>
#include <vector>
#include<list>
using namespace std;

void Analysis::addEachrow(string sn,string dis,int cy,string ses,string cro,double are,double prod)
{
    crp.push_back(Crop(sn,dis,cy,ses,cro,are,prod));
}

string Analysis::findStateusingProduction(double temp)
{
    std::list<Crop> :: iterator iter;
    for(iter=crp.begin(); iter!=crp.end(); iter++) {
        if (iter->getProduction() == temp) {
            return(iter->getName());
            break;
        }
    }
    return NULL;
}
void Analysis::stateswithkharif()
{
    printf("\n\n............STATES WITH KHARIF.........\n\n");
    std::list<Crop> :: iterator iter;
    for(iter=crp.begin(); iter!=crp.end(); iter++) {
        //printf("hello");
        if (iter->getSeason() == "Kharif") {
            cout<<iter->getName()<<endl;
        }
    }
}
void Analysis::removeProduction(double temp)
{
    std::list<Crop> :: iterator iter;
    for(iter=crp.begin(); iter!=crp.end(); iter++) {
        if (iter->getProduction() == temp) {
            crp.erase(iter);
            break;
        }
    }
}
Crop* Analysis::findProductionById(double temp)
{
    std::list<Crop> :: iterator iter;
    for(iter=crp.begin(); iter!=crp.end(); iter++) {
        if (temp == iter->getProduction()) {
            return &(*iter);
        }
    }
    return NULL;
}
int Analysis::countAll() {
    return crp.size();
}

int Analysis::countofstateswithpotato()
{
    int count=0;
    std::list<Crop> :: iterator iter;
    for(iter=crp.begin(); iter!=crp.end(); iter++) {
        if (iter->getCrop()=="Potato") {
            count++;
        }
    }
    return count;
}
string Analysis::Stateswithminarea()
{
    std::list<Crop> :: iterator iter;
    double maxArea = iter->getArea();
    iter++;
    for(; iter!= crp.end(); ++iter) {
        if(maxArea> iter->getArea()){
            maxArea = iter->getArea();
        }
    }
    for(iter=crp.begin(); iter!=crp.end(); iter++) {
        if (maxArea == iter->getArea()) {
            return (iter->getName());
        }
    }
    return NULL;

}
string Analysis::MaxproductionofDistrict()
{
    std::list<Crop> :: iterator iter;
    double maxprod = iter->getProduction();
    iter++;
    for(; iter!= crp.end(); ++iter) {
        if(maxprod< iter->getProduction()){
            maxprod = iter->getProduction();
        }
    }
    for(iter=crp.begin(); iter!=crp.end(); iter++) {
        if (maxprod == iter->getProduction()) {
            return (iter->getDistrict());
        }
    }
    return NULL;
}


