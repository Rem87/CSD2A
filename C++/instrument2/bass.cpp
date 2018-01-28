#include "Bass.h"

Bass::Bass() : Instrument()
{

}

Bass::Bass(std::string name) : Instrument(name) {}


void Bass::play()
{
  std::cout << "Doennggg" << std::endl;
}

Bass::~Bass()
{

}
