#ifndef LOCKER_H
#define LOCKER_H

#include "spinner.h"

typedef struct Locker {

    Spinner* spinner1;
    Spinner* spinner2;
    Spinner* spinner3;
    Spinner* spinner4;

    int locked;
    int passcode;

} Locker;

/**
 * @brief Creates a Locker object
 * 
 * Defaults the spinners' values all to 0
*/
Locker* createLocker();

/**
 * @brief Returns the value of the locker, without leading zeroes
 * 
 * @example Combination: 0542 -> 542
 * 
 * @param locker The Locker object the function should be applied to
 * 
 * @returns The numberical value of the locker combination
*/
int getLockerValue(Locker* locker);

/**
 * @brief Sets the locked state to 1 (true) and records the password combination
 * 
 * @param locker The Locker object the function should be applied to
 * 
 * @returns The numerical value of the locker combination as it is set
*/
int lock(Locker* locker);

/**
 * @brief Attempts to unlock the locker given a code value
 * 
 * @param locker The Locker object the function should be applied to
 * 
 * @note Returns 1 if locker was never locked in the first place
 * 
 * @returns 0 (Failed) or 1 (Succeeded), depending if the code was equal to the passcode
*/
int unlock(Locker* locker);


#endif