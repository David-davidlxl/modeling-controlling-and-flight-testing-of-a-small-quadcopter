# Modeling, Controlling, and Flight Testing of a Small Quadcopter
Modeling, controlling, and flight testing of the Parrot Mambo minidrone with MATLAB and Simulink

## Overview
This repository provides comprehensive documentation of how to perform simulations and flight tests of the Parrot Mambo minidrone using MATLAB and Simulink.

## Usage

### Getting Started

The "Modeling, Controlling, and Flight Testing of a Small Quadcopter.pdf" is the comprehensive documentation and is sufficient for any prospective user. In fact, I recommend relying solely on this PDF documentation, starting the project from scratch (with the latest version of MATLAB), and ignoring everything else in the repository when you are just getting started.

### asbQuadcopterRealFlight.mlx

The next most useful item in the repository is "asbQuadcopterRealFlight.mlx" (inside the "Simulink models" folder). This live script provides the code for

- opening the project
- simulating
- analyzing the simulation data
- analyzing the real-flight data
- calibrating the mass
- estimating the expected steady-state z with the calibrated mass
- comparing the altitude performance in simulation and in real flight

Note that most of the code here can be found in the PDF documentation.

### Simulink models

The "Simulink models" folder contains seven Simulink models, six of which can be used for flight testing. These models roughly correspond to section 4 ("Modeling") and section 6 ("Flight Testing") of the documentation, and they are intended to be used in conjunction with the "asbQuadcopterRealFlight.mlx" live script. You could look at them when you either fully understand the documentation or get stuck on working through any part of the documentation.

Each model has an accompanied "ReadMe.txt" file. (Note: the "ReadMe.txt" file for version 1 of the model mentions "Honors Report." The report was the previous, incomplete version of the comprehensive documentation in this repository. For all intents and purposes, you could think of the two as one and the same.)

## Others

The "Flight demos with constant-altitude scenario" folder contains three plots and three video demos corresponding to section 6.3.6 ("Further Flight Testing with Different Proportional Gains") of the documentation.

## Contact

I understand that the Parrot Mambo minidrone has long been off the market
(although it can still be found on, for example, [eBay](https://www.ebay.com/)). But if this repository turns out to be useful in any way or if any question (or feedback) arises, please feel free to contact me at davidlxl@umich.edu.