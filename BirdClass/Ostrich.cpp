#include "Ostrich.h"
#include <string>
#include <iostream>
using namespace std;

Ostrich::Ostrich(){
	this->speed = 0;
	this->food = "";
}

Ostrich::Ostrich(int input_speed, string input_food){
	this->speed = input_speed;
	this->food = input_food;
}

int Ostrich::get_speed(){
	return this->speed;
}

void Ostrich::set_speed(int input_speed){
	this->speed = input_speed;
}

string Ostrich::get_food(){
	return this->food;
}

void Ostrich::set_food(string input_food){
	this->food = input_food;
}

void Ostrich::set_name(string name){
	bird::set_name("Ostrich");
}

void Ostrich::set_fly(bool fly){
	bird::set_fly(false);
}

void Ostrich::set_place_living(string place){
	bird::set_place_living("Africa");
}
void Ostrich::print(){
	bird::print();
	cout << "The speed for this ostrich is " << this->speed << endl;
	cout << "The ostrich eats " << this->food << endl;
}