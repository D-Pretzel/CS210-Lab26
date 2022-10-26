/** lab26functs.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 26
* Purpose: More fun with structs
* ===========================================================
*/
#include "lab26functs.h"

void getPoints(Point* point1, Point* point2) {
    printf("Enter the x and y coordinates of the first point: ");
    scanf("%d %d", &point1->x, &point1->y);
    printf("Enter the x and y coordinates of the second point: ");
    scanf("%d %d", &point2->x, &point2->y);
}

double getDistance(Point point1, Point point2){
    double distance = sqrt(pow(point1.x - point2.x, 2) + pow(point1.y - point2.y, 2));
    return distance;
}