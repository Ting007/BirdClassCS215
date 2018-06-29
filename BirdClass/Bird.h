#ifndef bird_H
#define bird_H

#include <string>
using namespace std;

class bird{
private:
	string name;
	bool can_fly;
	float wing_length;
	string Place_of_living;

public:
	bird();//constructor without parameter
	bird(string input_name);//constructor with one arg name
	bird(string, bool, float, string);//constructor with three argu
	string get_name();//return the name of the bird
	void set_name(string input_name);//set the name of the bird
	bool get_fly();//return if the bird can fly or not
	void set_fly(bool input_fly);//input if the bird can fly or not
	void print();//print all the information input
	float get_wings_length();//return the length of the wings accessor
	void set_wings_length(float input_length);//mutator input the length of wings
	string get_place_living();// accesor return the place where the bird lives
	void set_place_living(string input_place);//mutator enter the place where the birds lives
};

#endif