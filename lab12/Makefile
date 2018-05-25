CC = g++
DEBUG = -g
CFLAGS = -Wall -std=gnu++11 $(DEBUG)
LFLAGS = -Wall $(DEBUG)
LAB = lab12

compile: $(LAB).out

$(LAB).out: $(LAB).cpp
	$(CC) $(CFLAGS) -o $(LAB).out $(LAB).cpp

run: $(LAB).out
	./$(LAB).out 3 1 4 1 5 9 2 6 5 3 5 8 9 7 9
	
clean:
	rm *.out

