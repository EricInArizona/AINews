// Copyright Eric Chauvin 2023.



// This is licensed under the GNU General
// Public License (GPL).  It is the
// same license that Linux has.
// https://www.gnu.org/licenses/gpl-3.0.html



// See https://ericinarizona.github.io/
// For more information.


#pragma once


#include "../CppBase/BasicTypes.h"



class MainApp
  {
  private:

  public:
  inline static const char* getVersionStr( void )
    {
    return "11/16/2023";
    }

  // Int32 mainLoop( Int32 argc, char* argv[] );
  Int32 mainLoop( void );

  };
