#include <iostream>
#include <vector>

using namespace std;

void vector4() {
	vector <int> vvector4;
	vector <int> vvector4odd;
	vector <int> vvector4even;
	int temp,size;
	cout << "How many numbers do you want to insert?" << endl;
	cin >> size;
	cout << "Insert numbers for vector: " << endl;
	for (int a = 0; a < size; a++) {
		cin >> temp;
		if (temp <= 0) {
			temp = temp * (-1);
		}
		vvector4.push_back(temp);
	}
	vector <int> ::iterator vv4;
	for (vv4 = vvector4.begin(); vv4 < vvector4.end(); vv4++) {
		if (*vv4 % 2 == 1) {
			vvector4odd.push_back(*vv4);
		}
		else if (*vv4 % 2 == 0) {
			vvector4even.push_back(*vv4);
		}
	}
	cout << endl;
	cout << "Odd numbers you inserted: " << endl;
	for (vv4 = vvector4odd.begin(); vv4 < vvector4odd.end(); vv4++) {
		cout << *vv4 << " ";
	}
	cout << endl;
	cout << "Even numbers you inserted: " << endl;
	for (vv4 = vvector4even.begin(); vv4 < vvector4even.end(); vv4++) {
		cout << *vv4 << " ";
	}
}
void vector3() {
	vector <int> v123{ 80,25,44,11,51,52,57,12,62 };
	vector <int> v3odd;
	vector <int> v3even;
	vector <int> ::iterator it;
	for (it = v123.begin(); it < v123.end(); it++) {
		if (*it % 2 == 1) {
			v3odd.push_back(*it);
		}
		else if (*it % 2 == 0) {
			v3even.push_back(*it);
		}
	}
	cout << "Even numbers: " << endl;
	for (it = v3even.begin(); it < v3even.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	cout << "Odd numbers: " << endl;
	for (it = v3odd.begin(); it < v3odd.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	vector4();
}
void vector2() {
	vector <int> v2{ 1,2,3,4,5,6,7,8 };
	vector <int> ::iterator i;
	for (i = v2.begin(); i < v2.end(); i++) {
		cout << *i << endl;
	}
	cout << endl;
	vector3();
}
int main()
{
	vector <int> v1{1,2,3,4,5,6,7,8,9};

	vector <int> ::iterator i;
	for (i = v1.begin(); i < v1.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	vector2();
	return 0;
}
