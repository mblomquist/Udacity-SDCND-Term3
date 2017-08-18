# Path Planning Write Up

## Overview

## Data Flow

- Prediction
- Behavior
- Trajectory

The prediction module reads in data from the sensor fusion vector which contains the location information for each of the vehicles currently seen on the road. Next, the prediction module will estimate the discrete steps each of the vehicles will follow for the time window. This information will then be returned to the `main.cpp` function.

The behavior module will read in the list of next waypoints as well as the output from the prediction module. With this information, the behavior planner will identify the best action to take. For example, the behavior module will determine if the vehicle should stay in the current lane, move left, move right, speed up, or speed down. The output of the behavior planner will be a set of discrete locations for the vehicle to move towards in order to maintain a speed near the speed limit and reach the next set of waypoints.

The trajectory planner will read in the remaining list of `next_x` and `next_y` values that have not been reached by the simulator and the output from the behavior module. With this information, the trajectory module will modify the behavior planning path in order to minimize jerk, optimize acceleration, and attempt to maintain the maximum speed limit of the road. To do this, a spline function will be used to create a smooth path within the constraints mentioned herein.

Note: The time window is the length of discrete steps the path planner will determine for the controlled vehicle. 
