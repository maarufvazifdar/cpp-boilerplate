/** 
 * @file pid.hpp
 * @author Maaruf Vazifdar
 * @author Rishabh Mukund
 * @brief A class to compute PID values for a system.
 * @version 1
 * @copyright Group 6 TDD assignment.
 * @date 09/30/2021
 */
#include<iostream>
#include<pid.hpp>

/** @brief  Constructor for the class PID to initialize all the 
 *          PID parameters.
 *  @param  double Kp, double Ki, double Kd, double dt, double max, double min
 *  @return void
 */

PID::PID(double Kp, double Ki, double Kd, double dt, double max, double min){
}

/** @brief  A member function to calculate the PID values based on the current
 *          velocity and required velocity
 *  @param  cur_vel Current process value
 *  @param  req_vel Setpoint value
 *  @return pTerm + iTerm + dTerm 
 */

double PID::calculatePID(double cur_vel, double req_vel){
    return 1;

    // double last_value = 0;

    // error = req_vel - cur_vel;
    // double pTerm = Kp * error;

    // double iTerm = 0;
    // iTerm += Ki * error; 
    // if (iTerm < min || iTerm > max){
    //   std::cout << "Value out of bounds";
    // }

    // double dTerm = Kd * (cur_vel - last_value);
    // last_value = cur_vel;
    // return pTerm + iTerm + dTerm;
}

/** @brief  A member function to update the PID parameters.
 *  @param  double Kp, double Ki, double Kd, double dt, double max, double min
 *  @return void
 */
double PID::updatePIDParameters(double Kp, double Ki, double Kd, double min, double max){
    return 2;
}
