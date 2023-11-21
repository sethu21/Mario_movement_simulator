#include <iostream>


#include "point.hpp"
#include "creature.hpp"	

using namespace std;

int main() {
  int new_x{}, new_y{};
  Point p1{1,2};
  cout << "p1:" << p1 << endl;

  Creature mario{"Mario", {1,5}};
  Creature shrek{"Shrek", {3,4}};

  cout<< mario<< endl;
  cout << shrek<<endl;

  cout<< "Enter new x  coordinates for mario: "<< mario.get_name()<<"==> ";
  cin >> new_x;
  cout<< "Enter new y coordinates for mario: "<< mario.get_name()	<<"==> ";
  cin >> new_y;

  mario.move_to(new_x,new_y);
  cout<< mario.get_name() <<" changes location "<< endl;
  cout << mario << endl;

  mario.forward(10);
  cout << mario.get_name()<< "move to " << mario.get_direction()<<"by 10 steps "<< endl;
  cout << mario.get_name()<< "new location is "<< mario.get_position()<< endl;
  return 0;
}