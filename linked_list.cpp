#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* head = NULL;

//fungsi tambah depan
void insertDepan(int dataBaru){
	Node* baru = new Node;
	baru->data = dataBaru;
	baru->next = NULL;
	
	if(head == NULL){
		head = baru;
	} else{
		baru->next = head;
		head = baru;	
	}
	
	cout<<"Data masuk di depan\n"<<"Data "<<dataBaru<<" Berhasil ditambahkan didepan\n";
}

//fungsi tambah belakang
void insertBelakang(int dataBaru){
	Node*baru=new Node;
	baru->data=dataBaru;
	baru->next=NULL;
	
	if(head == NULL){
		head = baru;
	} else{
		Node* bantu = head;
		
		while(bantu->next != NULL){
			bantu = bantu->next;			
		}
		
		bantu->next = baru;
	}
	
	cout << "Data " << dataBaru << " berhasil ditambah di belakang\n";
}

//fungsi clear
void hapusData(int dataBaru){
	if(head->data == dataBaru){
		Node* temp = head;
		head = head->next;
		delete temp;
		cout << "Data " << dataBaru << " berhasil di hapus\n";
	return;
	}
	
	Node* temp = head;
	Node* prev = NULL;
	while(temp != NULL && temp -> data != dataBaru){
		prev = temp;
		temp = temp->next;
	}
	
	if(temp == NULL){
		cout << "Data " << dataBaru << " tidak ditemukan dalam linked list\n";
		return;
	}
	
	prev->next = temp->next;
	delete temp;
	cout << "Data " << dataBaru << " berhasil di hapus\n";
}


//fungsi tampil
void tampil(){
	if(head == NULL){
		cout << "Linked list masih kosong\n";
		return;
	}
	
	Node* bantu = head;
	cout << "Isi Linked List: ";
	while(bantu != NULL){
		cout << bantu->data << " -> ";
		bantu = bantu->next;
	}
	cout << "NULL\n";
}

//main program
int main(){
	
	int pilihan, dataBaru;
	
	do{

	cout << "\n=== ALGORITMA ke 2 SOAL ===\n\n";
	cout << "1. Inisialisasi nilai 4, 17, 22, 27 Depan\n";
	cout << "2. Inisialisasi nilai 4, 17, 22, 27 Belakang\n";
	cout << "3. keluar program";
	
	cout << "Masukkan pilihan (1-4): ";
	cin >> pilihan;
	
	switch(pilihan){
		case 1:
			cout<<"\n=== LINK LISTED INSERT DEPAN ===\n";
			insertDepan(4);
			insertDepan(17);
			insertDepan(22);
			insertDepan(27);
			hapusData(4);
			tampil();
			cout<<endl;
			break;
		case 2:
			cout<<"\n=== LINK LISTED INSERT DEPAN ===\n";
			insertBelakang(4);
			insertBelakang(17);
			insertBelakang(22);
			insertBelakang(27);
			hapusData(4);
			tampil();
			cout<<endl;
			break;
		case 3:
			cout<<"\n Keluar program \n";
			break;
		default:
			cout << "Pilihan tidak valid\n";
	}
		}
	while ( pilihan !=3);
	return 0;
}
