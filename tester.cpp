#include "complex.h"
int main() {
	setlocale(LC_ALL, "Russian");
	short func;
	int t1, t2;
	cout << "������������! ��� ��������� ��������� �������� � ����� ������������ �������.\n��� ������ ����� ������ ������ �����. ������� ������� � ������� 'x y', ��� x - �������������� �����, y - ������.\n";
	cin >> t1 >> t2;
	Complex z1 = create(t1,t2);
	printRes(z1);
	t1 = t2 = 0;
	cout << "������� ������ ����� � ��� �� ����\n";
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
			    cout << "�������� ����������� �����, ������� ����� �����������: 1 ��� 2\n";
			    cin >> v;
			    while (v<1 or v>2){
				cout << "���-�� ���� �� ���!\n���������� ������� ��� ���\n";
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
			    cout << "������� �����, �� ������� ����� ��������� ���������: ";
			    cin >> k;
			    cout << "�������� ����������� �����, ������� ����� ��������: 1 ��� 2\n";
									cin >> v;
			    while (v<1 or v>2){
				cout << "���-�� ���� �� ���!\n���������� ������� ��� ���\n";
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
			    cout << "�������� ����������� �����, � �������� ����� ����� �����������: 1 ��� 2\n";
									cin >> v;
			    while (v<1 or v>2){
				cout << "���-�� ���� �� ���!\n���������� ������� ��� ���\n";
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
			    cout << "���-�� ���� �� ���!\n���������� �_�\n";
			    break;
			}
		}
	}
}
