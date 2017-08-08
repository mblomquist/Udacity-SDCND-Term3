// Trajectory Generator
// 
// Steps:
// 1. Read in path information (see behavior.cpp).
// 2. Plot trajectory while:
// 2a. Maintain speed limit 50±10 mph.
// 2b. Minimize jerk (not to exceed 50 m/s^3).
// 2c. Minimize acceleration (not to exceed 10 m/s^2).
// 2d. Minimize probability of collisions.
// 2e. Stay in Lanes.
// 3. Return vector of x-y values to follow.
