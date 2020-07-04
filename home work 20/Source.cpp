#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>

using namespace std;

float  radical(float number) {
	srand(time(NULL));
	float j = 0;
	float result = 0;
	for (int i = 0; i < 100; i++) {
		
	     j = rand() % 100;
		 if (j * j == number) {
			 result = j;
		}
	}
	return result;

}
float square(float number) {
	return number *= number;
}


int main() {
	float num = 0;
	cout << "enter number->";
	cin >>num;
	float resultSquare = square(num);
	cout << resultSquare<<endl;
	float resultRadical = radical(num);
	cout << resultRadical << endl;


}
