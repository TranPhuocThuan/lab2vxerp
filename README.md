"# lab2vxerp" 
1. Exercise 1:

The first exercise demonstrates the interfacing of multiple seven-segment LEDs to the STM32F103C6 microcontroller. Seven-segment displays utilized in this exercise are of the common anode type, where the anode of all LEDs are tied together as a single terminal and the cathodes are left as individual pins.

To optimize MCU resources, individual cathode pins from all seven-segment LEDs are connected together and linked to 7 pins of the MCU, known as signal pins. Meanwhile, the anode pin of each seven-segment LED is controlled under a power enabling circuit, typically involving a PNP transistor. At any given time, only one seven-segment LED is turned on. However, with sufficiently small delay, it appears as though all LEDs are simultaneously enabled.

The circuit simulation was implemented in Proteus with two 7-SEGMENT LEDs.

2. Exercise 2:

Exercise 2 extends the previous exercise by incorporating 4 seven-segment LEDs and two LEDs (connected to PA4, labeled as DOT) in the middle. The objective is to blink the two LEDs every second while displaying '3' on the third seven-segment and '0' on the fourth one, representing 12-hour and a half.

Additionally, the switching time for each seven-segment LED is halved to 500ms. The implementation was carried out within the timer interrupt function.

3. Exercise 3:

Exercise 3 introduces a function named update7SEG(int index). An array of 4 integer numbers is declared for this case. The code skeleton provided is as follows:

cpp
Copy code
const int MAX_LED = 4;
int index_led = 0;
int led_buffer [4] = {1 , 2 , 3 , 4};
void update7SEG ( int index ) {
    switch ( index ) {
        case 0:
            // Display the first 7 SEG with led_buffer [0]
            break ;
        case 1:
            // Display the second 7 SEG with led_buffer [1]
            break ;
        case 2:
            // Display the third 7 SEG with led_buffer [2]
            break ;
        case 3:
            // Display the forth 7 SEG with led_buffer [3]                
            break ;
        default :            
            break ;                
    }        
}
4. Exercise 4:

Exercise 4 involves changing the period of invoking the update7SEG function to set the frequency of 4 even segment LEDs to 1Hz while keeping the DOT blinking every second.

5. Exercise 5:

Exercise 5 aims to implement a digital clock with hour and minute information displayed by 2 seven-segment LEDs. The provided code skeleton in the main function is as follows:

cpp
Copy code
int hour = 15 , minute = 8 , second = 50;
while (1) {      
    second ++;       
    if ( second >= 60) {    
        second = 0;            
        minute ++;            
    }
    if( minute >= 60) {        
        minute = 0;            
        hour ++;
    }        
    if( hour >=24) {        
        hour = 0;        
    }        
    updateClockBuffer () ;       
    HAL_Delay (1000) ;        
}
This exercise will be implemented differently.
