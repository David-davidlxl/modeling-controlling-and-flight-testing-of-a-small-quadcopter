ReadMe file for asbQuadcopterStartRealFlight (version 5)

Starting with asbQuadcopter (version 4), the following changes are made to get to this version:

1) add (but then comment out) mechanism for the proportional and derivative x-y controllers to be piecewise

2) tune the integral x- and y-controller gains to both have a magnitude of 0.1

3) change the simulation time `TFinal` (whose definition is in utilities/startVars.m) from 32 to 42

4) create `ConstantAltitudeAndThenLinearX` and `ConstantAltitudeAndThenLinearY` scenarios

   - 42 seconds of constant z of -0.7
   - 20 seconds of constant x/y of 0, then 5 seconds of linear x/y, then 17 seconds of constant x/y of 1
   - 42 seconds of zero roll, pitch, and yaw
   - found the x-controller's performance to be largely satisfactory (average steady-state error is around 0)
   - found the y-controller and estimator to need a bit more work (large overshoot, large steady-state error,
     and large estimated-actual discrepency)