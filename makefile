all: main display game
	g++ lib/main.o lib/display.o lib/game.o -o bin/main.exe
	
main: src/main.cpp 
	g++ -c src/main.cpp -Iinclude -o lib/main.o
	
display: src/display.cpp
	g++ -c  src/display.cpp -Iinclude -o lib/display.o
	
game: src/game.cpp
	g++ -c  src/game.cpp -Iinclude -o lib/game.o

clean:
	rm lib/*.o
	rm bin/*.exe