#include "crops.h"
#include "crop_production.h"
#include "analysis.h"
#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;
#include <fstream>
#include <functional>
namespace {

class AnalysisTest:public ::testing::Test {

  protected:
    void SetUp() {

    crp.addEachrow("Andaman and Nicobar Islands","NICOBARS",1800,"Kharif","Arecanut",1254,2000);
    crp.addEachrow("Andaman and Nicobar Islands","NICOBARS",2000,"Whole Year","Sweet potato",5,15);
    crp.addEachrow("Andaman and Nicobar Islands","SOUTH ANDAMANS",2006,"Whole Year","Sugarcane",53.5,999.5);
    crp.addEachrow("Andhra Pradesh","ANANTAPUR",1997,"Kharif","Arhar/Tur",21400,2600);
    crp.addEachrow("Andhra Pradesh","ANANTAPUR",1997,"Rabi","Cotton(lint)",7300,9400);
    crp.addEachrow("Andhra Pradesh","CHITTOOR",2003,"Rabi","Bajra",36,60);
    crp.addEachrow("Arunachal Pradesh","ANJAW",2004,"Kharif","Small millets",532,495);
    crp.addEachrow("Arunachal Pradesh","ANJAW",2004,"Whole Year","Potato",86,688);
    crp.addEachrow("Assam","BAKSA",2013,"Kharif","Mesta",103,544);
    crp.addEachrow("Assam","BAKSA",2014,"ANJAW","Tobbaco",100,500);
    crp.addEachrow("Bihar","ARARIA",1997,"Rabi","Maize",3250,7543);
    crp.addEachrow("Chhattisgarh","BIJAPUR",2010,"Kharif","Maize",702,1034);
    crp.addEachrow("Chhattisgarh","BIJAPUR",2010,"Kharif","Sesamum",107,29);
    crp.addEachrow("Gujarat","BANAS KANTHA",1997,"Whole Year","Maize",6500,14800);
    crp.addEachrow("Gujarat","BANAS KANTHA",1998,"Kharif","Bajra",194700,51200);
    crp.addEachrow("Himachal Pradesh","KINNAUR",2010,"Rabi","Barley",955,1633);
    crp.addEachrow("Himachal Pradesh","KULLU",1999,"Rabi","Barley",955,1633);
    crp.addEachrow("Jammu and Kashmir","POONCH",2001,"Rabi","Wheat",16593,27990);
    crp.addEachrow("Jammu and Kashmir","POONCH",2001,"Whole Year","Potato",16593,27991);
    crp.addEachrow("Jharkhand","WEST SINGHBHUM",2010,"Rabi","Potato",35,46);
    crp.addEachrow("Jharkhand","WEST SINGHBHUM",2010,"Rabi","Rapeseed&Mustard",33,43);
    crp.addEachrow("Kerala","WAYANAD",2014,"Whole Year","Tapioca",2327,99788);
    crp.addEachrow("Madhya Pradesh","AGAR MALWA",2013,"Kharif","Bajra",10,4);
    crp.addEachrow("Maharashtra","YAVATMAL",2012,"Kharif","Cotton(lint)",467600,981400);
    crp.addEachrow("Maharashtra","RAIGAD",2012,"Kharif","Rice",467688,98140);
    crp.addEachrow("Maharashtra","PUNE",2014,"Kharif","Bajra",6,4);
    }
    void TearDown() { //delete crp; 
    }
    Analysis crp;

};
TEST_F(AnalysisTest, STatetest)
{
    Analysis ft;
    EXPECT_STREQ("Maharashtra", crp.findStateusingProduction(981400).c_str());
}
TEST_F(AnalysisTest, RemoveProductionTest) {
    crp.removeProduction(2600);
    EXPECT_EQ(NULL, crp.findProductionById(2600));
    EXPECT_EQ(25, crp.countAll());
}
TEST_F(AnalysisTest, StatesWithKharif) {
    crp.stateswithkharif();
}

TEST_F(AnalysisTest, Potatetest) {
     EXPECT_EQ(3, crp.countofstateswithpotato());
}
TEST_F(AnalysisTest, StateWithminArea) {
     EXPECT_STREQ("Andaman and Nicobar Islands", crp.Stateswithminarea().c_str());
}
TEST_F(AnalysisTest, maxprodOFdistrict) {
     EXPECT_STREQ("YAVATMAL", crp.MaxproductionofDistrict().c_str());
}
} // namespace

