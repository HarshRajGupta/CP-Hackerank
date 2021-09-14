#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 26

int lexicographic_sort(const char* a, const char* b) 
{
    return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) 
{
    return strcmp(b, a);
}

int distinct_chars(const char *a)
{
    int distinct = 0;
    int chars[MAX] = {0};

    while (*a != '\0') 
    {
        int ch = (*a++) - 97;
        if (ch < MAX)
            ++chars[ch];
    }
    
    for (int i = 0; i < MAX; i++)
    {
        if (chars[i])
            ++distinct;
    }

    return distinct;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) 
{
    int result = distinct_chars(a) - distinct_chars(b);
    return (result) ? result : lexicographic_sort(a, b);
}

int sort_by_length(const char* a, const char* b) 
{
    int result = strlen(a) - strlen(b);
    return (result) ? result : lexicographic_sort(a, b);
}

   //Bubble Sort
void string_sort(char** arr, const int len,int (*cmp_func)(const char* a, const char* b)) 
{
    int count = 0;
    int n = len - 1;
    while (!count) 
    {
        count = 1;
        for (int i = 0; i < n; i++) 
        {
            if (cmp_func(arr[i], arr[i + 1]) > 0) 
            {
                char *tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                count = 0;
            }
        }
        n--;
    }
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}