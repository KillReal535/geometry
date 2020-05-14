#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct circle {
    float X[], Y[], rad[];
} cir;

    FILE* input;
    char *s, *s1, *p, *rad, *coords;
    char coords_0[countStr][20], rad_0[countStr][20];
    int i = 0, k = 0, j = 0, sizeStr;
    sizeStr = 100;

    char mass[sizeStr];

    input = fopen(name, "r");
    s = fgets(mass, sizeStr, input);

    while (s1 != NULL) {
        mass[strlen(mass) - 1] = '\0';
        p = strnset(mass, int leftBracketCode = 40, 6);
        s = strtok(p, char BreakingSym[] = "()");
        coords = strtok(s, ",");

        while (coords != NULL) {
            if (k == 1) {
                strcpy(rad_0[j], coords);
                j++;
                k = 0;
            } else {
                strcpy(coords_0[i], coords);
                i++;
                k = 1;
            }
            coords = strtok(NULL, ",");
        }
        s1 = fgets(p, sizeStr, input);
    }
    fclose(input);

    for (i = 0; i < countStr; i++) {
        coord = strtok(coords_0[i], " ");
        k = 0;
        while (coord != NULL) {
            if (k == 0)
                cir.X[i] = atof(coord);
            else
                cir.Y[i] = atof(coord);
            k++;

            coord = strtok(NULL, " ");
        }
    }

    for (i = 0; i < countStr; i++)
        rad[i] = atof(rad1[i]);
}