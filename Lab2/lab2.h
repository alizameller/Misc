//graphs a function using ASCII art given the boundaries and the function 
//parameters in the form of y = ax^2 + bx + c 
void graph(double a, double b, double c, double step, int xleft, int xright, 
           int ybottom, int ytop);

void aRow(int a);

void rectangle(int a, int b);

void triangle(int a, int b);

void axes(double step, int xleft, int xright, int ybottom, int ytop);

void xAxis(int xleft, int xright);

void point(double a, double b, double c, double step, int x, int xleft, int xright, 
           int ybottom, int ytop, int y); 