
#pragma once

//#include "mbed.h"
//#include "mbed_debug.h"

//#define USE_W5500  // don't use this library
//#define USE_W5100S // don't use this library
//#define USE_W6100  // don't use this library

//#if defined(USE_W5500)
//#include "W5500.h"
//#define USE_WIZ550IO_MAC    // want to use the default MAC address stored in the WIZ550io
//#endif

#if defined(TARGET_WIZwiki_W7500) || defined(TARGET_WIZwiki_W7500ECO)
#include "W7500x_toe.h"
#define __DEF_USED_IC101AG__ //For using IC+101AG

#elif defined(TARGET_WIZwiki_W7500P)
#include "W7500x_toe.h"

#else
#include "W5500.h"

/*
// current library do not support next chips.

#if defined(USE_W5100S)
#include "W5100S.h"
#endif

#if defined(USE_W6100)
#include "W6100.h"
#endif

//comming soon!
*/
