#include <iostream>
#include <cstring>
#include <math.h>
#include <functional>
#include "scalar.h"

using namespace std;
using namespace autodiff; 

int main() {
	Scalar z(10, 0, 0, 'L');
	Scalar y(5, 0, 0, 'L');
	Scalar q(y * z * 5);
	Scalar r = z+y;


	Scalar yy = 1-z;

	z.Print();
	y.Print();
	q.Print();
}
