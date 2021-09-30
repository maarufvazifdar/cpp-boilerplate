/** 
 * @file pid.hpp
 * @author Maaruf Vazifdar
 * @author Rishabh Mukund
 * @brief A class to compute PID values for a system.
 * @version 1
   @copyright Group 6 TDD assignment.
 * @date 09/30/2021
*/

#include <pid.hpp>

/** @brief  Constructor for the class PIDController to initialize all the 
 *          PID parameters.
 *  @param  double Kp, double Ki, double Kd, double dt, double max, double min
 *  @return void
 */
PIDController::PIDController(double Kp, double Ki, double Kd, double dt, double max, double min){
}

/** @brief  A member function to calculate the PID values based on the current velocity and required velocity
 *  @param  double v1, double v2
 *  @return double value
 */
double PIDController::calculatePID(double v1, double v2){
    return 2;
}

/** @brief  A member function to update the PID parameters.
 *  @param  double Kp, double Ki, double Kd, double dt, double max, double min
 *  @return void
 */
double PIDController::updatePIDParameters(double Kp, double Ki, double Kd, double min, double max){
    return 3;
}

