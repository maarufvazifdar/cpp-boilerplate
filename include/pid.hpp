/** 
 * @file pid.hpp
 * @author Maaruf Vazifdar
 * @author Rishabh Mukund
 * @brief A class to compute PID values for a system.
 * @version 1
   @copyright Group 6 TDD assignment.
 * @date 09/30/2021
*/

#ifndef INCLUDE_PID_H
#define INCLUDE_PID_H

class PID{
    public:
        PID(double Kp, double Ki, double Kd, double dt, double max, double min);
        double updatePIDParameters(double Kp, double Ki, double Kd, double min, double max);
        double calculatePID(double cur_vel, double req_vel);

    private:
        double Kp, Ki, Kd, max, min, req_vel, cur_vel, error, prev_error, dt;
};

#endif // INCLUDE_PID_H