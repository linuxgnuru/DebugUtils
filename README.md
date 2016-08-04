# DebugUtils

  Utility functions to help debugging code.
 
  If #DEBUG_H is defined, a header will be printed with line number.
  
  NOTE: In order for this to work, you must have your #define DEBUG before the #include,
        this applies for #DEBUG_H as well
 
        e.g.
        #define DEBUG
        #include <DebugUtils.h>
 
        #define DEBUG
        #define DEBUG_H
        #include <DebugUtils.h>
