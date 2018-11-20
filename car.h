/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H
#include <stdio.h>
#include <string.h>

enum CarType { FIAT_MULTIPLA, AIXAM, JEEP};
enum CarColor { BLUE, RED, GREEN, BLACK, ORANGE, SILVER};

typedef struct CarImplementation* Car;

Car get_car(CarType type);
enum CarType get_type(Car car);
enum CarColor get_color(Car car);
double get_speed(Car car);
double get_fill_level(Car car);
double get_acceleration_rate(Car car);
void init ();
void set_acceleration_rate(Car car, double acceleration);
void accelerate(Car car);

#endif
