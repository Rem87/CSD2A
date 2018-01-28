#ifndef _INSTRUMENT_H_
#define _INSTRUMENT_H_

#include <iostream>
#include <string>

class Instrument
{
public:
  Instrument();
  Instrument(std::string name);
  ~Instrument();

  void pitch(int Hz); //teken
  void amplitude(int dB); //verplaats
  void set_duration(int ms); //set snelheid
  void play();

private:
  int ms;
  int dB;
  int Hz;
  std::string name;
};

#endif // _INSTRUMENT_H_
