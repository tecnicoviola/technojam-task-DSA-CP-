#include <iostream>
using namespace std;

// Driver code
int main()
{
	char c;
	float n1, n2;

	cin >> c;

	// It allow user to enter the operands
	cin >> n1 >> n2;

	switch (c) {
	// For +
	case '+':
		cout << n1 + n2;
		break;

	// If user enter -
	case '-':
		cout << n1 - n2;
		break;

	// If user enter *
	case '*':
		cout << n1 * n2;
		break;

	// If user enter /
	case '/':
		cout << n1 / n2;
		break;

	// If the operator is other than +, -, * or /,
	// error message will display
	default:
		cout << "Error! operator is not correct";
	}
	// switch statement ends

	return 0;
}

