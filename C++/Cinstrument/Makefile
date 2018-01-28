#target: source
#	cp source target

#################################

Instrument: Makesound.o Instrument.o
	g++ -o Instrument Instrument.o Makesound.o

Makesound.o: Makesound.cpp
	g++ -c Makesound.cpp

hello.o: Instrument.cpp
	g++ -c Instrument.cpp
