#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct kv_pair
{
    char key[100];
    char value[100];
} kv_pair;

void build_JSON_string(kv_pair *kv)
{
    int i = 0;
    char *result = malloc(sizeof(char)*1);

    for(i; i< sizeof(kv); i++)
    {
        printf("%d\n", i);
        char *add_string = malloc(sizeof(strcat("\n", kv[i].key)));
        add_string = kv[i].key;

        if ( strcmp(kv[i].key, "") == 0) {
            continue;
        }

        result = realloc(result, sizeof(
                strcat(
                        result,
                        strcat(
                                strcat(
                                        kv[i].key,
                                        ":"
                                ),
                                kv[i].value
                        )
                )
                ));
        result = strcat(
                result,
                strcat(
                        strcat(
                                kv[i].key,
                                ":"
                        ),
                        kv[i].value
                )
        );

        printf("add_string %s\n", add_string);

    }
    printf("result %s", result);
}

int main() {
    printf("Hello, World!\n");
    printf("I want to write something\n");

//    jsonString = "Hello";
    char *jsonString = malloc(sizeof(char)*10);

    printf("jsonString: %s\n", jsonString);

    // increase size
    jsonString = realloc(jsonString, sizeof(char)*100);
    if (jsonString == NULL) {
        printf("The re-allocation of array has failed.");
        free(jsonString);
    } else {
//        jsonString = tmp_jsonString;
        jsonString = "hasjdfhskfhdjkasfhsdjfs";

    }
    printf("jsonString: %s\n", jsonString);

    struct kv_pair *data = malloc(sizeof(struct kv_pair)*100);
    kv_pair name = {"name", "Chambers"};
    data[0] = name;
    kv_pair age = {"age", "26"};
    data[1] = age;

    build_JSON_string(data);

    return 0;
}
///*

// */