#include "Simple_window.h"
#include "Faces.h"

int main(){
    //do something
    using namespace Graph_lib;	// our graphics facilities are in Graph_lib

	Point tl{100,100};		// to become top left corner of window
	Simple_window win{tl, 600, 600, "Frown Test"};

    // first frown
    Point p1{350, 350};
    int rad1{67};
    Frowny frowny1{p1, rad1};
    frowny1.set_color(Color::dark_blue);
    win.attach(frowny1);

    // first smiley
    Point p2{120, 120};
    int rad2{88};
    Smiley smiley1{p2, rad2};
    smiley1.set_color(Color::dark_magenta);
    win.attach(smiley1);

	win.wait_for_button();
    return 0;
}