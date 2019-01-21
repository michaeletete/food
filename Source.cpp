#include <stdio.h>
#include <iostream>
#include "nom.h"
#include <string>

using namespace std;

int main() {
	string name, food;
	int num;
	cout << "\nWho u ";
	cin >> name;
	cout << "\neat or drink ";
	cin >> food;
	cout << "\nhow many ";
	cin >> num;
	if (food == "eat")
		cout << name << " eats " << num << " " << GetRandomFoodItem();
	else
		cout << name << " drinks " << num << " " << GetRandomDrinkItem();
	cout << "\n\n";
	system("pause");
}