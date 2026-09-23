CC=gcc
CFLAGS= -Wall -Wextra -g
OBJS = main.o privacy.o

.PHONY: all clean run

all: Tech_spike

Tech_Spike: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o Tech_Spike

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

privacy.o: privacy.c
	$(CC)  $(CFLAGS) -c privacy.c
clean: 
	rm -f Tech_Spike *.o
run: Tech_Spike
	./Tech_Spike

