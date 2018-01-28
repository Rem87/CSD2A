#include "instrument.h"
#include <iostream>

//Print geluid
void Instrument::makeSound()
  {
    std::cout << " Sound! " << std::endl;
  }

//Print toon
  void Instrument::playTone()
    {
      std::cout << " TOOOOOOON!! " << std::endl;
    }

//MakeMultipleSounds
  void Instrument::makeMultipleSounds(int numTimes)
    {
// Loop for numTimes
        for (int i = 0; i < numTimes; i ++)
        {
          std::cout << " Sound! " << std::endl;
        }
      }
