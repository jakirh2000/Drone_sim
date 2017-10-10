//
//  main.cpp
//  Drone_sim
//
//  Created by Jakir Hossain on 10/9/17.
//  Copyright © 2017 Jakir Hossain. All rights reserved.
//

#include <iostream>
#include<iomanip>
#include<fstream>
#include<cstdlib>
#include "Drone_functions.hpp"

using std::string;
using std::valarray;


int main()
{
    
    // all weights in gm
    
    
     int air_frame = 140;
     int motor_wt = 96;  // 4x24
     int props = 80;
     int ESC = 40;
     int Bat = 359;
     int PDU = 28; // pwr. dist unit
     int total_lift = 2156; // 4x539, using 2204 motor with 6 x 3 props
     int Radio = 50;  // telemetry Radio
     float FCC = 43; // Flight control computer  */
    
    
    Vehicle_Dynamics::Calculate_AUW(int air_frame, int motor_wt, int props, int ESC, int bat, int PDU, int Radio, \
                                    int total_lift, int FCC, float AUW);
    

    
    return 0;
}

