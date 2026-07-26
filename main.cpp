#include <iostream>
#include <ctime>
#include <windows.h>
#include <conio.h>
int main(){
    std::cout << "Press any key to start\n";
    while (true) {
        if (_kbhit()) {  // Check if any key was pressed
            int key = _getch();  // Get the key code
            
            if (key == 32) { 
                std::cout<<" \ntimer started \n";
                int timelast = clock();
                while (true) {
                    if (_kbhit()) {  // Check if any key was pressed
                        int key = _getch(); 
                        if (key == 27) {  // ESC
                            std::cout<<clock() - timelast << " milisecounds";
                            break;
                        
                        }
                
                    }
                }   
            }

            }
            
           
        }
    }

