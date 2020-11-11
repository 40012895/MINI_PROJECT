 #include "crops.h"
 #include "crop_production.h"

 using namespace std;

Crop::Crop():CropProduction(){}

Crop::Crop(string sn,string dis,int cy,string ses,string cro,double are,double prod):CropProduction(sn,dis,cy,ses,cro,are,prod){}

void Crop::costestimation()
{
    double temp=CropProduction::getArea();
    double temp2=CropProduction::getProduction();
    cost_esti=temp*temp2;
}
