ReadMe file for asbQuadcopterStartRealFlight (version 2)

Starting with asbQuadcopter (version 1), the following changes are made to get to this version:

1) change the value of `takeOffDuration` (whose definition is in utilities\startVars.m) from 0 to 0.5

2) perform a flight test for the constant-altitude scenario with (`Controller.takeoffGain`, `takeOffDuration`) = (0.45, 0.5)
   and download the flight log (droneFlight.txt) and MAT-file (RSdata.mat)

(have NOT changed the value of `Vehicle.Airframe.mass` (whose definition is in tasks\vehicleVars.m) from 0.063 to 0.0818)

(have NOT changed the value of `Controller.takeoffGain` (whose definition is in tasks\controllerVars.m) from 0.45 to 0.25)



