#ifndef CREATURE_HPP
#define CREATURE_HPP

#include <iostream>
#include <string>
#include "point.hpp"
using namespace std;


class Creature{
private:
      string name{};
      Point  location{};
      string direction{"right"};
public:
      Creature();
      Creature(const string& name, const Point& location);
      Creature(const string& name, const Point& location, const string& direction);
      string get_name() const;
      string get_direction() const;
      const Point& get_position() const;
      void move_to(int new_x, int new_y);
        
      //void set_direction(Direction dir);
      void forward(int steps=1);
      
      friend  ostream& operator<<(ostream& out, const Creature& p);

};
ostream& operator<<(ostream& out, const Creature& p);  
#endif