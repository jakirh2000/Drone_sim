//
//  Drone_functions.cpp
//  Drone_sim
//
//  Created by Jakir Hossain on 10/9/17.
//  Copyright © 2017 Jakir Hossain. All rights reserved.
//

#include "Drone_functions.hpp"

using std::string;
using std::valarray;

Vehicle_Dynamics::Calculate_AUW(int air_frame, int motor_wt, int props, int ESC, int bat, int PDU, int Radio, \
                               int total_lift, int FCC, float AUW)

{

    AUW = total_lift - (air_frame+motor_wt+props+ESC+bat+PDU+Radio+FCC);

    return 0;
}
