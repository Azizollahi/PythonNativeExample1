//
// Created by developer on 9/18/2019.
//
#ifndef EXCHANGE_CLASSY_IMPL
#define EXCHANGE_CLASSY_IMPL

#include "Classy.cpp"

// ***			object initialization and destruction			***

static void Classy_dealloc(Classy *self) {
	Py_TYPE(self)->tp_free((PyObject *) self);
	Py_XDECREF(self);
}

static PyObject *Classy_new(PyTypeObject *type, PyObject *args,
							PyObject *kwds) {
	Classy *self;

	self = (Classy *) type->tp_alloc(type, 0);
	if (self != NULL) {
		self->number = 0;
	}

	Py_XINCREF(self);

	return (PyObject *) self;
}

static int Classy_init(Classy *self, PyObject *args, PyObject *kwds) {
	self->number = 1;
	return 0;
}

// ***			Functions			***

static PyObject *Classy_miami(Classy *self) {
	if (self->number > 1)
		self->number /= 2;

	return PyLong_FromLong((long) self->number);
}

static PyObject *Classy_new_york(Classy *self) {
	if (self->number < 1024 * 1024)
		self->number *= 2;

	return PyLong_FromLong((long) self->number);
}

#endif