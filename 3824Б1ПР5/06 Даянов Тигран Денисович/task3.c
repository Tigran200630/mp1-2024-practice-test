// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из цифр,
// содержащихся в исходной строке s.
// Пример: s = "abc1d2e34f56g", ответ: "123456".
char* task3(char *s)
{
  return "task3";
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Функция для формирования строки, содержащей только цифры из исходной строки
char* task3(const char *s) {
    if (s == NULL) {
        return NULL; // Если указатель на строку равен NULL, возвращаем NULL
    }

    size_t len = strlen(s);
    char *result = (char *)malloc(len + 1); // Выделяем память для новой строки
    if (result == NULL) {
        return NULL; // Если не удалось выделить память, возвращаем NULL
    }

    size_t j = 0; // Индекс для записи в новую строку
    for (size_t i = 0; i < len; i++) {
        if (isdigit((unsigned char)s[i])) { // Проверяем, является ли символ цифрой
            result[j++] = s[i];
        }
    }

    result[j] = '\0'; // Завершаем результирующую строку
    return result;    // Возвращаем новую строку
}
