TARGET := add
C_SOURCES := $(shell ls *.c)
CC := gcc

default: all

all:
	$(CC) $(C_FLAGS) $(C_SOURCES) $(RUST_LIB) -o $(TARGET)

clean:
	rm -rf $(TARGET) *.o
