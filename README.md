# Materi dan Tugas Algoritma Struktur Data
A.  [SEARCHING](https://github.com/Indramustajab/Algoritma-Struktur-Data/tree/main/Searching)

Searching adalah pencarian data yang dilakukan dengan cara menelusuri data-data yang ada. Tempat pencarian data ini dapat berupa array pencarian internal dan pencairan external.
Ada dua jenis searching yaitu : 

1. [Sequential Searching](https://github.com/Indramustajab/Algoritma-Struktur-Data/blob/main/Searching/latihan1.c)
adalah suatu pencarian data didalam array yang akan menelusuri semua elemen-elemen array dari awal sampai akhir dan data-data yang akan ditelusuri tidak perlu diurutkan terlebih dahulu. Pencarian berurutan ini mempunyai prinsip, data yang akan dicari akan dibandingkan satu per satu secara berurutan sampai data yang dicari tersebut dapat ditemukan atau tidak ditemukan.

2. [Binary Search](https://github.com/Indramustajab/Algoritma-Struktur-Data/blob/main/Searching/latihan2.c)
adalah suatu pencarian data dalam array yang akan menelusuri semua elemen-elemen array dari awal sampai akhir dan data-data yang akan ditelusuri tidak perlu diurutkan terlebih dahulu. Pencarian Binary search ini menggunakan prinsip :
-	Mula-mula diambil posisi awal 0 dan posisi akhir N-1. kemudian dicari posisi data tengah dengan rumus (posisi awal + posisi akhir)/2. Kemudian data yang dicari akan dibandingkan dengan data tengah.
-	 Jika lebih kecil proses dilakukan kembali tetapi posisi akhir dianggap sama dengan posisi tengah-1.
-	 Jika lebih besar, proses dilakukan kembali tetapi posisi awal dianggap sama dengan posisi tengah +1. Jika ada data sama, itu berarti data telah ditemukan.

B.  [SORTING](https://github.com/Indramustajab/Tugas-Algoritma-Struktur-Data/tree/main/Sorting)

Sorting adalah proses pengurutan atau penyortiran sebuah data yang tersusun secara tidak beraturan hingga bisa tersusun rapi dari data yang terkecil menuju ke data paling besar atau sebaliknya.

[TUGAS INDIVIDU](https://github.com/Indramustajab/Tugas-Algoritma-Struktur-Data)
   
1. [Bubble Sort](https://github.com/Indramustajab/Tugas-Algoritma-Struktur-Data/blob/main/Sorting/Bubble%20Sort.c)
 
2. [Selection Sort](https://github.com/Indramustajab/Tugas-Algoritma-Struktur-Data/blob/main/Sorting/Selection%20Sort.c)
  
3. [Insertion Sort](https://github.com/Indramustajab/Tugas-Algoritma-Struktur-Data/blob/main/Sorting/Insertion%20Sort.c)

[TUGAS CHALLENGE](https://github.com/Indramustajab/Tugas-Algoritma-Struktur-Data/tree/main/Tugas%20Challenge)

1. [Bubble Sort](https://github.com/Indramustajab/Tugas-Algoritma-Struktur-Data/blob/main/Tugas%20Challenge/Bubble%20Sort.c)
2. [Exchange Sort](https://github.com/Indramustajab/Tugas-Algoritma-Struktur-Data/blob/main/Tugas%20Challenge/Exchange%20Sort.c)

C.  [Linked List](https://github.com/Indramustajab/Algoritma-Struktur-Data/tree/main/Linked%20List)

Linked list adalah sejumlah node yang dihubungkan secara linier dengan bantuan pointer.

-  [Code Latihan 1](https://github.com/Indramustajab/Algoritma-Struktur-Data/blob/main/Linked%20List/Latihan%20Linked%20List%201.c)
-  [Code Latihan 2](https://github.com/Indramustajab/Algoritma-Struktur-Data/blob/main/Linked%20List/Latihan%20Linked%20List%202.c)
-  [Tugas Challenge Linked List](https://github.com/Indramustajab/Algoritma-Struktur-Data/blob/main/Linked%20List/Tugas%20Challenge%20Linked%20List.c)

D. [Stack & Queue](https://github.com/Indramustajab/Algoritma-Struktur-Data/tree/main/STACK)

Stack atau tumpukan adalah suatu stuktur data yang penting dalam pemrograman -> eksekusi suatu fungsi menggunakan prinsip Stact. Stack juga bersifat LIFO (Last In First Out) yaitu benda yang terakhir masuk ke dalam stack akan menjadi benda pertama yang dikeluarkan dari stack. 
-  [Code latihan Stack](https://github.com/Indramustajab/Algoritma-Struktur-Data/blob/main/STACK/Latihan%20STACK.c)

Queue merupakan antrian yang elemen pertama kali masuk ke antrian akan keluar pertama kalinya (FIFO) dan Dequeue adalah mengeluarkan satu elemen dari suatu antrian. Didalam dequeue terdapat satu buah pintu masuk di suatu ujung dan satu buah pintu keluar di ujung satunya sehingga dequeue ini membutuhkan variabel Head dan Tail
-  [Code latihan Queue](https://github.com/Indramustajab/Algoritma-Struktur-Data/blob/main/Stack%20%26%20Queue/Latihan%20Queue.c)
