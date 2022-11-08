#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <stdio.h>
#include <string.h>
#include<sstream>

int main () {
char run_again;
do {                                                                        // Do while loop to try again
std :: cout << "---------------------------------------------- \n" ;   
std :: cout << "EXCERCISE 2 \n";
std :: cout << "---------------------------------------------- \n" ; 

std::array<std::array<char, 3>, 3> slots {{                                 // Creating character 2D array to store slots
  { '1', '2', '3' }, 
  { '4', '5', '6' },
  { '7', '8', '9' }
}};

std::string peg_red{};
std::string peg_green{};
std::string peg_blue{};

int len_r{};
int len_g{};
int len_b{};
int position{0};

int i,j,k;
std :: string input_red{}; 
std :: string sub_red{}; 
int check = -1;


// RED PEGS

char ask; 
do {                                                                            // Do while loop to get valid input(y/n) 
std :: cout << "Do you want to place the red pegs?  ";
std :: cin >> ask;
} while (ask != 'y' && ask!= 'n');
std :: cout << "\n";
if (ask == 'y') {                                                               // If user wants to replace the red pegs
std :: cout << "Where do you want to place the red pegs ( 1 - 9 )?  ";  
getline(std :: cin >> std :: ws, input_red);                                    // Using getline to get the inputs separated by spaces
std :: stringstream X(input_red);                                               // Creating a temporary string to store the inputs given by user without spaces
while (getline(X, sub_red, ' ')) {                                              
        peg_red.append(sub_red);                                                // Appeneding the string into another string with spaces
    }
std :: cout << "---------------------------------------------- \n" ; 

len_r = peg_red.length();                                                       // Creating an int variable equal to length of appended string 

for (i = 0; i < len_r; i++) {                                                   // For loop for comparing the elements of slot array and appended string
                for (j = 0; j < 3; j++) {
                    for (k = 0; k < 3; k++) {
                    if (peg_red[i] == slots[j][k]) {
                        check= i;
                    }
                    else continue;
                    if (check != -1) {
                        slots[j][k] = 'r';
                    }
                    else continue;
                    }    
                }
        }
    
        for (i=0; i<3; i++) {                                                   // Creating a for loop for printing updated 2D array
                for (j=0; j<3; j++){
                std::cout <<" "<<slots[i][j];
                }
                std::cout <<"\n";
            }
std :: cout << "---------------------------------------------- \n" ;            

}

// GREEN PEGS

if (len_r != 9)                                                                 // If all the elements of 2D array are not replaced by r ask to replace the green pegs
{
char ask1;            
do {                                                                            // Do while loop to ask and get valid input for red pegs
std :: cout << "Do you want to place the green pegs?  ";
std :: cin >> ask1;
} while (ask1 != 'y' && ask1 != 'n');
std :: cout << "\n";
if (ask1 == 'y') {
std :: cout << "Where do you want to place the green pegs ";
std :: cout << "( ";                                                            // To show the avaialble positions
            for (int j {0} ; j < 3; j++) {
                for (int k{0}; k < 3; k++) {
                    
                    if (slots[j][k] != 'r') {
                        std :: cout << slots[j][k] << " ";
                        position++;
                    }   
                           
                }
            }
std :: cout << ") ? "; 
std :: string input_green{}; 
std :: string sub_green{};
getline(std :: cin >> std :: ws, input_green);
std :: stringstream Y(input_green);
while (getline(Y, sub_green, ' ')) {
        peg_green.append(sub_green);
    }
len_g = peg_green.length();
for(i = 0; i < len_g; i++) {                                                    // Comparing the elements of updated 2D array and appended string for green pegs
                for (j = 0; j < 3; j++) {
                    for (k = 0; k < 3; k++) {
                    if (peg_green[i] == slots[j][k]) {
                        check = i;
                    }
                    else continue;
                    if (check != -1) {
                        slots[j][k] = 'g';
                    }
                    else continue;
                    }    
                }
        }
std :: cout << "---------------------------------------------- \n" ;
        for (i=0; i<3; i++) {                                                   // Creating a for loop for printing updated 2D array
                for (j=0; j<3; j++) {
                std::cout <<" "<<slots[i][j];
                }
                std::cout <<"\n";
            }                

}
std :: cout << "---------------------------------------------- \n" ;
    
}

// BLUE PEGS 

if (len_r + len_g != 9)                                                         // If all the elements of 2D array are not replaced by r and g ask to replace the blue pegs
{
    char ask3;            
do {
std :: cout << "Do you want to place the blue pegs? ";
std :: cin >> ask3;
} while (ask3 != 'y' && ask3 != 'n');
std :: cout << "\n";

if (ask3 == 'y') {
std :: cout << "Where do you want to place the blue pegs ";
std :: cout << "( ";
            for (int j {0} ; j < 3; j++) {
                for (int k{0}; k < 3; k++){ 
                    
                    if (slots[j][k] != 'r' && slots[j][k] != 'g') {             // To show the available slots
                        std :: cout << slots[j][k] << " ";
                        position++;
                    }   
    
                }                 
            }
std :: cout << ") ? ";              
std :: string input_blue{}; //s
std :: string sub_blue{}; //t
getline(std :: cin >> std :: ws, input_blue);
std :: stringstream Z(input_blue);
while (getline(Z, sub_blue, ' ')) {
        peg_blue.append(sub_blue);
    }
    
len_b = peg_blue.length();
for(i = 0; i < len_b; i++) {
                for (j = 0; j < 3; j++) {
                    for (k = 0; k < 3; k++)
                    {
                    if (peg_blue[i] == slots[j][k]) {
                        check = i;
                    }
                    else continue;
                    if (check != -1) {
                        slots[j][k] = 'b';
                    }
                    else continue;
                    }    
                }
        }
std :: cout << "---------------------------------------------- \n" ;
        for (i=0; i<3; i++){ 
                for (j=0; j<3; j++) {
                std::cout <<" "<<slots[i][j];
                }
                std::cout <<"\n";
            } 

std :: cout << "---------------------------------------------- \n" ;   

}
  
}

std :: cout << "Do you want to try again? ";
std :: cin >> run_again;

} while (run_again == 'y');    

}


