#include "include/spinner.h"
#include <stdio.h>

int main() {

    Spinner* spinner = createSpinner(5, 1);

    printf("%d\n", spinner->value);

    turnCounterClockwise(spinner, 14);

    printf("%d\n", spinner->value);


    return 0;
}