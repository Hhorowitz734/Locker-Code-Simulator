#include "include/locker.h"
#include <stdio.h>

int main() {

    Locker* locker = createLocker();

    int a = lock(locker);
    printf("%d\n", a);

    turnClockwise(locker->spinner1, 12);
    printf("%d\n", unlock(locker));

    turnCounterClockwise(locker->spinner1, 2);
    printf("%d\n", unlock(locker));


    return 0;
}