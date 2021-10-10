#include <iostream>
using namespace std;

double area(double a, double h);

//int GreaterOftwoValues(int a, int b);

;

int main() {

	/*int n1, n2;
	cin >> n1 >> n2;
	cout << GreaterOftwoValues(n1, n2);*/

	double n1, n2;
	cin >> n1 >> n2;
	cout << area(n1, n2);

	return 0;
}

//int GreaterOftwoValues(int a, int b) {
//
//	if (a > b) {
//
//		return a;
//	}
//	else if (b > a) {
//		
//		return b;
//	}
//	else {
//		return 0;
//	}
//
//}

double area(double a, double h) {

	a* h / 2;

	return a * h / 2;

}