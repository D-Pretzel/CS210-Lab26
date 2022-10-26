/** lab26-1.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 26
* Purpose: More fun with structs
* ===========================================================
*/

#include <stdio.h>
#include "lab26functs.h"

int main() {

    // Declare Two Point Structs
    Point point1;
    Point point2;
    // Call Get Points
    getPoints(&point1, &point2);
    // Print the Distance Between Point 1 and Point 2
    printf("The distance between the points is: %.2f", getDistance(point1, point2));
    return 0;
}