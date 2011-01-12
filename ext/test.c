#include <stdio.h>
#include <opie.h>

int
main()
{
    int ret;
    char *name = "doug";
    char challenge[500];
    char pass[500] = "foo water fun bar stuff chaff";
    char *opieprompt;
    struct opie opiedata;

    ret = opiechallenge(&opiedata, name, challenge);
    printf("%s\n", challenge);


    if(opieverify(&opiedata, pass))
        printf("Bad login\n");

    return 0;
}

