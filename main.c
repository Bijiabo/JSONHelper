#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>


typedef struct kv_pair
{
    char key[100];
    char value[100];
} kv_pair;

void append_string_on_variable(char *str, char *append_string) {
    int str_len = strlen(str);
    int append_string_len = strlen(append_string);
    str = realloc(str, sizeof(char)*11);
    str = strcat(str, append_string);
}



//char* generate_JSON_item(char *key, char *value, int is_last_one)
//{
//    char *result = malloc(sizeof(char));
//    strcat2(&result, "\"", key, "\":\"", value, is_last_one ? "\"" : "\",");
//    return result;
//}



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

int setIncludes (char *includes[]) {
    size_t count = 0;
    while (includes[count] != NULL) count++;
    // Length is count.
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

//    generate_JSON_item("name", "Chambers", 1);
    char *test = malloc(0);
    append_string_on_variable(test, "workd");

    printf("\n\ntest: %s", test);


    return 0;
}
///*

// */