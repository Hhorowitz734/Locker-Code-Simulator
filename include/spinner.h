#ifndef SPINNER_H
#define SPINNER_H

#include <stdlib.h>

typedef struct Spinner {
    int value;
    int position;
} Spinner;

/**
 * @brief Creates a new Spinner object give its initial value and position
 * 
 * @param value The desired value for the spinner
 * @param position The position of this spinner relative to others (1-indexed)
*/
Spinner* createSpinner(int value, int position);

/**
 * @brief Simulates the spinner a certain numPlaces counter-clockwise
 * 
 * @param spinner The spinner object to be modified
 * @param numPlaces The number of places the spinner should be turned counter-clockwise
*/
void turnCounterClockwise(Spinner* spinner, int numPlaces);

/**
 * @brief Simulates the spinner a certain numPlaces clockwise
 * 
 * @param spinner The spinner object to be modified
 * @param numPlaces The number of places the spinner should be turned clockwise
*/
void turnClockwise(Spinner* spinner, int numPlaces);

#endif