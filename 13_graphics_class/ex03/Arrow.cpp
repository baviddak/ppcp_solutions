#include "Arrow.h"

Arrow::Arrow(Point aa, Point bb)
    : a{aa}, b{bb}
{
    // do geometry here
    
    // get points for arrow head -> this is the tricky bit
    // Point c{40, 20};
    // Point d{20, 40};

    // draw arrow head
    // this->add_point(a);
    // this->add_point(c);
    // this->add_point(d);
    // this->black();

    // add(aa);
}
Arrow::~Arrow(){}

void Arrow::draw_lines() const{
    double start;
    double end;

    // draw main line
    fl_line(a.x, a.y, b.x, b.y);

    if(a.x >= b.x && a.y <= b.y)
    {
        // in Q1
        start = 135.0 + (atan(abs(static_cast<float>(a.y - b.y)/static_cast<float>(a.x-b.x))) * 180.0)/PI;
        end = 225.0 + (atan(abs(static_cast<float>(a.y - b.y)/static_cast<float>(a.x-b.x))) * 180.0)/PI;

    }else if (a.x < b.x && a.y < b.y)
    {
        // in Q2
        start = -45.0 - (atan(abs(static_cast<float>(a.y - b.y)/static_cast<float>(a.x-b.x))) * 180.0)/PI;
        end = 45.0 - (atan(abs(static_cast<float>(a.y - b.y)/static_cast<float>(a.x-b.x))) * 180.0)/PI;

    }else if (a.x < b.x && a.y >= b.y)
    {
        // in Q3
        start = -45.0 + (atan(abs(static_cast<float>(a.y - b.y)/static_cast<float>(a.x-b.x))) * 180.0)/PI;
        end = 45.0 + (atan(abs(static_cast<float>(a.y - b.y)/static_cast<float>(a.x-b.x))) * 180.0)/PI;

    }else if (a.x >= b.x && a.y >= b.y)
    {
        // in Q4
        start = 135.0 - (atan(abs(static_cast<float>(a.y - b.y)/static_cast<float>(a.x-b.x))) * 180.0)/PI;
        end = 225.0 - (atan(abs(static_cast<float>(a.y - b.y)/static_cast<float>(a.x-b.x))) * 180.0)/PI;
        
    }
    fl_pie(a.x - arrow_size/2, a.y - arrow_size/2, arrow_size, arrow_size, start, end);
    
    
}