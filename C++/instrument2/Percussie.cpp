#include "Percussie.h"

Percussie::Percussie() : Instrument()
{

}

Percussie::Percussie(std::string name) : Instrument(name) {}



void Percussie::play()
{
  std::cout << "Tok!" << std::endl;
}

Percussie::~Percussie()
{

}
