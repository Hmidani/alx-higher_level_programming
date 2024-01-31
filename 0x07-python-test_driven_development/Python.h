#ifndef PYTHON_H
#define PYTHON_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct PyObject - object type
 * @n: a string
 *
 * Description: a struct type
 *
 */

typedef struct {
    char *n;
} PyObject;

void print_python_string(PyObject *p);

#endif /* PYTHON_H */
