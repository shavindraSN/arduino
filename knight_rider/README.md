# Knight Rider
Simple program to simulate knight rider led illumination
## Content
 - Parts required
 - Diagram
 - Instructions

### Parts required
----
1. Arduino Uno or Compatible board
2. Bread board
3. LED X 5
4. M-M Jumper cable x 5

### Diagram
----
<img src="diagrams/knight_rider.jpg" width="500">

Connect Ground pin of Arduino(GND) to cathode of LED and pin 13 
of board to anode of LED through 110ohm (or more) resistor. 

### Instructions
----
1. First connect items correctly as shown in the diagram. Be sure everything
connect correctly.

2. Open code for Hello World project using Arduino IDE.

3. Then connect board to computer using USB cable.

4. Upload the code to board using upload button. 

You can see LED blinking. If so congratulation. You have successfully
completed your first project.

### Next Step
----
In this project we use a pin the board and we just give 5v and 0v with a delay 
in between. Try to change the value in delay(int) method and see the output.