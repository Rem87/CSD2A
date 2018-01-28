#include <iostream>
#include "instrument.h"

int main()
{
  Instrument myInstrument;

  std::cout << "Calling member function myInstrument.Makesound()" << std::endl;

  myInstrument.makeSound();
  myInstrument.playTone();
  myInstrument.makeMultipleSounds(8);
  return 0;
}
