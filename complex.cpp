#include "complex.h"
using namespace std;
struct complex{
	int re;
	int im;
};
Complex create(int re, int im){
  Complex result = (Complex) malloc(sizeof(*result));
  if(result == NULL){
  	return NULL;
  }
  result->re = re;
  result->im = im;
  return result;
}

void printRes(Complex result){
	 if(result->im>=0){
		cout << result->re << " + " << result->im << "i\n";
  } else {
    cout << result->re << " + (" << result->im << ")i\n";
  }
}

Complex add(Complex a, Complex b){
	Complex res = create(0, 0);
	res->re = a->re + b->re;
	res->im = a->im + b->im;
	return res;
}

Complex substract(Complex a, Complex b){
	Complex res = create(0, 0);
	res->re = a->re - b->re;
	res->im = a->im - b->im;
	return res;
}

Complex multiplyByNum(Complex a, int num){
	Complex res = create(0, 0);
	res->re = num * a->re;
	res->im = num * a->im;
	return res;
}

Complex multiply(Complex a, Complex b){
	Complex res = create(0, 0);
res->re = a->re * b->re - a->im * b->im;
res->im = a->re * b->im + a->im * b->re;
	return res;
}

Complex conflux(Complex a){
	Complex res = create(0, 0);
res->im = a->im * (-1);
			res->re = a->re;
	return res;
}

void menu(){
	cout<<"\n�������� ��������, ������� ����� �����������:\n\t1. �������� \n\t2. ��������� \n\t3. ��������� �� ������.����� \n\t4. ������������ ���� ����� \n\t5. ���������� ������������ ����� \n\t0. ��������� ������ \n";
}
