#include <iostream>
#include <string>

#include "point.hpp"
#include "creature.hpp"	

using namespace std;

Creature::Creature():name{}, location{}  {}
Creature::Creature(const string& name, const Point& location):
                    name{name}, location{location}  {}

Creature::Creature(const string& name, const Point& location, const string& direction) : 
                    name(name), location(location) {}

string Creature::get_name() const{
  return name;
}
string Creature::get_direction() const{
  return direction;
}
const Point& Creature::get_position() const{
  return location;
}
void Creature::move_to(int new_x, int new_y){
  location.set_x(new_x);
  location.set_y(new_y);
}

/*void Creature::set_direction(int dir){
  direction = dir;
}*/
 void Creature::forward(int steps){
   if (direction == "right") {
       location.set_x(location.get_x()+steps);
   } else if (direction == "down") {
       location.set_y(location.get_y()-steps);
   } else if (direction == "left") {
       location.set_x(location.get_x()-steps);
   } else if (direction == "right") {
     location.set_y(location.get_y()+steps);
   }
 }


ostream& operator<<(ostream& out, const Creature& p){
  out << p.get_name() << " is at "<<p.get_position()<<" and itš direction " << p.get_direction();
  return out;
}