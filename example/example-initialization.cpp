//
// Created by developer on 9/18/2019.
//
#ifndef EXCHANGE_CLASSY_INITIALIZATION
#define EXCHANGE_CLASSY_INITIALIZATION

#include <Python.h>
#include "classes/Classy/Classy-description.cpp"

static struct PyModuleDef example_definition = {
		PyModuleDef_HEAD_INIT,
		"example",
		"example module containing Classy class",
		-1,
		NULL,
};

PyMODINIT_FUNC PyInit_example(void) {
	Py_Initialize();
	PyObject *m = PyModule_Create(&example_definition);

	if (PyType_Ready(&ClassyType) < 0)
		return NULL;

	Py_INCREF(&ClassyType);
	PyModule_AddObject(m, "Classy", (PyObject *) &ClassyType);

	return m;
}

#endif