#include <stdio.h>
#include <stdlib.h>

#ifndef AOC
#define AOC 512
#endif // AOC

/**
 * @brief Возвращает число, которое должно стоять на определённом индексе.
 * 
 * @param prev_str Предыдущая строка.
 * @param cur_index Индекс числа в текущей строке.
 * @param size_prev_str Длина предыдущей строки.
 * 
 * @return unsigned long long Число, стоящее на индексе.
 * 
 * @note Если предыдущая строка является NULL, то возвращается 1.
 */
unsigned long long comp_num(unsigned long long* prev_str, unsigned long long size_prev_str, unsigned long long cur_index) {
    if (prev_str[0] == 0 || prev_str == NULL) return 1;
    if (cur_index == 0 || cur_index == size_prev_str) return 1;
    
    return prev_str[cur_index] + prev_str[cur_index - 1];
}

/**
 * @brief Выводит первые n строк треугольника Паскаля.
 * 
 * @param n Число строк, начиная с 0-ой.
 */
void print_str(unsigned long long n) {
    unsigned long long* prev_str = malloc(AOC * sizeof(unsigned long long));
    prev_str[0] = 1;
    unsigned long long* str = malloc(AOC * sizeof(unsigned long long));
    unsigned long long size_str = 1;
    
    /* Строки */
    for (unsigned long long i = 0; i < n; i++) {
        for (unsigned long long j = 0; j < size_str; j++) {
            printf("%llu ", prev_str[j]);
        }
        /* Символы в строках */
        for (unsigned long long j = 0; j < size_str + 1; j++) {
            str[j] = comp_num(prev_str, size_str, j);
        }
        printf("\n");
        
        for (unsigned long long cpy = 0; cpy < size_str + 1; cpy++) {
            prev_str[cpy] = str[cpy];
        }
        
        size_str++;
    }
}

int main(int argc, char** argv) {
    print_str(16);
    
    
    return 0;
}