# Motion feedback system design for robot via motors
Design a feedback system for the movement of the robot via Servo Motor, during training at the Smart Methods Company

Initially, carrying out this task is an introduction to something important in robotics, which is to create a system that is more symmetric with each other

We notice here in the Poppy Humanoid robot that when one hand moves one side, it automatically moves with the other hand, we notice this in the video:

![alt text](https://github.com/MohammadYAmmar/Motion-feedback-system-design-for-robot-via-motors/blob/master/GIF%20from%20video%20Poppy%20Humanoid%20Beta%20Overview.gif "Poppy Humanoid")


I designed a simplified system of implementation by using two types of servo motor and connecting them with variable resistance (potintiometer) and this was the end result of the simulation movement:

![alt text](https://github.com/MohammadYAmmar/Motion-feedback-system-design-for-robot-via-motors/blob/master/GIF%20Simulation%20in%20Tinkercad%20to%20Feed%20back%20system.gif "simulation")


The idea of using a regular servo motor and linking it with a potintiometer is a saving of the project value instead of buying a motor with this feature industrially and it will be more expensive, the decision to purchase is made based on the project requirements

Implementation was through the fact that the value recorded in the variable resistance is kept in a variable and executed in the two engines and this is checked every 30 milliseconds

I have tried to implement the project in practice, but I have one servo drive but it was an effective thing to learn:
First picture:

![much-a image](https://github.com/MohammadYAmmar/Motion-feedback-system-design-for-robot-via-motors/blob/master/Picture%201%20of%20practical%20connection%2C%20but%20with%20a%20single%20servo%20motor.jpeg) 

second picture:

![much-a image](https://github.com/MohammadYAmmar/Motion-feedback-system-design-for-robot-via-motors/blob/master/Picture%202%20of%20practical%20connection%2C%20but%20with%20a%20single%20servo%20motor.jpeg) 

Image electrical connection with Arduino, two motors and a potintiometer:

![much-a image](https://github.com/MohammadYAmmar/Motion-feedback-system-design-for-robot-via-motors/blob/master/screenshot%20in%20Tinkercad%20to%20Feed%20back%20system.png) 

I have attached the code used in addition to the project at tinkercad.

![much-a image](https://github.com/MohammadYAmmar/Motion-feedback-system-design-for-robot-via-motors/blob/master/Simulation%20in%20Tinkercad%20to%20Feed%20back%20system.png) 

Link to a previous project that I implemented to connect the motors with the Arduino:
#### <p align="center"> [Motors Control System](https://github.com/MohammadYAmmar/Motors-Control-System)</p>
