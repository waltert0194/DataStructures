CC = g++
DEBUG = -g
CFLAGS = -Wall -std=gnu++11 $(DEBUG)
LFLAGS = -Wall $(DEBUG)
LAB = lab09

compile: $(LAB).out

$(LAB).out: $(LAB).cpp
	$(CC) $(CFLAGS) -o $(LAB).out $(LAB).cpp

run: $(LAB).out
	./$(LAB).out db.txt > out.txt
	diff -s out.txt out_correct.txt

clean:
	rm *.out

