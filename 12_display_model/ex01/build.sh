#!/bin/bash
g++ -Wall -o rectangles.exe rectangles.cpp ../../GUI/*.o -I../../GUI/ -lfltk_images -lfltk 

# Lesson learned: always put libs at the end of the compile statement!!!
