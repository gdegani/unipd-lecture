EXECUTABLE="helloworld"

CC=gcc
GFLAGS=-g -Wall
LDFLAGS=

src = $(wildcard *.c)
obj = $(src:.c=.o)

default: all
all: main
rebuild: clean all

main: $(obj)
	$(CC)  $(CFLAGS) -o $(EXECUTABLE) $^ $(LDFLAGS)

.PHONY: clean
clean: 
	rm  *.o  $(EXECUTABLE)