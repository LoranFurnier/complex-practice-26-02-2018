#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <malloc.h>
using namespace std;
typedef struct complex *Complex;
void printRes(Complex result);
Complex create(int re, int im);
Complex add(Complex a, Complex b);
Complex substract(Complex a, Complex b);
Complex multiplyByNum(Complex a, int num);
Complex multiply(Complex a, Complex b);
Complex conflux(Complex a);
void menu();
#endif
