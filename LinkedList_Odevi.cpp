//============================================================================
// Name        : Deneme_11032018.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



// Sizin kodu yapýþtýrdýðýmda nullptr was not declared hatasý aladým. O yüzden Eclipse gcc'ye flag ekledim. Umarým siz açarken bir sorun olmaz.
// Ödev'deki *=double'ý anlamadým.
// Aslýnda geçen hafta bilgisayar compile hatasýyla uðraþýrken çok iyi dinleyemedim. Anlamadýðým yerler var.(Örn:overloading operators ve ostream)
// Class'lara geçmeden önce tekrar edip birkaç örnek yaparsak çok memnun olurum :(


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

	List(){   // initialize ettim. Bunu geçen haftanýn örneðine bakarak yaptým. Ancak anlamadýðým bir konuda neden doðrudan Node* head = nullptr olarak initialize edemiyoruz?
		head = nullptr;
		last = nullptr;
	}

	void append(int data) { //eleman ekleme fonksiyonu yarattým
		if (head == nullptr) {
				head = new Node(data, nullptr);
				last = head;
		}
		else {
			last->next = new Node(data, nullptr);
			last = last->next;
		}
	}

	void print(){ //ekrana print etme fonksiyonu yarattým.
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
