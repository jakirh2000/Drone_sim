//
//  Drone_functions.hpp
//  Drone_sim
//
//  Created by Jakir Hossain on 10/9/17.
//  Declaration of class Vehicle_Dynamics
//  Copyright © 2017 Jakir Hossain. All rights reserved.
//

#ifndef Drone_functions_hpp
#define Drone_functions_hpp

#include <stdio.h>

//#endif /* Drone_functions_hpp */

//  Created by Jakir Hossain on 8/26/17.
//  Copyright © 2017 Jakir Hossain. All rights reserved.
//

#include<string>
#include<valarray>
#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstdlib>

using std::string;
using std::valarray;
using std::setw;

class Vehicle_Dynamics
{
public:
    
    /* Notes*
     
     Payload Capacity: This is the difference between the aircraft’s total lift and its all up weight (AUW).
     The AUW is the weight of the aircraft as it is outfitted for flight, with motors, battery pack,
     computer, and so on. Function Lift_Calculation will calculate AUW of the simulated drone.
     
     */
    
    void Initialize(); // constructor
    void Calculate_AUW(int, int, int, int, int, int, int, int, int, float);  //constructor
    
    
    /* Notes*
       Electronic speed controllers (ESCs) are small electronic circuits that are used to independently control the speed and direction of each motor on our quad. Four ESCs are installed on aircraft, each designed specifically for use with brushless motors. They work by converting power from the main flight battery into a sequence of electrical signals that are sent across three different wires to the brushless motor. That sequence controls the speed, rotation, and even braking ability of the motor. The required speed for each motor is communicated to each ESC from the flight controller. We will have more on that in the next section. */
    
    
    // Need another function to calculate drone velocity(x,y,z)   ****
    
private:
    
    // can be only accessed by its member functions
    
    // all weights in gm
    
    int air_frame;
    int motor_wt;
    int props;
    int ESC;
    int Bat;
    int PDU; // pwr. dist unit
    int total_lift; // 4x539, using 2204 motor with 6 x 3 props
    int Radio;  // telemetry Radio
    int FCC;// Flight control computer */
    //float AUW;
    
};

#endif /* Drone_functions_hpp */


