/*******************************************************************************
  Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This file contains the "main" function for a project.

  Description:
    This file contains the "main" function for a project.  The
    "main" function calls the "SYS_Initialize" function to initialize the state
    machines of all modules in the system
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include "definitions.h"                // SYS function prototypes


// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************

char myString[5]="CIAO!";
static bool outFlag = false;
int counter = 0;

void TMR2_event_handler(){
    counter++;
    if(counter==10){
        counter = 0;
        if(outFlag==false){
            outFlag = true;
            OUT1_Set();
        }
        else{
            outFlag = false;
            OUT1_Clear();
        }
    }
}

//void __ISR(_CORE_TIMER_VECTOR, IPL2SRS) TMR2_event_handler(){
//    counter++;
//}

int main ( void )
{
    /* Initialize all modules */
    SYS_Initialize ( NULL );

    UART1_Write("*",1);
    UART1_Write("*",1);
    UART1_Write("*",1);
    UART1_Write("\n",1);
    
     // Register callback function for CH0 period interrupt
    TMR2_CallbackRegister(TMR2_event_handler, (uintptr_t)NULL);
    
    //Start TMR2 for delay
    TMR2_Start();
            
    while ( true )
    {
        /* Maintain state machines of all polled MPLAB Harmony modules. */
        SYS_Tasks ( );

        
//        if(counter==500){
//            UART1_Write("A",1);
//            //UART1_Write(myString,5);
//            counter = 0;
//        }
        
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

