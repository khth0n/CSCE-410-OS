/* 
    File: kernel.C

    Author: R. Bettati
            Department of Computer Science
            Texas A&M University

    Date  : 2017/05/25

    Modified: 2024/01/28
    Author: Isaiah Cordova
            Texas A&M University

    The "main()" function is the entry point for the kernel. 

*/



/*--------------------------------------------------------------------------*/
/* INCLUDES */
/*--------------------------------------------------------------------------*/

#include "console.H"

using namespace std;

/* ======================================================================= */
/* MAIN -- THIS IS WHERE THE OS KERNEL WILL BE STARTED UP */
/* ======================================================================= */

int main()
{

  /* -- INITIALIZE CONSOLE */
  Console::init(); 
  Console::puts("Initialized console.\n");
  Console::puts("\n");

  Console::puts("Replace the following <NAME> field with your name.\n");
  Console::puts("After your are done admiring your output, you can shutdown this 'machine'.\n");
  Console::puts("\n");
  Console::puts("WELCOME TO MY KERNEL!\n");
  Console::puts("      ");
  Console::set_TextColor(GREEN, RED);

  //Modified Section
  Console::puts("Isaiah Cordova\n");
  
  /* -- LOOP FOREVER! */
  for(;;);
  
}
