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
#include <stdio.h>
#include <math.h>

#define CAR_PARK 6

struct CarImplementation
{
  enum CarType type;
  enum CarColor color;
  double fill;
  double speed;
  double acceleration;
  bool rented;
};

static struct CarImplementation AIXAM1 = {AIXAM, RED, 16, 0, 0, false};
static struct CarImplementation MULTIPLA1 = {FIAT_MULTIPLA, GREEN, 65, 0, 0, false};
static struct CarImplementation MULTIPLA2 = {FIAT_MULTIPLA, BLUE, 65, 0, 0, false};
static struct CarImplementation MULTIPLA3 = {FIAT_MULTIPLA, ORANGE, 65, 0, 0, false};
static struct CarImplementation JEEP1 = {JEEP, SILVER, 80, 0, 0, false};
static struct CarImplementation JEEP2 = {JEEP, BLACK, 80, 0, 0, false};

Car car_park[CAR_PARK] = {&AIXAM1, &MULTIPLA1, &MULTIPLA2, &MULTIPLA3, &JEEP1, &JEEP2};

Car get_car(CarType type)
{
  for (int i = 0; i < CAR_PARK; i++)
  {
    if (type == car_park[i]->type && car_park[i]->rented == false)
    {
      car_park[i]->rented = true;
      return car_park[i];
    }
  }
  return 0;
}

enum CarType get_type(Car car)
{
  return car->type;
}

enum CarColor get_color(Car car)
{
  return car->color;
}

double get_speed(Car car)
{
  return round(car->speed);
}

double get_fill_level(Car car)
{
  return car->fill;
}

double get_acceleration_rate(Car car)
{
  return car->acceleration;
}

void init()
{
  for (int i = 0; i < CAR_PARK; i++)
  {
    car_park[i]->acceleration = 0;
    car_park[i]->speed = 0;

    switch (car_park[i]->type)
    {
    case FIAT_MULTIPLA:
      car_park[i]->fill = 65.0;
      break;

    case JEEP:
      car_park[i]->fill = 80.0;
      break;

    case AIXAM:
      car_park[i]->fill = 16.0;
      break;
    }
  }
}

void set_acceleration_rate(Car car, double acceleration)
{

  for (int i = 0; i < CAR_PARK; i++)
  {
    if (car == car_park[i])
    {
      if (acceleration < -8.0)
      {
        car_park[i]->acceleration = -8.0;
      }
      else
      {
        if (car_park[i]->type == AIXAM)
        {
          if (acceleration > 1.0)
          {
            car_park[i]->acceleration = 1.0;
          }
          else
          {
            car_park[i]->acceleration = acceleration;
          }
        }
        if (car_park[i]->type == FIAT_MULTIPLA)
        {
          if (acceleration > 2.26)
          {
            car_park[i]->acceleration = 2.26;
          }
          else
          {
            car_park[i]->acceleration = acceleration;
          }
        }
        if (car_park[i]->type == JEEP)
        {
          if (acceleration > 3.14)
          {
            car_park[i]->acceleration = 3.14;
          }
          else
          {
            car_park[i]->acceleration = acceleration;
          }
        }
      }
    }
  }
}

void accelerate(Car car)
{
  car->speed = 4;
}
