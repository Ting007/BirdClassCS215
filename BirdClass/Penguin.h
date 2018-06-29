#ifndef Penguin_H
#define Penguin_H

#include "Bird.h"
#include <string>
using namespace std;


class Penguin : public bird{
private:
	bool can_swim;
	int number_of_eggs;
	string food;

public:
	Penguin();
	Penguin(bool swim);
	Penguin(bool swim, int eggs, string eating);
	bool get_can_swim();
	void set_can_swim(bool swim);
	int get_number_of_eggs();
	void set_number_of_eggs(int eggs);
	string get_food();
	void set_food(string);
	void set_name(string);
	void set_fly(bool fly);
	void set_place_living(string place);
	void print();
};

#endif