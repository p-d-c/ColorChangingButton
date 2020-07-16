#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Button.H>
#include <cmath>

#define _USE_MATH_DEFINES

using namespace std;

/*
class chip: public Fl_Button {
    
    // Circle with certain radius size
    // Center point will be determined randomly
    // once the center of the cookie is known
    
    // Color of chip can be whatever, can be same
    // for now
    
    public:
    
    int xscale; // = 200 - rand() % 5 + 1;
    int yscale; // = 200 + rand() % 5 + 1;
    
    chip(int X, int Y,  int W) : Fl_Button (X,Y,W, 0.0 , ""), xscale(X), yscale(Y) {
        
        // Center point anywhere within window
        
    };
    
    virtual void draw() {
        
        fl_line_style(FL_SOLID, 2, 0);
        fl_color(fl_rgb_color(rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1));
        fl_begin_line();
        fl_pie(xscale, yscale, 20, 20, 0.0, 360.0);
        fl_end_line();
        
    };
    
    
    // Make sure chip docesn't go past cookie border
    // by making sure the point is at least fitting
    // the radius
    
    // Randomize color
};

*/

     /*
class cookie: public Fl_Button {
    
    int xscale;
    int yscale;
    
    public:
    
    cookie(int X, int Y,  int W) : Fl_Button (X,Y,W, 100 , "Hi") {
        
        // Center point anywhere within window
        xscale = 200;
        yscale = 200;
        down_color(FL_MAGENTA);
        down_box(FL_NO_BOX);
        
    };
    
    virtual void draw() {
        
        fl_line_style(FL_SOLID, 2, 0);
        //fl_color(fl_rgb_color(245,222,179));
        fl_color(FL_YELLOW);
        fl_begin_line();
        fl_arc(xscale, yscale, 100.0, 0.0, 360.0);
        //void fl_pie(int x, int y, int w, int h, double a1, double a2)
        fl_end_line();
        
        // Draw chip
        chip *solochip = new chip(xscale + 100 - rand() % 50 + 1, yscale + 100 - rand() % 50 + 1, 10);
        solochip->draw();
        
        chip *chip2 = new chip(xscale + 10, yscale + 10, 10);
        chip2->draw();
        
    };

*/

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


/*

void button::draw() {
    
    
    if (value()) {
        //draw_circle(x(), y(), w(), h(), FL_BLUE);
        fl_color(FL_BLUE);
        /*
        fl_begin_line();
        fl_pie(100, 100, 50, 50, 0.0, 360.0);
        fl_end_line();
        */

/*
        fl_begin_line();
        fl_line_style(FL_SOLID, 5, 0);
        //fl_begin_line();
        int xpos = 100;
        int ypos = 100;
           for (int i = 0; i <= 360; i++) {
               xpos = cos(i * M_PI / 180.0) * w();
               ypos = sin(i * M_PI / 180.0) * w();
               fl_point(x()+ xpos, y() + ypos);
           }
        //fl_end_line();
    } else {
        //draw_circle(x(), y(), w(), h(), FL_MAGENTA);
        fl_color(FL_MAGENTA);
        /*
        fl_begin_line();
        fl_pie(100, 100, 50, 50, 0.0, 360.0);
        fl_end_line();
         */
/*
        fl_begin_line();
        fl_line_style(FL_SOLID, 5, 0);
        //fl_begin_line();
        int xpos = 100;
        int ypos = 100;
           for (int i = 0; i <= 360; i++) {
               xpos = cos(i * M_PI / 180.0) * w();
               ypos = sin(i * M_PI / 180.0) * w();
               fl_point(x()+ xpos, y() + ypos);
           }
        //fl_end_line();
    }
    fl_end_line();
}

*/


int main() {
    Fl_Window win(600, 600, "Color changer");
    win.color(FL_WHITE);
    char *title = "";
    button *x = new button(100,100,100,100, title);
    win.show();
    return Fl::run();
}


/*
To view your playlist    http://www.youtubeplaylist.org:80/play/p/MDAwMDI1NDcz
To edit your playlist    http://www.youtubeplaylist.org:80/edit/p/7B5fxtDeR6gdYbdzXSJscQ==
*/
