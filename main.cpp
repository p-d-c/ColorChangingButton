#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Button.H>
#include <cmath>

#define _USE_MATH_DEFINES

using namespace std;


class button : public Fl_Button {
        
public:
    
    button(int X, int Y, int W, int H, char *title = 0): Fl_Button(X, Y, W, H, title) {
    }
    
    virtual ~button() {
    }
    
    void draw() {
        fl_line_style(FL_SOLID, 5, 0);
        fl_begin_line();
        if (value()) {
           fl_color(FL_BLUE);
           fl_pie(x(), y(), w(), h(), 0.0, 360.0);
        } else {
           fl_color(FL_MAGENTA);
           fl_pie(x(), y(), w(), h(), 0.0, 360.0);
        }
        fl_end_line();
    }
};



int main() {
    Fl_Window win(600, 600, "ColorChangingButton");
    win.color(FL_WHITE);
    char *title = "";
    button *x = new button(100,100,100,100, title);
    win.show();
    return Fl::run();
}
