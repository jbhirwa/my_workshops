# all: workshop

# workshop: main.o printArray.o arrayMax.o changeValue.o dynamicArray.o
# 	g++ -o workshop main.o printArray.o arrayMax.o changeValue.o dynamicArray.o

# main.o: main.cpp workshop.h printArray.cpp arrayMax.cpp changeValue.cpp dynamicArray.cpp
# 	g++ -c main.cpp

# run:
# 	./workshop
# clean: 
# 	rm -r main.o workshop printArray.o arrayMax.o changeValue.o dynamicArray.o

# you have a linker, that compiles object files into executable
# you have a target that compiles your source code into object file/s
#once you have object files up to date with source file you can then link them together to create an executable	

CC := g++
CFLAGS := -Wall -Wextra -std=c++11

SRC := main.cpp printArray.cpp arrayMax.cpp changeValue.cpp dynamicArray.cpp
OBJ := $(SRC:.cpp=.o)
EXE := workshop

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp workshop.h
	$(CC) $(CFLAGS) -c $< -o $@

run: $(EXE)
	./$(EXE)

clean:
	rm -f $(OBJ) $(EXE)