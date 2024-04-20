# MaRS---Task-2

# THOUGHT PROCESS
The project was to rotate the shaft depending on the distance detected by the ultrasonic sensor using MD10C motor driver and dc motor. 
      We were given the readings as well as the direction in which the rotation of the motor had to be. So the first thing that came to my mind was, the motion of the rover when it detects something within a particular range of distance (The wheel being connected to the motor shaft). I related this with my Rover in Task 0, which switches on the camera when it detects motion at a distance. When the rover detects an object more than 100 cms away, it tries to move towards it for the camera to get a better view. As the distance reduces, the speed of the rover also reduces and reaches 0 when it is 50-75 cms from the object (Assuming the focus to be perfect when its in that range). If the object is very close or less than 50 cm, I visualized the camera focus to be bad. So the rover has to move away from the object, i.e., the wheels will rotate in the reverse direction.

# My working process :
As I had no prior knowledge about MD10C and it was my first time hands on experience with arduino and sensors, I was a bit curious to know what and how it all works.
      Firstly, I defined the connections for the MD10C and my DC motor. Then I defined the outputs and assigned PWM (Pulse Width Modulation) and DIR (direction) to 0 and LOW respectively in the setup part. After setting up, I checked if my DC motor and MD10C works properly with the code. After getting the affirmation, I wrote a function for the Ultrasonic Sensor. Creating a variable named Dist, I assigned the returned value and calculated the distance detected by the sensor. To verify it, I wanted to print it on my serial monitor. Now, for every specific range of distance detected, I wrote an if condition to determine the direction and speed in which the shaft had to rotate. 

# BIBLIOGRAPHY
