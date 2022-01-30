# simple makefile for compiling
#
# Nirre Pluf 
# 1/30/2022
# CSC 250 Lab 3

SOURCE = lab3.c
EXECUTABLE = lab3
COMPILE_FLAGS = -ansi -pedantic -Wall -g

all: $(SOURCE)
	gcc $(COMPILE_FLAGS) -o $(EXECUTABLE) $(SOURCE)

tidy:
	clang-tidy -checks='*' $(SOURCE) -- -std=c99

clean:
	rm -rf $(EXECUTABLE)

