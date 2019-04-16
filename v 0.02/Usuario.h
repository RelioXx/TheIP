#pragma once
#include <string>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Usuario {
	
	string nombre;
	string apellidos;
	string email;
	int numUsuarios;
		

public:
	Usuario(string , string , string);
	~Usuario();
};

