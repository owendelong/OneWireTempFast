// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.

// Version 3.7.2 modified on Dec 6, 2011 to support Arduino 1.0
// See Includes...
// Modified by Jordan Hochenbaum

#include "OneWireTempFast.h"

#if ARDUINO >= 100
    #include "Arduino.h"   
#else
extern "C" {
    #include "WConstants.h"
}
#endif

