.PHONY: clean

all: computepi

CC=gcc
CFLAGS=-g -Wall

computepi: main.o compute.o
	@$(CC) $(CFLAGS) -o $@ $^ -lpthread

main.o: main.c
	@$(CC) $(CFLAGS) -c -o $@ $<

compute.o: compute.c
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -rf *.o computepi
