/*
 * Utility functions to help debugging code.
 *
 * If #DEBUG_H is defined, a header will be printed with line number.
 * 
 * NOTE: In order for this to work, you must have your
 *       #define DEBUG before the #include,
 *       this applies for #DEBUG_H as well
 *
 *       e.g.
 *       #define DEBUG
 *       #include <DebugUtils.h>
 *
 *       #define DEBUG
 *       #define DEBUG_H
 *       #include <DebugUtils.h>
 *
 */

#ifndef DEBUGUTILS_H
#define DEBUGUTILS_H

#ifdef DEBUG

#ifdef DEBUG_H
#define DB_H()                      \
 Serial.println(F("---"));          \
 Serial.print(F("["));              \
 Serial.print(__LINE__);            \
 Serial.print(F("] "));             \
 Serial.print(__PRETTY_FUNCTION__); \
 Serial.println(F(" - "));
#else
#define DB_H()
#endif

#define DEBUG_PRINT(str) \
  DB_H();                \
  Serial.print(str);

#define DEBUG_PRINTLN(str) \
  DB_H();                \
  Serial.println(str);

#define DEBUG_PRINTF(str, val) \
  DB_H();                \
  Serial.print(str);		   \
  Serial.print(F(": "));	   \
  Serial.print(val);

#define DEBUG_PRINTFLN(str, val) \
  DB_H();                \
  Serial.print(str);		     \
  Serial.print(F(": "));         \
  Serial.println(val);

#define DEBUG_PRINTBIN(str) \
  DB_H();                \
  Serial.print(str, BIN);

#define DEBUG_PRINTBINLN(str)     \
  DB_H();                \
  Serial.println(str, BIN);

#define DEBUG_PRINTDEC(str) \
  DB_H();                \
  Serial.print(str, DEC);

#define DEBUG_PRINTDECLN(str) \
  DB_H();                \
  Serial.println(str, DEC);

#else

#define DEBUG_PRINT(str)
#define DEBUG_PRINTLN(str)
#define DEBUG_PRINTF(str, val)
#define DEBUG_PRINTFLN(str, val)
#define DEBUG_PRINTBIN(str)
#define DEBUG_PRINTBINLN(str)
#define DEBUG_PRINTDEC(str)
#define DEBUG_PRINTDECLN(str)
#endif
#endif
