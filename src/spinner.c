#include "../include/spinner.h"

Spinner* createSpinner(int value, int position) {

    Spinner *returnSpinner = (Spinner*)malloc(sizeof(Spinner));
    returnSpinner->value = value;
    returnSpinner->position = position;

    return returnSpinner;
    
}

void turnCounterClockwise(Spinner* spinner, int numPlaces) {

    if (numPlaces < 0) {
        turnClockwise(spinner, numPlaces);
        return;
    }

    spinner->value = (spinner->value - numPlaces + 10) % 10;
}

void turnClockwise(Spinner* spinner, int numPlaces) {

    if (numPlaces < 0) { 
        turnCounterClockwise(spinner, numPlaces); 
        return;
    }

    spinner->value += numPlaces;
    spinner->value %= 10;
}
