//CREADO POR RelioXxCorp
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif


//NO TOCAR LAS LIBRERIAS BAJO NINGUN CONCEPTO
//LIBRERIAS QUE HE AÑADIDO YO(RLX) PARA HECER CONCEPT OBJECTS Y LLAMADAS AL SISTEMA SON: <objbase.h> <shlwapi.h> <shlobj.h> <windows.h> <tchar.h>

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "sqlite3.h" 
#include <shlobj.h>
#include <shlwapi.h>
#include <objbase.h>
#include <windows.h>
#include <tchar.h>
#include <string.h>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <mmdeviceapi.h>
#include <endpointvolume.h>


//Headers Nuestros
#include "Presentacion.h"
#include "Profesor.h"
#include "Alumno.h"
#include "Grado.h"
#include "Disponibilidad.h"

//WINDOWS.H MIERDAS DE SU FUNCINAMIENTO
// Global variables

// The main window class name.
//FIN DE LAS MIERDAS DE WINDOWS.h




using namespace std;

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
   int i;
   for(i = 0; i<argc; i++) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   const char *sql;
   const char* data = "Callback function called";
   printf("Bienvenido %s,\n\n",  getenv("USERNAME"));
   int opcionmenu1 = 0;
   system("title THE IP Base de datos");
   string line;
   ifstream ficheroalumnos;
   

   printf("Bienvenido a la shell de SQLITE modifica por\n"
	   "RLX system Technologies LTD Digital Innovation and Research\n\n\n"
   );

   printf("Bienvenido al menu De Sqlite de RLX Technologies\n"
	   "Opcion 1 Operaciones Automaticas de prueba\n"
	   "Opcion 2 Leer Test.db\n"
	   "Opcion 3 ir a una pagina nopor aleatoria\n"
	   "Opcion 4 Cargar el fichero CSV\n"
   );
   cin >> opcionmenu1;

 //  system("title VIRUS BY RELIOXX 1000000000% REAL NO FAKE LINK IN DESCRIPTION");
   system("cls");
   if (opcionmenu1 == 2)
   {
	   /* Open database */
	   rc = sqlite3_open("test.db", &db);
	   if (rc) {
		   fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		   return(0);
	   }
	   else {
		   fprintf(stdout, "Opened database successfully\n");
	   }
	   /* Create SQL statement */
	 //  sql = "SELECT name from sqlite_master where type='table'";
	   sql = "SELECT * from COMPANY";
	   /* Execute SQL statement */
	   rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);

	   if (rc != SQLITE_OK) {
		   fprintf(stderr, "SQL error: %s\n", zErrMsg);
		   sqlite3_free(zErrMsg);
	   }
	   else {
		   fprintf(stdout, "Operation done successfully\n");
	   }
   }


   else if (opcionmenu1 == 1) {
	   /* Open database */
	   rc = sqlite3_open("ip.db", &db);

	   if (rc) {
		   fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		   return(0);
	   }
	   else {
		   fprintf(stdout, "Opened database successfully\n");
	   }

	   /* Create SQL statement */
	   sql = "CREATE TABLE	ALUMNOS("  \
		   "IDALUMNO INT PRIMARY KEY     NOT NULL," \
		   "NOMBRE           TEXT    NOT NULL," \
		   "APELLIDO1           TEXT    NOT NULL," \
		   "APELLIDO2           TEXT    NOT NULL," \
		   "CORREO				TEXT	NOT NULL," \
		   "GRADO				TEXT	NOT NULL);";



	   /* Execute SQL statement */
	   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

	   if (rc != SQLITE_OK) {
		   fprintf(stderr, "SQL error: %s\n", zErrMsg);
		   sqlite3_free(zErrMsg);
	   }
	   else {
		   fprintf(stdout, "Table created successfully\n");
	   }

	   /* Create SQL statement */
	   sql = "INSERT INTO ALUMNOS (IDALUMNO,NOMBRE,APELLIDO1,APELLIDO2,CORREO,GRADO) "  \
		   "VALUES (3, 'Javier', 'Beltron', 'NiIdeaDeApellido2', 'javier@mail.com', 'IDCD' ); "\
			"INSERT INTO ALUMNOS (IDALUMNO,NOMBRE,APELLIDO1,APELLIDO2,CORREO,GRADO) "  \
		   "VALUES (1, 'Alvaro', 'Puente', 'Fernandez', 'alvaro@mail.com', 'IDCD' ); " \
		   "INSERT INTO ALUMNOS (IDALUMNO,NOMBRE,APELLIDO1,APELLIDO2,CORREO,GRADO) "  \
		   "VALUES (2, 'Rafa', 'DelPozo', 'NiIdeaDeApellido2', 'rafa@mail.com', 'IDCD' ); ";


	   /* Execute SQL statement */
	   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

	   if (rc != SQLITE_OK) {
		   fprintf(stderr, "SQL error: %s\n", zErrMsg);
		   sqlite3_free(zErrMsg);
	   }
	   else {
		   fprintf(stdout, "Records created successfully\n");
	   }

	   /* Create SQL statement */
	   sql = "SELECT NOMBRE from ALUMNOS";

	   /* Execute SQL statement */
	   rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);

	   if (rc != SQLITE_OK) {
		   fprintf(stderr, "SQL error: %s\n", zErrMsg);
		   sqlite3_free(zErrMsg);
	   }
	   else {
		   fprintf(stdout, "Operation done successfully\n");
	   }

	   sqlite3_close(db);
	   
   }
   else if (opcionmenu1 == 4) {

	   /* Open database */
	   rc = sqlite3_open("ip.db", &db);

	   if (rc) {
		   fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		   return(0);
	   }
	   else {
		   fprintf(stdout, "Opened database successfully\n");
	   }

	   /* Create SQL statement */
	   sql = "CREATE TABLE	ALUMNOS("  \
		   "IDALUMNO INT PRIMARY KEY     NOT NULL," \
		   "NOMBRE           TEXT    NOT NULL," \
		   "APELLIDO1           TEXT    NOT NULL," \
		   "APELLIDO2           TEXT    NOT NULL," \
		   "CORREO				TEXT	NOT NULL," \
		   "GRADO				TEXT	NOT NULL);";


	   ficheroalumnos.open("datosalumnos.csv");
	   while (getline(ficheroalumnos, line))
	   {
		   line.insert(0, "INSERT or IGNORE INTO ALUMNOS (IDALUMNO,NOMBRE,APELLIDO1,APELLIDO2,CORREO,GRADO) \nVALUES (");
		   line += " ); ";
		   cout << line << '\n';
		//   getchar();

		   //PASAR A SQL

		   sql = line.c_str();//PASAR STRING A CONST CHAR*

		   rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);

		   if (rc != SQLITE_OK) {
			   fprintf(stderr, "SQL error: %s\n", zErrMsg);
			   sqlite3_free(zErrMsg);
		   }
		   else {
			   fprintf(stdout, "Operation done successfully\n");
		   }
	   }
	   ficheroalumnos.close();
	   /* Execute SQL statement */
	   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

	   if (rc != SQLITE_OK) {
		   fprintf(stderr, "SQL error: %s\n", zErrMsg);
		   sqlite3_free(zErrMsg);
	   }
	   else {
		   fprintf(stdout, "Table created successfully\n");
	   }


	   /* Execute SQL statement */
	   rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

	   if (rc != SQLITE_OK) {
		   fprintf(stderr, "SQL error: %s\n", zErrMsg);
		   sqlite3_free(zErrMsg);
	   }
	   else {
		   fprintf(stdout, "Records created successfully\n");
	   }

	   /* Create SQL statement */
	   sql = "SELECT Nombre from ALUMNOS";

	   /* Execute SQL statement */
	   rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);

	   if (rc != SQLITE_OK) {
		   fprintf(stderr, "SQL error: %s\n", zErrMsg);
		   sqlite3_free(zErrMsg);
	   }
	   else {
		   fprintf(stdout, "Operation done successfully\n");
	   }

	   sqlite3_close(db);

   }
   return 0;
}

//lib /DEF:"c:\sqllite3\sqlite3.def" /OUT:"c:\sqllite3\sqlite3.lib"     
