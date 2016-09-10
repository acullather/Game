CC = g++
OBJ_DIR = ./obj/
SRC_DIR = ./src/
INC_DIR = -I./includes/ -I./vulkan/ -I./glfw/include
LIB_DIR = -L./vulkan/ -L./glfw/lib
LIBS = -lglfw3 -lgdi32 -lopengl32
FILES = $(SRC_DIR)*.cpp
CFLAGS = -Wall -std=c++11
OUT_EXE = game

all: $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES) $(INC_DIR) $(CFLAGS) $(LIB_DIR) $(LIBS)
verbose: $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES) $(INC_DIR) $(CFLAGS) $(LIB_DIR) $(LIBS) -v
clean:
	rm -f $(OBJ_DIR)*.o
