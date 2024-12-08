#include <stdio.h>
#include <ctype.h>
#include <string.h>

int max_2d(const int size, int array[][size]) {
    if (array == NULL) return -1;
    int max = array[0][0];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array[j][i] > max)
                max = array[j][i];
        }
    }
    return max;
}


int vowels_count_2d(const int rows, const int cols, char strings[][cols]) {
    if (strings == NULL) return -1;
    int letters = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            char c = tolower(strings[i][j]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                letters++;
        }
    }
    return letters;
}


int is_in_array_2d(const int num, const int size, int array[][size]) {
    if (array == NULL) return -1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array[i][j] == num)
                return 1;
        } 
    }
    return 0;
}


int largest_line(const int size, int array[][size]) {
    if (array == NULL) return -1;
    int max_sum = -1, max_index = -1;
    for (int i = 0; i < size; i++) {
        int sum = 0;
        for (int j = 0; j < size; j++) {
            sum += array[i][j];
        }
        if (sum > max_sum) {
            max_sum = sum;
            max_index = i;
        }
    }
    return max_index;
}


void swap_case_2d(const int rows, const int cols, char strings[][cols]) {
    if (strings == NULL) return;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (islower(strings[i][j])) {
                strings[i][j] = toupper(strings[i][j]);
            } else if (isupper(strings[i][j])) {
                strings[i][j] = tolower(strings[i][j]);
            }
        }
    }
}


int largest_col(const int size, int array[][size]) {
    if (array == NULL) return -1;
    int max_sum = -1, max_index = -1;
    for (int j = 0; j < size; j++) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += array[i][j];
        }
        if (sum > max_sum) {
            max_sum = sum;
            max_index = j;
        }
    }
    return max_index;
}


int count_zeroes_2d(const int size, int array[][size]) {
    if (array == NULL) return -1;
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array[i][j] == 0)
                count++;
        }
    }
    return count;
}


void swap_sign_2d(const int size, int array[][size]) {
    if (array == NULL) return;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            array[i][j] = -array[i][j];
        }
    }
}


int longest_row(const int rows, const int cols, char array[rows][cols]) {
    if (array == NULL || rows < 1 || cols < 1) return -1;

    int max_length = -1; 
    int max_index = -1;

    for (int i = 0; i < rows; i++) {
        int length = strlen(array[i]);
        if (length > max_length) {
            max_length = length;
            max_index = i;
        }
    }

    return max_index;
}
