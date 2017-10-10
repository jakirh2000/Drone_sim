//
//  Drone_functions.hpp
//  Drone_sim
//
//  Created by Jakir Hossain on 10/9/17.
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
    
    /*
     
     Payload Capacity: This is the difference between the aircraft’s total lift and its all up weight (AUW).
     The AUW is the weight of the aircraft as it is outfitted for flight, with motors, battery pack,
     computer, and so on. Function Lift_Calculation will calculate AUW of the simulated drone.
     
     */
    
    Calculate_AUW(int air_frame, int motor_wt, int props, int ESC, int bat, int PDU, int Radio, int total_lift, \
                  int FCC, float AUW);
    
    
    
    // all weights in gm
    /*
     
     air_frame = 140
     motor_wt = 96  // 4x24
     props = 80
     ESC = 40
     Bat = 359
     PDU = 28 // pwr. dist unit
     total_lift = 2156 // 4x539, using 2204 motor with 6 x 3 props
     Radio = 50  // telemetry Radio
     FCC = 43 // Flight control computer */
    
    
    
    /* Electronic speed controllers (ESCs) are small electronic circuits that are used to independently control the speed and direction of each motor on our quad. Four ESCs are installed on aircraft, each designed specifically for use with brushless motors. They work by converting power from the main flight battery into a sequence of electrical signals that are sent across three different wires to the brushless motor. That sequence controls the speed, rotation, and even braking ability of the motor. The required speed for each motor is communicated to each ESC from the flight controller. We will have more on that in the next section. */
    
    
    // Need another function to calculate drone velocity(x,y,z)   ****
    
    
    
    
    //void Add_Rayleigh_Noise(string input_file_name);
    //void Detection_processing();
    
    //valarray<float> get_analog_spn() {return analog_spn; }
    //valarray<int> get_digital_spn() {return digital_spn; }
    
    //void set_digital_threshold(int threshold) {digital_threshold = threshold; }
    //void set_analog_threshold(float threshold) {analog_threshold = threshold; }
    
    //void write_Output_To_File(string output_file_name);
    
private:
    
    
    //unsigned index(unsigned bin, unsigned sweep) { return bin + num_Range_Bins * sweep; }
    
    //unsigned num_Range_Bins;
    //unsigned num_Sweeps;
    //int digital_threshold;
    //float analog_threshold;
    
    //valarray<float> analog_spn;
    //valarray<int> digital_spn_after_ADC;
    //valarray<int> digital_spn;
};


#endif /* Drone_functions_hpp */


