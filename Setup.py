#!/usr/bin/env python3
# encoding: utf-8

from distutils.core import setup, Extension

example_module = Extension(
    'example',
    sources=[
        'example/example-initialization.cpp',
        'example/classes/Classy/Classy.cpp',
        'example/classes/Classy/Classy-impl.cpp',
        'example/classes/Classy/Classy-description.cpp'],
    language='C++',)

setup(
    name='example',
    version='0.1.1',
    description='example module written in C++',
    ext_modules=[example_module], )
