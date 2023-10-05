#include "mbed.h"
#include <cstdio>

// Create a DigitalOut “object” called greenLED. Pass constant LED1 as a “parameter”
DigitalOut greenLED(PB_0);

//These are "commented out" and so are not part of the program. You can uncomment them by removing the // characters
//Your task is to make a sequence alternating between Green+Red and just Blue 


DigitalOut blueLED(LED2);
DigitalOut redLED(LED3);

//The main function - all executable C / C++ applications have a main function. This is our entry point in the software
int main() 
{
    //Write a welcome message to the target 
puts("welcome to the university of plymouth");
    // all the repeating code is contained in a "while loop"
    while(true)
    {
// the code between the {curley braces} is code that will be repeated forever
        // Turn onboard LED ON  
        greenLED = 1;
redLED = 1;
        // Wait 0.2 second (1 million microseconds)
        wait_us(250000); 

        // Turn LED OFF
        greenLED = 0;
redLED = 0;
        // Wait 0.2 second
        wait_us(250000); 
blueLED = 1;
wait_us(250000);
blueLED = 0;


    }
}