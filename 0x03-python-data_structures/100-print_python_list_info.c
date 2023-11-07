#include <Python.h>
#include <stdio.h>

void print_python_list_info(PyObject *p)
{
    PyListObject *list = (PyListObject *)p;
    Py_ssize_t size, allocated, i;
    PyListObject *elem;

    size = PyList_Size(p);
    allocated = list->allocated;

    printf("[*] Size of the Python List = %zd\n", size);
    printf("[*] Allocated = %zd\n", allocated);

    for (i = 0; i < size; i++)
    {
        elem = (PyListObject *)list->ob_item[i];
        printf("Element %zd: %s\n", i, Py_TYPE(elem)->tp_name);
    }
}

