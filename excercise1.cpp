#include <iostream>
#include <string>
#include <array>

int main (){

std :: cout << "---------------------------------------------- \n" ;   
std :: cout << "EXCERCISE 1\n";
std :: cout << "---------------------------------------------- \n" ; 

char run_again;
do {                                                                                                                // Do while loop for asking to try again
                                                                                        
    std :: array < std :: string, 3>parts{"c","b","p"};                                                             // Creating string array for parts, actuators and tables
    std :: array < std :: string, 2>actuators{"s","f"};
    std :: array < std :: string, 3>tables{"r","g","b"};
                                                                              
    std :: string name_of_part{};                                                                                   // Creating strings for storing inputs from user
    std :: string name_of_actuator{};
    std :: string name_of_table{};


    do {                                                                                                            // Do while loop to get valid input of part

        std :: cout << "Which part to pick up? "<< '\n';
        std :: cin >> name_of_part;
    } while (name_of_part != "c" && name_of_part != "b" && name_of_part != "p");

    std :: cout << "---------------------------------------------- \n" ;

    do {                                                                                                            // Do while loop to get valid input of gripper
        std :: cout << "Which gripper to use? " << '\n';
        std :: getline(std :: cin >> std :: ws, name_of_actuator);
    } while (name_of_actuator != "s" && name_of_actuator != "f");
                                                                                 
    if (name_of_part == "b" && name_of_actuator != "s") {      
        std :: cout << "---------------------------------------------- \n" ;                                        // If part is ball and actuator is not suction gripper
        std :: cout << "Failure: Cannot pickup the ball with finger gripper\n";
    }
    else if ((name_of_part == "c" || name_of_part == "p") && name_of_actuator != "f") {                             // Else if part is cube or peg and actuator is not finger gripper
        if (name_of_part == "c") {                                                                                  // If part is cube
            std :: cout << "Failure: Cannot pickup the cube with suction gripper\n";
        }
        else {                                                                                                      // If part is peg
            std :: cout << "Failure: Cannot pickup the peg with suction gripper\n";   
        }
    }
    
    else {                                                                                                          // If none of the above conditions satisfy ask for table                                                                              

    std :: cout << "---------------------------------------------- \n" ;                                                                                       // 
        do {                                                                                                        // Do while to get valid table input
            std :: cout << "Which table to use? "<< '\n';       
            std :: cin >> name_of_table;
        } while (name_of_table != "r" && name_of_table != "g" && name_of_table != "b");

    std :: cout << "---------------------------------------------- \n" ;   

    // FAILURE CASES

        if (name_of_part == "b" && name_of_table == "r" ) {                                                         // If part is ball and table is red
            std :: cout << "Failure: Cannot place the ball on the red table" << "\n";
        }
        else if (name_of_part == "b" && name_of_table == "b" ) {                                                    // If part is ball and table is blue
            std :: cout << "Failure: Cannot place the ball on the blue table" << "\n";
        }
        else if (name_of_part == "p" && name_of_table == "r" ) {                                                    // If part is peg and table is red
            std :: cout << "Failure: Cannot place the peg on the red table" << "\n";
        }
        else if (name_of_part == "p" && name_of_table == "g" ) {                                                    // If part is peg and table is green
            std :: cout << "Failure: Cannot place the peg on the green table" << "\n";
        }
        else if (name_of_part == "c" && name_of_table == "g" ) {                                                    // If part is cube and table is green
            std :: cout << "Failure: Cannot place the cube on the green table" << "\n";
        }
        else if (name_of_part == "c" && name_of_table == "b" ) {                                                    // If part is cube and table is blue
            std :: cout << "Failure: Cannot place the cube on the blue table" << "\n";
        }

    // SUCCESS CASES

        else{
              
            if (name_of_part == "b" && name_of_table == "g") {                                                      // If part is blue and table is green
            std :: cout << "Success: The " << "ball" << " was placed on the " << "green" << " table" << "\n";            
            }
            if (name_of_part == "c" && name_of_table == "r") {                                                      // If part is cube and table is red
            std :: cout << "Success: The " << "cube" << " was placed on the " << "red" << " table " << "\n";            
            } 
            if (name_of_part == "p" && name_of_table == "b") {                                                      // If part is peg and table is blue
            std :: cout << "Success: The " << "peg " << " was placed on the " << "blue " << " table " << "\n";
            }
        }
    }
do {                                                                                                                // Do while loop to get y or n to try again
std :: cout << "---------------------------------------------- \n" ;    
std :: cout << "Do you want to run the program again? (y/n): ";
std :: cin >> run_again;
std :: cout << "---------------------------------------------- \n" ; 
} while (run_again != 'y' && run_again != 'n'); 
} while(run_again == 'y');

}

  

