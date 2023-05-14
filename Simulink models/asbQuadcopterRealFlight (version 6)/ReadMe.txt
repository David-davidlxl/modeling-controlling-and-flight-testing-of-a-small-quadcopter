ReadMe file for asbQuadcopterStartRealFlight (version 6)

Starting with asbQuadcopter (version 5), the following changes are made to get to this version:

1) uncomment the mechanism for the proportional and derivative x-y controllers to be piecewise

2) redefine the length of the transient period from 10 s to 5 s

3) change the derivative gain of the y-controller from -0.1 to -0.14

4) change the proportional gain of the y-controller from 0.24 to 0.18 after the transient period

5) create `ConstantAltitudeAndThenLinearYaw` scenario

   - 42 seconds of constant z of -0.7
   - 20 seconds of constant yaw of 0, then 5 seconds of linear yaw, then 17 seconds of constant yaw of pi / 2
   - 42 seconds of zero x, y, roll, and pitch

6) create `ConstantAltitudeThenLinearYawThenLinearY` scenario

   - 42 seconds of constant z of -0.7
   - 20 seconds of constant yaw of 0, then 5 seconds of linear yaw, then 17 seconds of constant yaw of pi / 2
   - 25 seconds of constant y of 0, then 5 seconds of linear y, then 12 seconds of constant y of 1

7) create `RectangularLoop` scenario (for looping around a 1.9-meter-by-1-meter rectangle)

   - 42 seconds of constant z of -0.7
   - 30 seconds of linear x, then 5 seconds of linear yaw, then 15 seconds of linear y,
                             then 5 seconds of linear yaw, then 30 seconds of linear x,
                             then 5 seconds of linear yaw, then 15 seconds of linear y
   - 10 seconds of warm-up period
   - 1 second of break period (which is used each time the x/y/yaw has been finished changing)

8) change the simulation time `TFinal` (whose definition is in utilities/startVars.m) from 42 to 130

9) perform a flight test for the rectangular-loop scenario and download the MAT-file
   (RSdata.mat)