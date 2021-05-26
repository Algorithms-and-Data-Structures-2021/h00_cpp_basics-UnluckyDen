#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    // напишите код здесь ...
    if ((lhs != nullptr) && (rhs != nullptr))
    {
        *lhs = *lhs + *rhs;
        *rhs = *lhs - *rhs;
        *lhs = *lhs - *rhs;
    }
}

// Задание 2
int** allocate_2d_array(int rows, int cols, int value)
{
    if ((rows >= 1) && (cols >= 1))
    {
        int** array_2d = new int* [rows];
        for (int row_num = 0; row_num < rows; row_num++)
        {
            array_2d[row_num] = new int[cols] {};
        }
        for (int row_num = 0; row_num < rows; row_num++)
        {
            for (int cols_num = 0; cols_num < cols; cols_num++)
            {
                array_2d[row_num][cols_num] = value;
            }
        }
        return array_2d;
    }
    else
    {
        return nullptr;
    }
}

// Задание 3
bool copy_2d_array(int** arr_2d_source, int** arr_2d_target, int num_rows, int num_cols) {
    if ((arr_2d_source == nullptr) || (arr_2d_target == nullptr) || (num_rows <= 0) || (num_cols <= 0)) {
        return false;
    }
    else {
        for (int i = 0; i < num_rows; i++) {
            copy(arr_2d_source[i], arr_2d_source[i] + num_cols, arr_2d_target[i]);
        }
    } return true;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    vector<int> vec;
    for (int elem = arr.size() - 1; elem != -1; elem--) {
        int temp = arr[elem];
        vec.push_back(arr[elem]);
    }
    for (int elem = 0; elem < arr.size(); elem++) {
        arr[elem] = vec[elem];
    }
}


// Задание 5
void reverse_1d_array(int* arr_begin, int* arr_end) {
    if ((arr_begin == nullptr) || (arr_end == nullptr)) {
    }
    else {
        while (arr_begin < arr_end) {
            int temp = *arr_begin;
            *arr_begin = *arr_end;
            *arr_end = temp;
            arr_begin++;
            arr_end--;
        }
    }
}

// Задание 6
int* find_max_element(int* arr, int size) {
    if ((arr == nullptr) || (size <= 0)) {
        return nullptr;
    }
    else {
        int* max = arr;
        for (int i = 0; i < size; i++) {
            if (*arr > *max) {
                max = arr;
            }
            arr++;
        }
        return max;
    }

}

// Задание 7
vector<int> find_odd_numbers(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            arr.erase(arr.begin() + i);
            i--;
        }
    }
    return arr;
}

// Задание 8
vector<int> find_common_elements(vector<int>& arr_a, vector<int>& arr_b) {
    vector<int> array;
    for (int i = 0; i < arr_a.size(); i++) {
        for (int j = 0;j < arr_b.size(); j++) {
            if (arr_a[i] == arr_b[j]) {
                array.insert(array.end(), arr_a[i]);
            }
        }
    }
    return array;
}