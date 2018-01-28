#include <iostream>
#include <stdlib.h>
#include "instrument.h"

Instrument::Instrument()
{

  
}

Instrument::Instrument(std::string name) {
  this->name =name;

  std::cout << name << std::endl;
}

Instrument::~Instrument()
{

}


void Instrument::set_duration(int ms)
{
  this->ms = ms;

    std::cout << "Duration " << ms << " ms" <<std::endl;
}

void Instrument::amplitude(int dB)
{
  this->dB = dB;
    std::cout << "Amplitude " << dB << " dB" <<std::endl;
}

void Instrument::pitch(int Hz)
{
  this->Hz = Hz;
    std::cout << "Pitch " << Hz << " Hz" <<std::endl;
}

void Instrument::play()
{
  std::cout << "Speel dat dingetje!." << std::endl;
}
