#include <stdio.h>
#include <string.h>

typedef struct {
    char loginname[64];
    char password[64];
} account;

typedef struct {
    char stdID[20];
    char nameSurname[30];
    account stdACC;
} hoststd;

int main() {

    hoststd cs[5] = {
        {"66-040626-2686-9","MR.A",{"user1","passwd1"}},
        {"66-040626-2687-8","MR.B",{"user2","passwd2"}},
        {"66-040626-2688-7","MR.C",{"user3","passwd3"}},
        {"66-040626-2689-6","MR.D",{"user4","passwd4"}},
        {"66-040626-2690-5","MR.E",{"user5","passwd5"}}
    };

    char username[64];
    char password[64];
    int found = 0;

    printf("Username: ");
    scanf("%s", username);

    printf("Password: ");
    scanf("%s", password);

    for(int i = 0; i < 5; i++) {
        if(strcmp(username, cs[i].stdACC.loginname) == 0 &&
           strcmp(password, cs[i].stdACC.password) == 0) {

            printf("Welcome %s\n", cs[i].nameSurname);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Incorrect login or password\n");
    }

    return 0;
}
