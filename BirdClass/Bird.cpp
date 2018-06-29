#include "Bird.h"
#include <iostream>

bird::bird(){
	this ->name = "";
	this ->can_fly = false;
	this ->wing_length = 0.0;
	this ->Place_of_living ="";
}

bird::bird(string input_name){
	name = input_name;
	can_fly = false;
	wing_length = 0.0;
	Place_of_living ="";
}

bird::bird(string input_name, bool fly, float length, string place){
	name = input_name;
	can_fly = fly;
	wing_length = length;
	Place_of_living = place;
}

string bird::get_name(){
	return this->name;
}

void bird::set_name(string input_name){
	this -> name = input_name;
}

bool bird::get_fly(){
	return this -> can_fly;
}

void bird::set_fly(bool input_fly){
	this->can_fly = input_fly;
}

void bird::print(){
	cout << "The bird is " << name << endl;
	if (can_fly){
		cout << "the bird can fly" << endl;
	}
	else{
		cout << "the bird can't fly "<<endl;
	}
	cout << "The length of wing is " << wing_length << endl;
	cout << "The place of living is at " << Place_of_living << endl;
}

float bird::get_wings_length(){
	return this->wing_length;
}

void bird::set_wings_length(float input_length){
	this->wing_length = input_length;
}

string bird ::get_place_living(){
	return this->Place_of_living;
}
void bird::set_place_living(string input_place){
	this->Place_of_living = input_place;
}