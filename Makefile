CC = gcc
CFLAGS = -Wall -g
DEPS = stack.h
OBJ = main.o stack.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o main