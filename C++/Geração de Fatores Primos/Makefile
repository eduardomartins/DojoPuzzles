CC = g++
CFLAGS = -Wall
DEPS = ../include/utilits.h
OBJ = main.o utilits.o

%.o: %.cpp $(DEPS)
        $(CC) $(CFLAGS) -c -o $@ $<

main: $(OBJ)
        g++ $(CFLAGS) -o $@ $^

