# Materi dan Tugas Algoritma Struktur Data
SEARCHING

Searching adalah pencarian data yang dilakukan dengan cara menelusuri data-data yang ada. Tempat pencarian data ini dapat berupa array pencarian internal dan pencairan external.
Ada dua jenis searching yaitu : 

1. [Sequential Searching](https://github.com/Indramustajab/Algoritma-Struktur-Data/blob/main/Searching/latihan1.c)
adalah suatu pencarian data didalam array yang akan menelusuri semua elemen-elemen array dari awal sampai akhir dan data-data yang akan ditelusuri tidak perlu diurutkan terlebih dahulu. Pencarian berurutan ini mempunyai prinsip, data yang akan dicari akan dibandingkan satu per satu secara berurutan sampai data yang dicari tersebut dapat ditemukan atau tidak ditemukan.

2. [Binary Search](https://github.com/Indramustajab/Algoritma-Struktur-Data/blob/main/Searching/latihan2.c)
adalah suatu pencarian data dalam array yang akan menelusuri semua elemen-elemen array dari awal sampai akhir dan data-data yang akan ditelusuri tidak perlu diurutkan terlebih dahulu. Pencarian Binary search ini menggunakan prinsip :
-	Mula-mula diambil posisi awal 0 dan posisi akhir N-1. kemudian dicari posisi data tengah dengan rumus (posisi awal + posisi akhir)/2. Kemudian data yang dicari akan dibandingkan dengan data tengah.
-	 Jika lebih kecil proses dilakukan kembali tetapi posisi akhir dianggap sama dengan posisi tengah-1.
-	 Jika lebih besar, proses dilakukan kembali tetapi posisi awal dianggap sama dengan posisi tengah +1. Jika ada data sama, itu berarti data telah ditemukan.
