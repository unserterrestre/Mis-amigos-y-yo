#include <stdio.h>

int main(){
	int operasi;
	float bilangan_pertama, bilangan_kedua;
	
	printf("Selamat datang di program matematika sederhana!\nProgram inim menyediakan kalkulator bagi operasi\n1. Pertambahan"
	"\n2. Pengurangan\n3. Perkalian\n4. Pembagian\nPilihlah salah satu operasi: ");
	scanf("%d", &operasi);

	  if(operasi == 1){
      printf("\nProgram melaksanakan program pertambahan.\nBerapakah bilangan pertama? Jawaban: ");
      scanf("%f", &bilangan_pertama);
      printf("Berapakah bilangan kedua? Jawaban: ");
      scanf("%f", &bilangan_kedua);
      float hasil = bilangan_pertama + bilangan_kedua;
      printf("Hasil perhitungan ialah %.2f.", hasil);
    }
    else if(operasi == 2){
      printf("\nProgram melaksanakan program pengurangan.\nBerapakah bilangan pertama? Jawaban: ");
      scanf("%f", &bilangan_pertama);
      printf("Berapakah bilangan kedua? Jawaban: ");
      scanf("%f", &bilangan_kedua);
      float hasil = bilangan_pertama - bilangan_kedua;
      printf("Hasil perhitungan ialah %.2f.", hasil);
    }
    
    else if(operasi == 3){
      printf("\nProgram melaksanakan program perkalian.\nBerapakah bilangan pertama? Jawaban: ");
      scanf("%f", &bilangan_pertama);
      printf("Berapakah bilangan kedua? Jawaban: ");
      scanf("%f", &bilangan_kedua);
      float hasil = bilangan_pertama * bilangan_kedua;
      printf("Hasil perhitungan ialah %.2f.", hasil);
    }

    else if(operasi == 4){
      printf("\nProgram melaksanakan program pembagian.\nBerapakah bilangan pertama? Jawaban: ");
      scanf("%f", &bilangan_pertama);
      printf("Berapakah bilangan kedua? Jawaban: ");
      scanf("%f", &bilangan_kedua);
      float hasil = bilangan_pertama / bilangan_kedua;
      printf("Hasil perhitungan ialah %.2f.", hasil);
    }

    else{
      printf("Pilihan operasi tidak valid. Masukkan salah satu angka dari 1 sampai 4\n");
    }

	
	printf("\n\nTerima kasih telah mempergunakan program kami.");
	return 0;
}
