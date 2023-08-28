CC = gcc
CFLAGS = -Wall -Werror
LDFLAGS = -lcs50

all: calculator

calculator: calculator.c
	$(CC) $(CFLAGS) -o calculator calculator.c $(LDFLAGS)

clean:
	rm -f calculator
