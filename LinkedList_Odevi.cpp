//============================================================================
// Name        : Deneme_11032018.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



// Sizin kodu yap��t�rd���mda nullptr was not declared hatas� alad�m. O y�zden Eclipse gcc'ye flag ekledim. Umar�m siz a�arken bir sorun olmaz.
// �dev'deki *=double'� anlamad�m.
// Asl�nda ge�en hafta bilgisayar compile hatas�yla u�ra��rken �ok iyi dinleyemedim. Anlamad���m yerler var.(�rn:overloading operators ve ostream)
// Class'lara ge�meden �nce tekrar edip birka� �rnek yaparsak �ok memnun olurum :(


#include <iostream>
#include <cstdlib>

using namespace std;

struct Node {
	int data;
	Node* next;

	Node(int d, Node* n = nullptr) {
		data = d;
		next = n;
	}
};

struct List {
	Node* head;
	Node* last;

	List(){   // initialize ettim. Bunu ge�en haftan�n �rne�ine bakarak yapt�m. Ancak anlamad���m bir konuda neden do�rudan Node* head = nullptr olarak initialize edemiyoruz?
		head = nullptr;
		last = nullptr;
	}

	void append(int data) { //eleman ekleme fonksiyonu yaratt�m
		if (head == nullptr) {
				head = new Node(data, nullptr);
				last = head;
		}
		else {
			last->next = new Node(data, nullptr);
			last = last->next;
		}
	}

	void print(){ //ekrana print etme fonksiyonu yaratt�m.
			Node* p = head;
			while(p != nullptr){
				cout << p->data << endl;
				p = p->next;
			}
			cout <<endl;
		}

};

int main() {

	int N = 10;
	int d;

	List lst;

	for (int i=0; i<N; i++) {
		d = rand()%30;
		lst.append(d);
	}

	lst.print();

	return 0;
}
