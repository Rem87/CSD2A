#!  /bin/bash

# compile both files
g++ -c Instrument.cpp
g++ -c Makesound.cpp

# link everything and produce executable
g++ -o Instrument Instrument.o Makesound.o
