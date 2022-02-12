# gaurd-dog_monitoring_system

## INTRODUCTION:
Several techniques and software tools for embedded system design have been recently proposed. However, the current practice in the designer community is heavily based on manual techniques and on experience rather than on a rigorous approach to design. To advance the state of the art it is important to address several relevant design problems and solve them to demonstrate the power of the new approaches. 
There are a lot of cases where dog owners or security personals have to monitor their dogs manually so that they don’t feel caged inside the house and become more aggressive or urinate inside the living premises at night or when they are not being monitored. 


## COMPONENTS REQUIRED
1. Microcontroller – MSP432P401R
    The MSP432 is a mixed-signal microcontroller family from Texas Instruments. It is based on a 32-bit ARM Cortex-M4F CPU. Launchpad board is compatible with a suite of         MSP430 stackable BoosterPacks, including the low-power SimpleLink Wi-Fi CC3100 BoosterPack. It includes a USB debugging interface that can be connected directly to the       development workstation.



2.	IR sensor is an electronic device, that emits the light in order to sense some object of the surroundings. An IR sensor can measure the heat of an object as well as detects the motion. Usually, in the infrared spectrum, all the objects radiate some form of thermal radiation. These types of radiations are invisible to our eyes, but infrared sensor can detect these radiations.

3.	A servo motor is a type of motor that can rotate with great precision. Normally this type of motor consists of a control circuit that provides feedback on the current position of the motor shaft, this feedback allows the servo motors to rotate with great precision. If you want to rotate an object at some specific angles or distance, then you use a servo motor. It is just made up of a simple motor which runs through a servo mechanism.





## BASIC DESIGN:
An infrared transmitter and a receiver is placed collinearly on both sides of the door present inside the house at height of 1 feet and another one another Pair of same setting at 5 feet   


## WORKING:
In this MBSD Application, when the IR sensor placed at height of 1 foot is triggered along with the IR sensor at a height of 5 feet, the servo motor present at the door doesn’t do anything and the gate remains closed. However, when the IR sensor at a 1 feet height is triggered the servo motor turns clockwise opening  the gate and hence allowing the dog to go out of the house . 



## CONCLUSION:

This MBSD Application may be one of the solutions for Guard dog monitoring system in an independent house in the absence of the owner.
Thus, we can use microcontroller-based systems and embedded systems to solve such problems and improve the productivity and performance of home automation. Hence, we can say Internet of things, and especially engineering solutions can make life easier and safer.







