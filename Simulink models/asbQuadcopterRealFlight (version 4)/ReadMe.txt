ReadMe file for asbQuadcopterStartRealFlight (version 4)

Starting with asbQuadcopter (version 3), the following changes are made to get to this version:

1) modify the duration of the ConstantAltitude scenario from 10 s to 32 s

2) change the simulation time `TFinal` (whose definition is in utilities/startVars.m) from 30 to 32

3) build (but then comment out) a reset mechanism for estimation of x in the State Estimator subsystem

4) build (but then comment out) a mechanism for the y controller such that the derivative gain for y is piecewise
   (-0.1 for the first 10 s and -0.05 afterwards)

5) add integral control to the x and y controllers that gets activated only after 10 s

6) perform a flight test for the constant-altitude scenario with the updated duration, mass, and gain values
   and download the flight log (droneFlight.txt) and MAT-file (RSdata.mat)