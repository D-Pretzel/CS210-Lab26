/** lab26functs.h
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 26
* Purpose: More fun with structs
* ===========================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// YOUR STRUCTS GO HERE
typedef struct Point_Struct {
    int x;
    int y;
} Point;

// LAB 26-1 FUNCTIONS GO HERE
void getPoints(Point* point1, Point* point2);

double getDistance(Point point1, Point point2);
// LAB 26-3 FUNCTIONS GO HERE
