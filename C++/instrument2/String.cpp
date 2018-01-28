#include "String.h"

String::String() : Instrument()
{

}

String::String(std::string name) : Instrument(name) {}



void String::play()
{
  std::cout << "Ploink" << std::endl;
}

String::~String()
{

}
