#include "instrument.h"

class Percussie : public Instrument
{
public:
  Percussie();
    Percussie(std::string name);
  ~Percussie();
  void play();
private:
  //void staccato, pizzicato, legato;
};
