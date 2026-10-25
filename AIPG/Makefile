CC=gcc
CFLAGS= -Wall -Wextra -g
OBJS= main.o privacy.o

.PHONY: all clean run

all: AIPG

AIPG: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o AIPG

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

privacy.o: privacy.c
	$(CC) $(CFLAGS) -c privacy.c

clean:
	rm -f AIPG *.o

run: AIPG
	./AIPG

