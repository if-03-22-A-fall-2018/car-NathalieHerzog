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
#include "car.h"

struct CarImplementation
{
  enum CarType type;
  enum CarColor color;
  double fill;
  double speed;
  double acceleration;
};

Car get_car(CarType type)
{
  return 0;
}

enum CarType get_type(Car car)
{
  return AIXAM;
}

enum CarColor get_color(Car car)
{
  return RED;
}

double get_speed(Car car)
{
  return 0;
}

double get_fill_level(Car car)
{
  return 0;
}

double get_acceleration_rate(Car car)
{
  return 0;
}

void init ()
{

}

void set_acceleration_rate(Car car, double acceleration)
{

}

void accelerate(Car car)
{

}
