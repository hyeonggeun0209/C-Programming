#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> sv;
	string name;

	cout << "�̸��� 5�� �Է��϶�" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">>";
		getline(cin, name);
		sv.push_back(name);
	}
	name = sv.at(0);
	for (int i = 0; i < sv.size(); i++) {
		if (name < sv[i])
			name = sv[i];
	}
	cout << "�������� ���� �ڿ� ������ �̸��� " << name << endl;
}