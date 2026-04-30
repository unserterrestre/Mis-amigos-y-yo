#include <stdio.h>

int main(){
	int operasi;
	float bilangan_pertama, bilangan_kedua;
	
	printf("Selamat datang di program matematika sederhana!\nProgram inim menyediakan kalkulator bagi operasi\n1. Pertambahan"
	"\n2. Pengurangan\n3. Perkalian\n4. Pembagian\nPilihlah salah satu operasi: ");
	scanf("%d", &operasi);

	while (operasi < 1 || operasi > 4) {
        printf("\nProgram ini menyediakan kalkulator bagi operasi:\n");
        printf("1. Pertambahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n");
        printf("Pilihlah salah satu operasi (1-4): ");
        scanf("%d", &operasi);

        
        if (operasi < 1 || operasi > 4) {
            printf(">> Pilihan tidak valid. Silakan masukkan angka 1, 2, 3, atau 4.\n");
        }
    }

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

	
	printf("\n\nTerima kasih telah mempergunakan program kami.");
	return 0;
}
