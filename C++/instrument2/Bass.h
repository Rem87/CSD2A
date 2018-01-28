#include "instrument.h"

class Bass : public Instrument
{
public:
  Bass();
  Bass(std::string name);
  ~Bass();
  void play();
private:
  //void staccato, pizzicato, legato;
};
