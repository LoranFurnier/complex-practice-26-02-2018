#include "complex.h"
int main() {
	setlocale(LC_ALL, "Russian");
	short func;
	int t1, t2;
	cout << "Здравствуйте! Эта программа выполняет операции с двумя комплексными числами.\nДля начала нужно ввести первое число. Вводить следует в формате 'x y', где x - действительная часть, y - мнимая.\n";
	cin >> t1 >> t2;
	Complex z1 = create(t1,t2);
	printRes(z1);
	t1 = t2 = 0;
	cout << "Введите второе число в том же виде\n";
	cin >> t1 >> t2;
	Complex z2 = create(t1, t2);
	printRes(z2);
	
	func = 9;	//no matter what, but not 0
	int k, v;
		while(func !=0){
				menu();
				cin >> func;
				switch(func){
			case 1:{
			    printRes(add(z1,z2));
			    break;
			}
			case 2:{
			    cout << "Выберите комплексное число, которое будет уменьшаемым: 1 или 2\n";
			    cin >> v;
			    while (v<1 or v>2){
				cout << "Что-то идет не так!\nПопробуйте выбрать еще раз\n";
			    }
			    if(v==1){
				printRes(substract(z1, z2));
				break;
			    } else {
				printRes(substract(z2, z1));
				break;
			    }
			}
			case 3:{
			    cout << "Введите число, на которое будет выполнено умножение: ";
			    cin >> k;
			    cout << "Выберите комплексное число, которое будет умножено: 1 или 2\n";
									cin >> v;
			    while (v<1 or v>2){
				cout << "Что-то идет не так!\nПопробуйте выбрать еще раз\n";
				cin >> v;
			    }
			    if(v==1){
				printRes(multiplyByNum(z1, k));
				break;
			    } else {
				printRes(multiplyByNum(z2, k));
				break;
			    }
			}
			case 4:{
			    printRes(multiply(z1,z2));
			    break;
			}
			case 5:{
			    cout << "Выберите комплексное число, к которому нужно найти сопряженное: 1 или 2\n";
									cin >> v;
			    while (v<1 or v>2){
				cout << "Что-то идет не так!\nПопробуйте выбрать еще раз\n";
						cin >> v;
			    }
			    if(v==1){
				printRes(conflux(z1));
				break;
			    } else {
				printRes(conflux(z2));
				break;
			    }
			}
			default:{
			    cout << "Что-то идет не так!\nОтключаюсь х_х\n";
			    break;
			}
		}
	}
}
