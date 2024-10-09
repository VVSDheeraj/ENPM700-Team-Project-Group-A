#pragma once
#include <iostream>

/**
 * @class PIDController
 * @brief A simple PID controller class for computing velocity adjustments.
 *
 * This class is designed to compute a new velocity given a target setpoint and the actual velocity.
 * It contains three main components for Proportional, Integral, and Derivative control: Kp, Ki, and Kd.
 */
class PIDController {
public:
    /**
     * @brief Constructor for PIDController
     * 
     * @param kp Proportional gain
     * @param ki Integral gain
     * @param kd Derivative gain
     */
    PIDController(double kp, double ki, double kd);

    /**
     * @brief Compute the new velocity based on the setpoint and actual velocity.
     *
     * @param setpoint Desired target velocity
     * @param actual_velocity Current measured velocity
     * @return Computed velocity adjustment (stub returns a constant for now)
     */
    double compute(double setpoint, double actual_velocity);

private:
    double Kp;  ///< Proportional gain
    double Ki;  ///< Integral gain
    double Kd;  ///< Derivative gain
};
