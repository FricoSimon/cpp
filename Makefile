CC = gcc
CFLAGS = -Wall -Werror
LDFLAGS = -lcs50

all: hello

hello: hello.c
	$(CC) $(CFLAGS) -o hello hello.c $(LDFLAGS)

clean:
	rm -f hello
