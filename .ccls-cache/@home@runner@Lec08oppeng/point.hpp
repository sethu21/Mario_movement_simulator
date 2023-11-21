#ifndef POINT_HPP
#define POINT_HPP

using namespace std;
class Point{
private:
    int x{}; // Data member declaration
    int y{}; // Data member declaration
    int check_value(int val);
public:
    Point();  // Default constructor
    Point(int new_x, int new_y);
    //Point(int new_x=0, int new_y=0); // Constructor has default arguments
    int get_x() const;          // Accessor function
    int get_y() const;          // Accessor function
    void set_x(int x);          // Mutator function
    void set_y(int y);          // Mutator function
    void print_point() const; // Member function declaration
};
ostream& operator<<(std::ostream& out, const Point& p);
#endif