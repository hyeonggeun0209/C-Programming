#include <iostream>
#include <string>
using namespace std;


class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}

	string getTitle() {
		return title;
	}
	bool operator< (Book b);
};

bool Book::operator< (Book b) {
	if (this->title > b.title)
		return true;
	else 
		return false;
}

int main() {
	Book a("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ���>>";
	getline(cin, b);
	if (a < b)
		cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
}