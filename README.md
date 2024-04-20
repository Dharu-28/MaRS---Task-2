# MaRS---Task-2

# THOUGHT PROCESS
The project was to rotate the shaft depending on the distance detected by the ultrasonic sensor using MD10C motor driver and dc motor. 
      We were given the readings as well as the direction in which the rotation of the motor had to be. So the first thing that came to my mind was, the motion of the rover when it detects something within a particular range of distance (The wheel being connected to the motor shaft). I related this with my Rover in Task 0, which switches on the camera when it detects motion at a distance. When the rover detects an object more than 100 cms away, it tries to move towards it for the camera to get a better view. As the distance reduces, the speed of the rover also reduces and reaches 0 when it is 50-75 cms from the object (Assuming the focus to be perfect when its in that range). If the object is very close or less than 50 cm, I visualized the camera focus to be bad. So the rover has to move away from the object, i.e., the wheels will rotate in the reverse direction.

# My working process :
As I had no prior knowledge about MD10C and it was my first time hands on experience with arduino and sensors, I was a bit curious to know what and how it all works.
      Firstly, I defined the connections for the MD10C and my DC motor. Then I defined the outputs and assigned PWM (Pulse Width Modulation) and DIR (direction) to 0 and LOW respectively in the setup part. After setting up, I checked if my DC motor and MD10C works properly with the code. After getting the affirmation, I wrote a function for the Ultrasonic Sensor. Creating a variable named Dist, I assigned the returned value and calculated the distance detected by the sensor. To verify it, I wanted to print it on my serial monitor. Now, for every specific range of distance detected, I wrote an if condition to determine the direction and speed in which the shaft had to rotate. 

# BIBLIOGRAPHY
1. https://robu.in/wp-content/uploads/2014/12/MD10C-Rev2.0-Users-Manual-Google-Docs.pdf
2. https://docs.arduino.cc/learn/microcontrollers/analog-output/
3. https://github.com/CytronTechnologies/Arduino_MD10C
4. https://www.cytron.io/tutorial/controlling-10a-dc-motor-driver-using-arduino-nano
5. https://docs.arduino.cc/learn/microcontrollers/analog-output/
6. https://www.youtube.com/watch?v=CP-qApJEJ0k
7. https://forum.arduino.cc/t/using-rhino-rmcs-2301-with-rhino-dc-motor-with-planetary-gearbox/374009
8. https://www.youtube.com/watch?v=kA38GhkUOso
9. https://forum.arduino.cc/t/arduino-code-to-run-stepper-motor-clockwise-and-anticlockwise-in-a-loop/887489
10. https://www.youtube.com/watch?v=fPLEncYrl4Q
11. https://www.instructables.com/Arduino-Control-DC-Motor-via-Bluetooth/
12. https://forums.basicmicro.com/viewtopic.php?t=861#:~:text=Sign%20Magnitude%20drive%2C%20powers%20one,power%20the%20motor%20%22sees%22.
13. https://forum.arduino.cc/t/need-the-simple-code-for-turing-clockwise-and-counterclockwise-a-dc-motor/431008/2
