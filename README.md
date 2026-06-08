# 🔗 Program Linked List Sederhana (C++)

Program ini merupakan implementasi **struktur data Linked List** menggunakan bahasa C++. Linked List adalah struktur data dinamis yang terdiri dari node-node, di mana setiap node menyimpan data dan pointer ke node berikutnya.

---

## 📂 Fitur Program

### 1. Insert Depan
Menambahkan node baru di **depan linked list**.
```cpp
void insertDepan(int dataBaru){
    Node* baru = new Node;
    baru->data = dataBaru;
    baru->next = NULL;
    
    if(head == NULL){
        head = baru;
    } else {
        baru->next = head;
        head = baru;    
    }
    cout<<"Data masuk di depan\n"<<"Data "<<dataBaru<<" Berhasil ditambahkan didepan\n";
}
```

---

### 2. Insert Belakang
Menambahkan node baru di **belakang linked list**.
```cpp
void insertBelakang(int dataBaru){
    Node* baru = new Node;
    baru->data = dataBaru;
    baru->next = NULL;
    
    if(head == NULL){
        head = baru;
    } else {
        Node* bantu = head;
        while(bantu->next != NULL){
            bantu = bantu->next;            
        }
        bantu->next = baru;
    }
    cout << "Data " << dataBaru << " berhasil ditambah di belakang\n";
}
```

---

### 3. Hapus Depan
Menghapus node dari **depan linked list**.
```cpp
void hapusDepan(){
    if(head == NULL){
        cout<<"Linked list kosong, tidak bisa hapus depan\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    cout<<"Data "<<temp->data<<" berhasil dihapus dari depan\n";
    delete temp;
}
```

---

### 4. Hapus Belakang
Menghapus node dari **belakang linked list**.
```cpp
void hapusBelakang(){
    if(head == NULL){
        cout<<"Linked list kosong, tidak bisa hapus belakang\n";
        return;
    }
    if(head->next == NULL){
        cout<<"Data "<<head->data<<" berhasil dihapus dari belakang\n";
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    Node* prev = NULL;
    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    cout<<"Data "<<temp->data<<" berhasil dihapus dari belakang\n";
    delete temp;
}
```

---

### 5. Tampil
Menampilkan seluruh isi linked list dari depan hingga akhir.
```cpp
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
```

---

## 📊 Contoh Output

### Insert Depan
```
Data masuk di depan
Data 4 Berhasil ditambahkan didepan
Isi Linked List: 4 -> NULL

Data masuk di depan
Data 17 Berhasil ditambahkan didepan
Isi Linked List: 17 -> 4 -> NULL

Data masuk di depan
Data 22 Berhasil ditambahkan didepan
Isi Linked List: 22 -> 17 -> 4 -> NULL

Data masuk di depan
Data 27 Berhasil ditambahkan didepan
Isi Linked List: 27 -> 22 -> 17 -> 4 -> NULL
```

---

### Insert Belakang
```
Data 4 berhasil ditambah di belakang
Isi Linked List: 4 -> NULL

Data 17 berhasil ditambah di belakang
Isi Linked List: 4 -> 17 -> NULL

Data 22 berhasil ditambah di belakang
Isi Linked List: 4 -> 17 -> 22 -> NULL

Data 27 berhasil ditambah di belakang
Isi Linked List: 4 -> 17 -> 22 -> 27 -> NULL
```

---

### Hapus Depan
```
Data 27 berhasil dihapus dari depan
Isi Linked List: 22 -> 17 -> 4 -> NULL
```

---

### Hapus Belakang
```
Data 27 berhasil dihapus dari belakang
Isi Linked List: 4 -> 17 -> 22 -> NULL
```

Apakah kamu mau saya tambahkan **diagram visual node (kotak dengan panah)** ke README supaya lebih mudah dipahami mahasiswa secara visual?
