#include "crop_production.h"
#include "crops.h"
#include "analysis.h"
#include<iostream>
#include <gtest/gtest.h>
namespace {

class CropProductionTest : public ::testing::Test {

protected:
  void SetUp()
  { // override {
    pre = new Crop("Maharashtra","Raigad",2004,"Rabi","Rice",3342,1917);
    pre->costestimation();
  }
  void TearDown()
  {
    delete pre;
  }
  CropProduction *pre;
};

TEST_F(CropProductionTest, DefaultConstructor) {
  Crop c1;
  EXPECT_EQ(0, c1.getArea());
  EXPECT_EQ(0, c1.getProduction());
  EXPECT_EQ(0, c1.getName().length());
}
TEST_F(CropProductionTest, ParameterizedConstructorPre)
{
  EXPECT_EQ(3342, pre->getArea());
  EXPECT_STREQ("Maharashtra", pre->getName().c_str());
  EXPECT_EQ(1917, pre->getProduction());
  EXPECT_STREQ("Raigad", pre->getDistrict().c_str());
}

}

