#include "Penguin.h"
#include <iostream>


Penguin::Penguin(){
	this ->can_swim = true;
	this ->number_of_eggs = 0;
	this ->food = "";
}

Penguin::Penguin(bool swim){
	this ->can_swim = swim;
}


Penguin::Penguin(bool swim, int eggs, string eating){
	this ->can_swim = swim;
	this->number_of_eggs = eggs;
	this->food = eating;
}

bool Penguin::get_can_swim(){
	return this->can_swim;
}

void Penguin::set_can_swim(bool swim){
	this->can_swim = swim;
}

int Penguin::get_number_of_eggs(){
	return this->number_of_eggs;
}

void Penguin::set_number_of_eggs(int eggs){
	this->number_of_eggs = eggs;
}

string Penguin::get_food(){
	return this->food;
}

void Penguin::set_food(string eating){
	this->food = eating;
}


void Penguin::set_fly(bool fly){
	bird::set_fly(false);
}

void Penguin::set_place_living(string place){
	bird::set_place_living("south pole");
}

void Penguin::set_name(string name){
	bird::set_name("Penguin");
}
void Penguin::print(){
	bird::print();
	
	if (can_swim){
		cout << "This penguin can swim" << endl;
	}
	else{
		cout << "This penguin can't swim " << endl;
	}
	cout << "The number of eggs for this penguin is " << this->number_of_eggs << endl;
	cout << "The penguin eats " << this->food << endl;

}