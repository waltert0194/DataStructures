CC = g++
DEBUG = -g
CFLAGS = -Wall -std=gnu++11 $(DEBUG)
LFLAGS = -Wall $(DEBUG)
LAB = lab08

compile: $(LAB).out

$(LAB).out: $(LAB).cpp
	$(CC) $(CFLAGS) -o $(LAB).out $(LAB).cpp

run: $(LAB).out
	./$(LAB).out '( 5.5 + 3 ) * 2 - ( ( 0.5 / 0.25 ) + 39 * 10.5 - ( 3 + 2 + 4 ) )'
clean:
	rm *.out

