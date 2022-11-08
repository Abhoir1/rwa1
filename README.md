# rwa1
This assignment is part of course ENPM809Y

Assignment Description

Exercise #1
      
    1. This exercise involves a robotic arm that can perform pick-and-place. The arm can pick up parts and place them on tables. 
       The components involved in this environment are described below.
         • 1 robotic arm.
         • 3 parts: 1 cube (c), 1 ball (b), and 1 peg (p).
         • 2 grippers: 1 suction gripper (s) and 1 ﬁnger gripper (f).
         • 3 tables: 1 red table (r), 1 green table (g), and 1 blue table (b).
       
    2. The rules of pick-and-place are as follows:
         • The arm can only pick up the ball with the suction gripper.
         • The arm can only pick up the cube and the peg with the ﬁnger gripper.
         • The cube can be placed only the red table, the ball only on the green table, and the peg only on the blue table.
       
       
    3. Task for this exercise is to ask the user to enter the following information
       in the speciﬁed order:
         1. The object to pick up.
         2. The gripper to use.
         3. The table to place the object.
       
    4. Based on the user inputs, the program will output a success or a failure message.

Exercise #2

    1. In this exercise a robot places pegs in slots based on user inputs. The components involved in the environment are described below:
        • 1 robotic arm.
        • 1 box with 9 slots.
        • 9 red pegs (r).
        • 9 green pegs (g).
        • 9 blue pegs (b).
      
    2. The program starts by displaying available slots The user is then asked to enter whether or not they want the robot to place 
       pegs of a given color. If the user enters y , then the program prompts about the slots for placing the pegs. If the user enters 
       n then the program skips the question on the slots.
    3. The question regarding slot selections is "dynamic".
    4. Each time information on pegs is entered, the program displays the status of the slots. Unoccupied slots are numbered and 
      occupied slots are represented with letters (r for red pegs, g for green pegs, and b for blue pegs).
    5. After all the selections are made, the program prompts the user if they want to try again. y restarts the program and 
      n exits the program.

       
