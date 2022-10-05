#include <iostream>;
using namespace std;
int main() {
	setlocale(LC_ALL, "russian");
	/*//1
	int hp = 10;
	cin >> hp;
	if (hp <= 0) {
	cout << "false" << endl;
	}
	else {
	cout << "true" << endl;
	} */
	//2
	/* int t;
	cin >> t;
	if (t > 20) {
	cout << "on" << endl;
	}
	else if (t <= 20) {
	cout << "off" << endl;
	}
	*/
	/*//3
	int T, vl;
	cin >> T >> vl;
	if (T > 5 && vl <= 80) {
		cout << "on" << endl;
	}
	else {
		cout << "off" << endl;
	} */
	//4
	/*double x;
	cin >> x;
	if (x > 0) {
		int y = sqrt(x - 2);
		cout << y << endl;
	}
	else if (x == 0) {
		int y = 0;
		cout << y << endl;
	}
	else if (x < 0) {
		int y = abs(x);
		cout << y << endl;
	}
	*/
	//5
	int p;
	cin >> p;
	if (p == 1) {
		cout << "большой" << endl;
	}
	else if (p == 2) {
		cout << "указательный" << endl;
	}
	else if (p == 3) {
		cout << "средний" << endl;
	}
	else if (p == 4) {
		cout << "безымянный" << endl;
	}
	else if (p == 5) {
		cout << "мизинец" << endl;
	}
	else {
		cout << "ошибка" << endl;
	}
	system("pause");
}
	