CC = g++
OBJ_DIR = ./obj/
SRC_DIR = ./src/
INC_DIR = -I./src/ -I./vulkan/
FILES = $(SRC_DIR)*.cpp
CFLAGS = -Wall -std=c++11
OUT_EXE = game

all: $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES) $(INC_DIR) $(CFLAGS)
verbose: $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES) $(INC_DIR) $(CFLAGS) -v
clean:
	rm -f $(OBJ_DIR)*.o
