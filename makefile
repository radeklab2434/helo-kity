SOURCES = main.cpp class.cpp
OBJ = main.o class.o

release:
	g++ -c $(SOURCES)
	g++ $(OBJ) -o test
debug:
	g++ -c -g $(SOURCES)
	g++ -g $(OBJ) -o testD
clean:
	rm -fr *.o $(OBJ)
