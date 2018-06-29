/*
Name: Ting	Wang	
Date: 10/30/2014
Program: Introduction to Object Oriented.
Purpose:learning to write class definition, understand inheritance, split program into separate class file.
Preconditions: set up the class of bird, penguin and ostrich. define the header information, data members and function.
Postconditions: generate object, pointer and array of each class and be able to use them.
*/

#include <iostream>
#include "Bird.h"
#include "Penguin.h"
#include "Ostrich.h"
#include <string>
using namespace std;

int menu();
void creat_use_one_bird();
void creat_use_bird_pointer();
void create_and_use_an_array_of_bird_objects();
void creat_use_one_penguin();
void creat_use_penguin_pointer();
void create_and_use_an_array_of_penguin_objects();
void creat_use_one_ostrich();
void creat_use_ostrich_pointer();
void create_and_use_an_array_of_ostrich_objects();

//creat and use one bird object
void creat_use_one_bird(){
	/*
	creat  a bird object
	and ask the user to set differnt value to the data member of the bird
	display all the member on the console;
	*/
	
	bird sample_bird;
	//set the name of the sample_bird
	string name;
	cout << "enter the name of the bird: ";
	cin >> name;
	cout << endl;
	sample_bird.set_name(name);
	//set the fly of the sample_bird
	bool fly;
	cout << "Does the bird fly ? (1:true/ 0:false)";
	cin >> fly;
	cout << endl;
	sample_bird.set_fly(fly);
	//set the wings length
	float length;
	cout << "What is the length of the wing?";
	cin >> length;
	cout << endl;
	sample_bird.set_wings_length(length);
	//set the place of living
	string place;
	cout << "Where does this bird lives?";
	cin >> place;
	cout << endl;
	sample_bird.set_place_living(place);
	sample_bird.print();
	cout << endl;
}
//creat and use a pointer to a bird object
void creat_use_bird_pointer(){
	/*
	creat an point to a bird object
	and ask the user to set differnt value to the data member of the bird
	display all the member on the console;
	*/
	bird* bird_pt = new bird;
	
	//set the name of the sample_bird
	string name;
	cout << "enter the name of the bird: ";
	cin >> name;
	cout << endl;
	bird_pt -> set_name(name);
	//set the fly of the sample_bird
	bool fly;
	cout << "Does the bird fly ? (1:true/ 0:false)";
	cin >> fly;
	cout << endl;
	bird_pt -> set_fly(fly);
	//set the wings length
	float length;
	cout << "What is the length of the wing?";
	cin >> length;
	cout << endl;
	bird_pt -> set_wings_length(length);
	//set the place of living
	string place;
	cout << "Where does this bird lives?";
	cin >> place;
	cout << endl;
	bird_pt -> set_place_living(place);
	bird_pt -> print();
	cout << endl;
}

//Create and use an array of Bird objects :
void create_and_use_an_array_of_bird_objects() { // define an array of bird objects
	/*
	creat an point to a bird object
	and ask the user to set differnt value to the data member of the bird
	display all the member on the console;
	*/
	bird Sample[10];
	string birdname;
	//read birds information
	for (int i = 0; i < 10; i++) {
		
		cout << "enter the name of the bird at position " << i + 1 << " : ";
		cin >> birdname;
		Sample[i].set_name(birdname);
		cout << endl;
		//set can_fly or not
		bool fly;
		cout << "Does the bird fly ? (1:true/ 0:false)" << i + 1 << " : ";
		cin >> fly;
		cout << endl;
		Sample[i].set_fly(fly);
		//set the wings length
		float length;
		cout << "What is the length of the wing at position " << i + 1 << " ; ";
		cin >> length;
		cout << endl;
		Sample[i].set_wings_length(length);
		//set the place of living
		string place;
		cout << "Where does this bird lives at position " << i + 1 << " : ";
		cin >> place;
		cout << endl;
		Sample[i].set_place_living(place);
		cin.ignore(100, '\n');
		cin.clear();
	}
	// show birds information
	cout << "Here is a list of the birds infromation that we have: " << endl;
	for (int i = 0; i<10; i++) {
		cout << "Here is the information on bird at position" << i + 1 << endl;
		Sample[i].print();
		cout << endl;
	}
		
}

void creat_use_one_penguin(){
	/*
	creat a penguin object
	and ask the user to set differnt value to the data member of the bird
	display all the member on the console;
	*/
	Penguin sample_bird;
	//set the name of the sample_bird
	string name;
	cout << "Enter the name of the penguin: ";
	cin >> name;
	cout << endl;
	sample_bird.set_name(name);
	//set the fly of the sample_bird
	bool fly;
	cout << "Does the penguin fly ? (1:true/ 0:false)";
	cin >> fly;
	cout << endl;
	sample_bird.set_fly(fly);
	//set the wings length
	float length;
	cout << "What is the length of the wing?";
	cin >> length;
	cout << endl;
	sample_bird.set_wings_length(length);
	//set the place of living
	string place;
	cout << "Where does this penguin living? ";
	cin >> place;
	cout << endl;
	sample_bird.set_place_living(place);
	//set can_swim
	bool swim;
	cout << "Can this penguin swim? (1:true/ 0:false)";
	cin >> swim;
	cout << endl;
	sample_bird.set_can_swim(swim);
	//set number of eggs
	int num_eggs;
	cout << "How many eggs does penguin has ? ";
	cin >> num_eggs;
	cout << endl;
	sample_bird.set_number_of_eggs(num_eggs);
	//set food;
	string food;
	cout << "What kind of food does penguin like? ";
	cin >> food;
	cout << endl;
	sample_bird.set_food(food);
	sample_bird.print();
	cout << endl;
}

void creat_use_penguin_pointer(){
	/*
	creat a pointer to one penguin object
	and ask the user to set differnt value to the data member of the bird
	display all the member on the console;
	*/
	Penguin* bird_pt = new Penguin;

	//set the name of the sample_bird
	string name;
	cout << "enter the name of the penguin: ";
	cin >> name;
	cout << endl;
	bird_pt->set_name(name);
	//set the fly of the sample_bird
	bool fly;
	cout << "Does this penguin fly ? (1:true/ 0:false)";
	cin >> fly;
	cout << endl;
	bird_pt->set_fly(fly);
	//set the wings length
	float length;
	cout << "What is the length of the wing?";
	cin >> length;
	cout << endl;
	bird_pt->set_wings_length(length);
	//set the place of living
	string place;
	cout << "Where does this penguin lives?";
	cin >> place;
	cout << endl;
	bird_pt->set_place_living(place);
	//set can_swim
	bool swim;
	cout << "Can this penguin swim? (1:true/ 0:false)";
	cin >> swim;
	cout << endl;
	bird_pt -> set_can_swim(swim);
	//set number of eggs
	int num_eggs;
	cout << "How many eggs does penguin has ? ";
	cin >> num_eggs;
	cout << endl;
	bird_pt ->set_number_of_eggs(num_eggs);
	//set food;
	string food;
	cout << "What kind of food does penguin like? ";
	cin >> food;
	cout << endl;
	bird_pt -> set_food(food);
	bird_pt->print();
	cout << endl;
}

void create_and_use_an_array_of_penguin_objects() { 
	/*
	creat an array of penguin object
	and ask the user to set differnt value to the data member of the bird
	display all the member on the console;
	*/
	// define an array of bird objects
	Penguin Sample[10];
	string birdname;
	//read birds information
	for (int i = 0; i < 10; i++) {
		cout << "enter the name of the penguin at position " << i + 1 << " : ";
		cin >> birdname;
		Sample[i].set_name(birdname);
		cout << endl;
		//set can_fly or not
		bool fly;
		cout << "Does the penguin fly ? (1:true/ 0:false)" << i + 1 << " : ";
		cin >> fly;
		cout << endl;
		Sample[i].set_fly(fly);
		//set the wings length
		float length;
		cout << "What is the length of the wingth at position " << i + 1 << " ; ";
		cin >> length;
		cout << endl;
		Sample[i].set_wings_length(length);
		//set the place of living
		string place;
		cout << "Where does this penguin lives at position " << i + 1 << " : ";
		cin >> place;
		cout << endl;
		Sample[i].set_place_living(place);
		//set can_swim
		bool swim;
		cout << "Can this penguin swim? (1:true/ 0:false)";
		cin >> swim;
		cout << endl;
		Sample[i].set_can_swim(swim);
		//set number of eggs
		int num_eggs;
		cout << "How many eggs does penguin has ? ";
		cin >> num_eggs;
		cout << endl;
		Sample[i].set_number_of_eggs(num_eggs);
		//set food;
		string food;
		cout << "What kind of food does penguin like? ";
		cin >> food;
		cout << endl;
		Sample[i].set_food(food);

		cin.ignore(100, '\n');
		cin.clear();
	}
	// show birds information
	cout << "Here is a list of the penguins infromation that we have: " << endl;
	for (int i = 0; i<10; i++) {
		cout << "Here is the information on penguins at position" << i + 1 << endl;
		Sample[i].print();
		cout << endl;
	}

}

void creat_use_one_ostrich(){
	/*
	creat an orstrich object
	and ask the user to set differnt value to the data member of ostrich
	display all the member on the console;
	*/
	Ostrich sample_ostrich;
	//set the name of the sample_bird
	string name;
	cout << "enter the name of the ostrich: ";
	cin >> name;
	cout << endl;
	sample_ostrich.set_name(name);
	//set the fly of the sample_bird
	bool fly;
	cout << "Does the ostrich fly ? (1:true/ 0:false)";
	cin >> fly;
	cout << endl;
	sample_ostrich.set_fly(fly);
	//set the wings length
	float length;
	cout << "What is the length of the wing?";
	cin >> length;
	cout << endl;
	sample_ostrich.set_wings_length(length);
	//set the place of living
	string place;
	cout << "Where does this ostrich lives?";
	cin >> place;
	cout << endl;
	sample_ostrich.set_place_living(place);
	//set speed
	int speed = 0;
	cout << "What is the speed of this ostrich? ";
	cin >> speed;
	cout << endl;
	sample_ostrich.set_speed(speed);
	//set food;
	string food;
	cout << "What kind of food does ostrich like? ";
	cin >> food;
	cout << endl;
	sample_ostrich.set_food(food);
	sample_ostrich.print();
	cout << endl;
}

void creat_use_ostrich_pointer(){
	/*
	creat an point to a orstrich object
	and ask the user to set differnt value to the data member of ostrich
	display all the member on the console;
	*/
	Ostrich* ostrich_pt = new Ostrich;
	//set the name of the sample_bird
	string name;
	cout << "enter the name of the ostrich: ";
	cin >> name;
	cout << endl;
	ostrich_pt ->set_name(name);
	//set the fly of the sample_bird
	bool fly;
	cout << "Does the ostrich fly ? (1:true/ 0:false)";
	cin >> fly;
	cout << endl;
	ostrich_pt->set_fly(fly);
	//set the wings length
	float length;
	cout << "What is the length of the wing?";
	cin >> length;
	cout << endl;
	ostrich_pt->set_wings_length(length);
	//set the place of living
	string place;
	cout << "Where does this ostrich lives?";
	cin >> place;
	cout << endl;
	ostrich_pt->set_place_living(place);
	//set speed
	int speed = 0;
	cout << "What is the speed of this Ostrich? ";
	cin >> speed;
	cout << endl;
	ostrich_pt->set_speed(speed);
	//set food;
	string food;
	cout << "What kind of food does ostrich like? ";
	cin >> food;
	cout << endl;
	ostrich_pt->set_food(food);
	ostrich_pt->print();
	cout << endl;
}

void create_and_use_an_array_of_ostrich_objects(){
	/*
	creat an arry of ostrich objects 
	by asking the user to input a lot of information one by one. 
	save the data member for each member in the array
	and print in on the console.
	*/
	Ostrich Sample[10];
	string birdname;
	//read birds information
	for (int i = 0; i < 10; i++) {

		cout << "enter the name of the ostrich at position " << i + 1 << " : ";
		cin >> birdname;
		Sample[i].set_name(birdname);
		cout << endl;
		//set can_fly or not
		bool fly;
		cout << "Does this ostrich fly ? (1:true/ 0:false)" << i + 1 << " : ";
		cin >> fly;
		cout << endl;
		Sample[i].set_fly(fly);
		//set the wings length
		float length;
		cout << "What is the length of the wing at position " << i + 1 << " ; ";
		cin >> length;
		cout << endl;
		Sample[i].set_wings_length(length);
		//set the place of living
		string place;
		cout << "Where does this ostrich lives at position " << i + 1 << " : ";
		cin >> place;
		cout << endl;
		Sample[i].set_place_living(place);
		//set speed
		int speed = 0;
		cout << "What is the speed of this ostrich? ";
		cin >> speed;
		cout << endl;
		Sample[i].set_speed(speed);
		//set food;
		string food;
		cout << "What kind of food does ostrich like? ";
		cin >> food;
		cout << endl;
		Sample[i].set_food(food);
		cin.ignore(100, '\n');
		cin.clear();
	}
	// show birds information
	cout << "Here is a list of the ostriches infromation that we have: " << endl;
	for (int i = 0; i<10; i++) {
		cout << "Here is the information on ostrich at position" << i + 1 << endl;
		Sample[i].print();
		cout << endl;
	}

}

int menu(){
	/*
	display all the program options 
	and ask the user the choose the program
	if the input 1-9 return with the number of program
	if the letter, program end
	other number expect 1-9, rerun the program
	*/
	int choice = 0;
	bool flag = true;
	do{
		cout << "Choose the object you want to creat and use:\n";
		cout << "1. Create and use one Bird object\n";
		cout << "2. Create and use a pointer to a Bird object\n";
		cout << "3. Create and use an array of Bird objects\n";
		cout << "4. Create and use one Penguin object\n";
		cout << "5. Create and use a pointer to a Penguin object\n";
		cout << "6. Create and use an array of Penguin objects\n";
		cout << "7. Create and use one Ostrich object\n";
		cout << "8. Create and use a pointer to a Ostrich object\n";
		cout << "9. Create and use an array of Ostrich objects\n";
		cout << "Press any other letter to Quit.";
		cout << endl;
		cin >> choice;
		if (cin.fail()){
			cout << "Program ended\n";
			return -1; // if the letter entered, then return -1
		}
		else if (choice <1 || choice > 9){
			cout << "invalid input. \n";
		}
		else{
			flag = false;
		}
	} while (flag);
	return choice;
}

int main(){
	/*
	take the choice from menu and run the correspoding program 1-9
	or end the program. if input is a letter.
	*/
	int opt = 0;
	do{
		opt = menu();
		switch(opt){
			case(-1) : cout << "Program ended.\n"; return 0;
			case(1) : creat_use_one_bird(); break;
			case(2) : creat_use_bird_pointer(); break;
			case(3) : create_and_use_an_array_of_bird_objects(); break;
			case(4) : creat_use_one_penguin(); break;
			case(5) : creat_use_penguin_pointer(); break;
			case(6):create_and_use_an_array_of_penguin_objects();break;
			case(7) : creat_use_one_ostrich(); break;
			case(8) : creat_use_ostrich_pointer(); break;
			case(9) : create_and_use_an_array_of_ostrich_objects(); break;
		}
	} while (opt > 0 && opt <= 9);

	system("pause");
	
	return 0;
}