
playSound: playSound.o instrument.o string.o bass.o percussie.o
	g++ -o playSound playSound.o instrument.o string.o bass.o percussie.o

playSound.o: playSound.cpp
	g++ -c playSound.cpp

instrument.o: instrument.cpp instrument.h
	g++ -c instrument.cpp

string.o: String.cpp String.h
	g++ -c String.cpp

bass.o: Bass.cpp Bass.h
	g++ -c Bass.cpp

percussie.o: Percussie.cpp Percussie.h
		g++ -c Percussie.cpp

clean:
	rm -f *.o playSound
