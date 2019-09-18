//
// Created by developer on 9/18/2019.
//

#ifndef EXCHANGE_CLASSY_DESCRIPTION
#define EXCHANGE_CLASSY_DESCRIPTION

#include "Classy-impl.cpp"
#include <structmember.h>

static PyMemberDef Classy_members[] = {
		{"number", T_INT, offsetof(Classy, number), 0, "classy number"},
		{NULL} /* Sentinel */
};

static PyMethodDef Classy_methods[] = {
		{"miami",    (PyCFunction) Classy_miami,    METH_NOARGS, "Divides number by 2"},
		{"new_york", (PyCFunction) Classy_new_york, METH_NOARGS, "Doubles number"},
		{NULL} /* Sentinel */
};

static PyTypeObject ClassyType = {
		PyVarObject_HEAD_INIT(NULL, 0) "example.Classy",  /* tp_name */
		sizeof(Classy),                           /* tp_basicsize */
		0,                                        /* tp_itemsize */
		(destructor) Classy_dealloc,               /* tp_dealloc */
		0,                                        /* tp_print */
		0,                                        /* tp_getattr */
		0,                                        /* tp_setattr */
		0,                                        /* tp_reserved */
		0,                                        /* tp_repr */
		0,                                        /* tp_as_number */
		0,                                        /* tp_as_sequence */
		0,                                        /* tp_as_mapping */
		0,                                        /* tp_hash  */
		0,                                        /* tp_call */
		0,                                        /* tp_str */
		0,                                        /* tp_getattro */
		0,                                        /* tp_setattro */
		0,                                        /* tp_as_buffer */
		Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE, /* tp_flags */
		"Classy objects",                         /* tp_doc */
		0,                                        /* tp_traverse */
		0,                                        /* tp_clear */
		0,                                        /* tp_richcompare */
		0,                                        /* tp_weaklistoffset */
		0,                                        /* tp_iter */
		0,                                        /* tp_iternext */
		Classy_methods,                           /* tp_methods */
		Classy_members,                           /* tp_members */
		0,                                        /* tp_getset */
		0,                                        /* tp_base */
		0,                                        /* tp_dict */
		0,                                        /* tp_descr_get */
		0,                                        /* tp_descr_set */
		0,                                        /* tp_dictoffset */
		(initproc) Classy_init,                    /* tp_init */
		0,                                        /* tp_alloc */
		Classy_new,                               /* tp_new */
};
#endif