# Motion feedback system design for robot via motors
Design a feedback system for the movement of the robot via Servo Motor, during training at the Smart Methods Company

Initially, carrying out this task is an introduction to something important in robotics, which is to create a system that is more symmetric with each other

We notice here in the Poppy Humanoid robot that when one hand moves one side, it automatically moves with the other hand, we notice this in the video:
![alt text]( "result")


I designed a simplified system of implementation by using two types of servo motor and connecting them with variable resistance (potintiometer) and this was the end result of the simulation movement:
![alt text]( "result")


The idea of using a regular servo motor and linking it with a potintiometer is a saving of the project value instead of buying a motor with this feature industrially and it will be more expensive, the decision to purchase is made based on the project requirements

Implementation was through the fact that the value recorded in the variable resistance is kept in a variable and executed in the two engines and this is checked every 30 milliseconds

I have tried to implement the project in practice, but I have one servo drive but it was an effective thing to learn:
First picture:
![much-a image]() 


second picture:
![much-a image]() 

Image electrical connection with Arduino, two motors and a potintiometer:
![much-a image]() 

I have attached the code used in addition to the project at tinkercad.


Link to a previous project that I implemented to connect the motors with the Arduino:
#### <p align="center"> [Tidio web site ]()</p>
