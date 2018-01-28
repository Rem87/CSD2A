#include "instrument.h"

class String : public Instrument
{
public:
  String();
  String(std::string name);
  ~String();
  void play();
private:
  //void staccato, pizzicato, legato;
};
