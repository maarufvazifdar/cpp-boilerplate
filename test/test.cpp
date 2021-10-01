/** 
 * @file pid.hpp
 * @author Maaruf Vazifdar
 * @author Rishabh Mukund
 * @brief A class to compute PID values for a system.
 * @version 1
   @copyright Group 6 TDD assignment.
 * @date 09/30/2021
*/

#include <gtest/gtest.h>
#include <pid.hpp>

/**
* @brief Test for calculatePID function
*/
TEST(calculatePIDTest, should_pass){
  PID pid(0,0,0,0,0,0);
  double output = pid.calculatePID(0,0);
  EXPECT_EQ(1,output);
}

/**
* @brief Test for updatePIDParameters function
*/
TEST(updatePIDParametersTest, should_pass){
  PID pid(0,0,0,0,0,0);
  double output = pid.updatePIDParameters(0,0,0,0,0);
  EXPECT_EQ(2,output);
}
