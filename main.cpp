// Copyright Eric Chauvin 2023.



// This is licensed under the GNU General
// Public License (GPL).  It is the
// same license that Linux has.
// https://www.gnu.org/licenses/gpl-3.0.html


#include "../CppBase/BasicTypes.h"

// In Windows use the linker option to set the
// stack size.

// In Linux set the stack size with this:
// #include "../LinuxApi/SetStack.h"

#include "MainApp.h"



// Int32 main( Int32 argc, char* argv[] )
Int32 main( void )
{
// For Linux:
// if( !SetStack::setit( 64 * 1024 * 1024 ))
  // return 1;


MainApp mApp;

return mApp.mainLoop(); //  argc, argv );
}
