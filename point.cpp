#include <iostream>
#include "point.hpp"
using namespace std;


Point::Point(){};

Point::Point(int new_x, int new_y)
    : x{check_value(new_x)}, y{check_value(new_y)}{}

int Point::get_x() const{
    return x;
}
int Point::get_y() const{
    return y;
}
void Point::set_x(int x){
    this->x = check_value(x);
}
void Point::set_y(int y){
    this->y = check_value(y);
}

int Point::check_value(int val){
    if(val >= 0)
        return val;
    else
        return 0;
}

ostream& operator<<(ostream& out, const Point& p){
    out << "("  << p.get_x() << ", " << p.get_y() << ")";
    return out;
}