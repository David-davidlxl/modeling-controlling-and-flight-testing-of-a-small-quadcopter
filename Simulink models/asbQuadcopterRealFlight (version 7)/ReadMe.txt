ReadMe file for asbQuadcopterStartRealFlight (version 3)

Starting with asbQuadcopter (version 2), the following changes are made to get to this version:

1) change the value of `takeOffDuration` (whose definition is in utilities\startVars.m) from 0.5 to 0.55

2) change the value of `Vehicle.Airframe.mass` (whose definition is in tasks\vehicleVars.m) from 0.063 to 0.08

3) change the value of `Controller.takeoffGain` (whose definition is in tasks\controllerVars.m) from 0.45 to (0.065 * 1.43615 / 0.08 - 1)

4) perform a flight test for the constant-altitude scenario with the updated duration, mass, and gain values
   and download the flight log (droneFlight.txt) and MAT-file (RSdata.mat)

(Major achievement: the take-off process has been improved as much as possible and zero steady-state error has been
                    achieved with the constant-0.7m-altitude scenario)