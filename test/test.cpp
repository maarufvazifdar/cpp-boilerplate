#include <gtest/gtest.h>
#include <pid.hpp>

TEST(PIDTest,test1){
  PIDController pid(0,0,0,0,0,0);
  double output = pid.calculatePID(0,0);
  EXPECT_EQ(1,output);
}

TEST(PIDTest,test2){
  PIDController pid(0,0,0,0,0,0);
  double output = pid.updatePIDParameters(0,0,0,0,0);
  EXPECT_EQ(2,output);
}
