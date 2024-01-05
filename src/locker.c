#include "../include/locker.h"

Locker* createLocker(){

    Locker *return_locker = (Locker*)malloc(sizeof(Locker));
    
    return_locker->spinner1 = createSpinner(0, 1);
    return_locker->spinner2 = createSpinner(0, 2);
    return_locker->spinner3 = createSpinner(0, 3);
    return_locker->spinner4 = createSpinner(0, 4);
    return_locker->locked = 0;
    int passcode = 0;

    return return_locker;
}

int getLockerValue(Locker* locker) {
    return (locker->spinner1->value * 1000) + 
            (locker->spinner2->value * 100) + 
            (locker->spinner3->value * 10) + 
            (locker->spinner4->value);
}

int lock(Locker* locker) {

    locker->locked = 1;
    locker->passcode = getLockerValue(locker);
    
    return locker->passcode;

}

int unlock(Locker* locker) {

    if (locker->locked == 0) { return 1; }
    
    int code = getLockerValue(locker);

    if (code == locker->passcode) {
        locker->locked = 0;
        return 1;
    }

    return 0;
}
