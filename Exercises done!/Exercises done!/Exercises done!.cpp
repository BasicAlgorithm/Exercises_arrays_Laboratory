// Exercices_arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


int sumadesuselementos(int array[], int length) {
	int sum = 0;
	for (int i = 0; i < length; sum += array[i++]);
	cout << "la suma de los elementos del arreglo es: ";
	return sum;
}

int elmenorelemento(int array[], int length) {
	int menor;
	bool x = true;
	for (int i = 0; i < (length - 1); ++i) {
		if (array[i] <= array[i + 1]) {
			if (x == true) {
				menor = array[i];
				cout << "aqui" << endl;
				x = false;
			}
			if (menor > array[i]) menor = array[i];
			cout << "valor " << array[i] << endl;
			cout << "en menor " << menor << endl;
			cout << "\n";
		}
		else menor = array[i + 1];
	}
	cout << "el menor valor del arreglo es: ";
	return menor;
}

int numerosperfectos(int array[], int length) {
	int r = 0;
	int s = 0;
	for (int i = 0; i < length; ++i) {
		for (int x = 1; x < array[i]; x++) {
			if (array[i] % x == 0) r += x;
		}
		//cout << "el valor analizado es: " << array[i] << endl;
		//cout << "la suma es: "<< r << endl;
		//cout << "\n";
		if (r == array[i]) { cout << "perfecto" << array[i] << endl; s++; }
		r = 0;
	}
	cout << "la cantidad de numeros perfectos es: ";
	return s;
}

int ascendente(int array[], int length) {
	int swap;
	int a, b;
	a = length;
	b = length;
	while (a != 0) {
		for (int i = 0; i < length - 1; ++i) {
			if (array[i] > array[i + 1]) {
				//cout << "valor i " << array[i] << endl;
				//cout << "valor i+1 " << array[i+1] << endl;
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
			}
		}
		length--;
		a--;
	}

	cout << "en forma ascendente el arreglo es: ";
	for (int x = 0; x < b; x++) cout << "[" << array[x] << "] ";
	cout << "\n";
	return 0;
}


int descendente(int array[], int length) {
	int swap;
	int a, b;
	a = length;
	b = length;
	while (a != 0) {
		for (int i = 0; i < length - 1; ++i) {
			if (array[i] < array[i + 1]) {
				//cout << "valor i " << array[i] << endl;
				//cout << "valor i+1 " << array[i + 1] << endl;
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
			}
		}
		length--;
		a--;
	}

	cout << "en forma descendiente el arreglo es: ";
	for (int x = 0; x < b; x++) cout << "[" << array[x] << "] ";
	cout << "\n";
	return 0;
}

int invertir(int array[], int length) {
	int swap;
	int a, b;
	a = length / 2;
	b = length;
	for (int i = 0; i < a; ++i) {
		//cout << "valor i " << array[i] << endl;
		//cout << "valor i+1 " << array[i + 1] << endl;
		swap = array[i];
		array[i] = array[length - 1];
		array[length - 1] = swap;
		length--;
	}

	cout << "en forma invertida el arreglo es: ";
	for (int x = 0; x < b; x++) cout << "[" << array[x] << "] ";
	cout << "\n";
	return 0;
}

int main() {
	int arreglo[] = { 15, 30, 35, 202, 10, 5, 25,100 };
	cout << invertir(arreglo, 8) << endl;
	return 0;
}
