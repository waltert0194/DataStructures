CC = g++
DEBUG = -g
CFLAGS = -Wall -std=gnu++11 $(DEBUG)
LFLAGS = -Wall $(DEBUG)
LAB = lab05

compile: $(LAB).out

$(LAB).out: $(LAB).cpp
	$(CC) $(CFLAGS) -o $(LAB).out $(LAB).cpp

run: $(LAB).out
	./$(LAB).out 10842 -base 29

clean:
	rm *.out

