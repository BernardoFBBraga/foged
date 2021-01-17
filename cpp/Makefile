# Makefile for Foundations of Game Development study
TARGET_EXEC := run

BUILD_DIR := ./build
SRC_DIRS := ./src

SHELL = /bin/sh
.SUFFIXES: .cpp .o
# *****************************************************
# Variables to control Makefile operation
 
CC = g++

# Find all the C++ files we want to compile
SRCS := $(shell find $(SRC_DIRS) -name *.cpp)
# Every folder in ./src will need to be passed to GCC so that it can find header files
INC_DIRS := $(shell find $(SRC_DIRS) -type d)
# Add a prefix to INC_DIRS. So moduleA would become -ImoduleA. GCC understands this -I flag
INC_FLAGS := $(addprefix -I,$(INC_DIRS)) 

CFLAGS := $(INC_FLAGS) -Wall -g

OBJS := $(SRC_DIRS)/Vector3D.h $(BUILD_DIR)/main.o

# ****************************************************
# Targets needed to bring the executable up to date
 
$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ $(OBJS)
 
$(BUILD_DIR)/main.o: $(SRC_DIRS)/main.cpp $(SRC_DIRS)/Vector3D.h
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -r $(BUILD_DIR)

