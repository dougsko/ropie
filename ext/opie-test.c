#include <stdio.h>
#include <opie.h>

char buffer[1024];

int main(){
    char *user_name = "doug";
    char password[OPIE_RESPONSE_MAX+1]; 
    struct opie opiedata;
    char opieprompt[OPIE_CHALLENGE_MAX+1]; 

    opiechallenge(&opiedata, user_name, opieprompt);
    fputs(opieprompt, stdout);
    fputc('\n', stdout);
    fflush(stdout);
    fputs("Response: ", stderr);
    if (!opiereadpass(password, OPIE_RESPONSE_MAX, 1)) {
        fputs("Error reading response!\n", stderr);
        exit(1);
    };

    if (opieverify(&opiedata, password)) { 
        printf("Login incorrect"); 
    }

    static char testin[] = "NASH AIR GAWK LO FISK OBOE";
    static unsigned char *testout;

    if (opieetob(buffer, testin) != 1)
        return -1;

    printf("\n%i\n", &testout);

    return 0;
}
