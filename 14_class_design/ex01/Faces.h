#ifndef FACES_H_
#define FACES_H_

#include "Graph.h"

using namespace Graph_lib;

struct Frowny : Circle {
    public:
        using Circle::Circle;
        void draw_lines() const;
};


struct Smiley : Circle {
    public:
        using Circle::Circle;
        void draw_lines() const;
};

#endif // FACES_H_