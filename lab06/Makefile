CC = g++
DEBUG = -g
CFLAGS = -Wall -std=gnu++11 $(DEBUG)
LFLAGS = -Wall $(DEBUG)
LAB = lab06

compile: $(LAB).out

$(LAB).out: $(LAB).cpp Stack.h
	$(CC) $(CFLAGS) -o $(LAB).out $(LAB).cpp

run: $(LAB).out
	./$(LAB).out

clean:
	rm *.out

