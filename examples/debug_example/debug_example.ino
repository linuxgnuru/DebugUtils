#define DEBUG

#include <DebugUtils.h>

long lastMillisA;
long lastMillisB;
long intervalA;
long intervalB;

byte data = 0b00101101;

void setup()
{
   Serial.begin(9600);
   intervalA = 1000;
   intervalB = 500;
   DEBUG_PRINTFLN("intervalA", intervalA);
   DEBUG_PRINTFLN("intervalB", intervalB);
   lastMillisA = millis();
   lastMillisB = millis();
}

void loop()
{
   if (millis() - lastMillisA > intervalA)
   {
       lastMillisA = millis();
       DEBUG_PRINTLN("one second");
   }
   if (millis() - lastMillisB > intervalB)
   {
       lastMillisB = millis();
       DEBUG_PRINT("binary ");
       DEBUG_PRINTBINLN(data);
   }
   delay(1000);
}

