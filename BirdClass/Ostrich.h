#ifndef Ostrich_H
#define Ostrich_H

#include "Bird.h"
using namespace std;

class Ostrich : public bird{
private:
	int speed;
	string food;
public:
	Ostrich();
	Ostrich(int input_speed, string input_food);
	int get_speed();
	void set_speed(int);
	string get_food();
	void set_food(string);
	void set_name(string);
	void set_fly(bool fly);
	void set_place_living(string place);
	void print();
};

#endif