/*
=====================================================================================================================================================================
Percobaan Pertama

#include <stdio.h>

int main()
{
    printf("Halo Akhirat !\n");
    return 0;
}
=====================================================================================================================================================================
*/


/*
=====================================================================================================================================================================
Percobaan Kedua

#include <stdio.h>

int main() {
    int i=1;
    int j=2;
    int k=3
    printf("Nilai i adalah : %d \n", i);
    printf("Nilai j adalah : %d \n", j);
    printf("Nilai k adalah : %d \n", k);
    return 0;
}
=====================================================================================================================================================================
*/


/*
=====================================================================================================================================================================
Percobaan Ketiga

int main() {

int i;
i=5;
printf ("Ini nilai i : %d \n", i);

i=i+1;
printf("Ini nilai i : %d \n", i);

return 0;

}
=====================================================================================================================================================================
*/


/* 
=====================================================================================================================================================================
Percobaan Keempat

#include<stdio.h>

int main() {
float f = 0.555;
float x = 1.5E3;

printf ("Ini nilai f : %f \n",f);
printf ("Ini nilai f : %5.2f \n",f);
printf ("Ini nilai x : %10.2f \n",f);

return 0;

} 
=====================================================================================================================================================================
*/


/* 
=====================================================================================================================================================================
Percobaan Kelima

#include <stdio.h>

int main() {
    char c  = 65;
    char c1 = 'Z';
    
    printf("Karakter = %c\n",c);
    printf("Karakter = %c\n",c1);
    
    printf ("Karakter dalam kode ASCII = %d\n",c);
    printf ("Karakter sebagai huruf = %c\n",c);
    printf ("Karakter dalam kode ASCII = %d\n",c1);
    printf ("Karakter sebagai huruf = %c\n",c1);
    
    return 0;
} 
=====================================================================================================================================================================
*/


/* 
=====================================================================================================================================================================
Percobaan Keeneam

#include <stdio.h>

#define KAMPUS "Universitas Amikom Yogyakarta"
#define IPK 3.7

int main() {
    
    printf ("Saya sedang kuliah di %s\n",KAMPUS);
    printf ("Semoga saya mendapat IPK %f",IPK);
    
return 0;

}

#include <stdio.h>
 
int main(void)
{
 const char situs[20] = "www.duniailkom.com";
 const float ipk = 4.00;
 
 printf("Sedang belajar bahasa C di %s",situs);
 printf("\n");
 
 printf("Semoga dapat IPK %f",ipk);
 printf("\n");
 
 return 0;
} 
=====================================================================================================================================================================
*/


/*
=====================================================================================================================================================================
Percobaan Ketujuh

#include<stdio.h>
int main ()
{
  int a;
  float x;
  
  printf ("Contoh membaca dan menulis, ketik nilai integer: ");
  scanf ("%d", &a); 
  printf ("Nilai yang dibaca : %d \n", a);
 
  printf ("ketik nilai sebuah bilangan riil: ");
  scanf ("%f", &x); 
  printf ("Nilai yang dibaca : %f \n", x);
 
 
  return 0;
} 


#include <stdio.h>

int main () {
    // membuat variabel
    char name[10], web_address[30];

    printf("Nama: ");
	scanf("%[^\n]s", &name);
    printf("Alamat web: ");
    scanf("%s", &web_address);

    printf("\n------------------------------\n");
    printf("Nama yang diinputkan: %s\n", name);
    printf("Alamat Web yang diinputkan: %s\n", web_address);
   
    return 0;
} 
=====================================================================================================================================================================
*/


/* 
=====================================================================================================================================================================
Percobaan Kedelapan

#include <stdio.h>

int main () {
	
	int x = 5;
	int y = 8;
	
	printf ("ini adalah nilai x+y  :%d \n", x+y);
	printf ("ini adalah nilai x-y  :%d \n", x-y);
	printf ("ini adalah nilai x*y  :%d \n", x*y);
	printf ("ini adalah nilai x/y  :%d \n", x/y);
	printf ("ini adalah nilai y/x  :%d \n", y/x);
	printf ("ini adalah nilai x%y  :%d \n", x%y);
	
	float a = 5, b = 8;
	
	printf ("ini nilai a/b  :%5.2f \n", a/b);
	printf ("ini nilai b/a  :%5.2f \n", b/a);
}
=====================================================================================================================================================================
*/


/* 
=====================================================================================================================================================================
Percobaan Kesembilan

#include <stdio.h>

int main () {
	
	int True  = 1;
	int False = 0;
	
	printf ("ini adalah nilai true AND true   : %d \n", True && True);
	printf ("ini adalah nilai true OR false   : %d \n", True || False);
	printf ("ini adalah nilai false AND true  : %d \n", False && True);
	printf ("ini adalah nilai false OR false  : %d \n", False || False);
	printf ("ini adalah nilai NOT true   :%d \n", !True);
	printf ("ini adalah nilai NOT false  :%d \n", !False);
}
=====================================================================================================================================================================
*/


/* 
=====================================================================================================================================================================
Percobaan Kesepuluh

#include <stdio.h>

int main() {
	
	int x = 5;
	int y = 8;
	
	printf ("hasil X < Y   :%d \n", x < y);
	printf ("hasil X > Y   :%d \n", x > y);
	printf ("hasil X <= Y  :%d \n", x <= y);
	printf ("hasil X >= Y  :%d \n", x >= y);
	printf ("hasil X == Y  :%d \n", x == y);
	printf ("hasil X != Y  :%d \n", x != y);
	printf ("\n");
	printf ("hasil X = X  :%d \n", x = x);
	printf ("hasil X == Y  :%d \n", x == y);
	printf ("hasil X != X  :%d \n", x != x);
	printf ("hasil X != Y  :%d \n", x != y);
	printf ("\n");
	printf ("hasil Y == Y  :%d \n", y == y);
	printf ("hasil Y != Y  :%d \n", y != y);
}
=====================================================================================================================================================================
*/


/*
=====================================================================================================================================================================
Latihan Kesebelas

#include<stdio.h>

int main() {
	
  int uang  = 6000;
  int hujan = 1; 

   printf ("uang>5000 dan hujan: %d \n",  (uang>5000) && (!hujan));
 
   uang  = 6000;
   hujan = 0; 
   printf ("uang>5000 dan tidak hujan: %d \n",  (uang>5000) && (!hujan));
 
  return 0;
  
}
=====================================================================================================================================================================
*/


/*
=====================================================================================================================================================================
Latihan Keduabelas

int i = 1;
int a = i++; /* a = i; i = i + 1; 
System.out.println("a = " + a);
System.out.println("i = " + i);

a = 1
i = 2

----------------------------------------

int i = 1;
int a = ++i; /* i = 1 + i; a = i; 
System.out.println("a = " + a);
System.out.println("i = " + i);

a = 2
i = 2 
=====================================================================================================================================================================
*/


/* =====================================================================================================================================================================
Latihan Ketigabelas

#include<stdio.h>
int main ()
{

  int a;

  printf ("Contoh IF satu kasus \n");
  printf ("Ketikkan suatu nilai integer ");
  scanf ("%d", &a);
  if (a >= 0)
    {
      printf ("Nilai a positif %d \n", a);
    }
  return 0;
}

#include <stdio.h>

int main() {
	
	int a;
	
	printf ("Ketikan suatu nilai integer : ");
	scanf ("%d", &a);
	
	if (a >= 0) {
		printf ("Nilai %d",a); printf(" adalah positif");
	}
	else {
		printf ("Nilai %d",a); printf(" adalah negatif");
	}
	
	return 0;
}

#include<stdio.h>
int main ()
{

  int a;

  printf ("Ketikkan suatu nilai integer :");
  scanf ("%d", &a);
  if (a > 0)
    {
      printf ("Nilai a positif %d \n", a);
    }
  else if (a == 0)
    {
      printf ("Nilai Nol %d \n", a);
    }
  else
    {
      printf ("Nilai a negatif %d \n", a);
    }
  return 0;
}
=====================================================================================================================================================================
*/


/* =====================================================================================================================================================================

//Latihan Keempatbelas//


//------------------------
Perulangan menggunakan for
//------------------------

#include <stdio.h>

//Menggunakan scanf sebagai nilai n//
int main () {
	
	int i;
	int n;
	
	printf ("Mau berapa banyak? : ");
	scanf ("%d", &n);
	printf ("\n");
	
	for (i=0; i<n; i++) {
		printf ("Saya bersyukur belajar bahasa C\n");
	}
	
	return 0;
	
------------------------------------------------------------

//Menggunakan deklarasi sebagai nilai n//
int main () {
	
	int i;
	int n = 5;
	
	for (i=0; i<n; i++) {
		printf ("Saya bersyukur belajar bahasa C\n");
	}
	
	return 0;
}


//--------------------------
Perulangan menggunakan while
//--------------------------

#include <stdio.h>

int main () {
	
	int i = 0;
	
	while (i<3) {
		printf ("saya bersyukur belajar bahasa C \n");
		i++;
	}
	
	return 0;
	
}


//----------------------------
Perulangan menggunakan while_do
//----------------------------

#include <stdio.h>

int main () {
	
	int i = 0;
	
	do {
		printf ("saya bersyukur belajar bahasa C\n");
		i++;
	} while (i<3);
	
	return 0;
}


//----------------------------
        Infinite loop
//----------------------------

/*#include <stdio.h>

int main () {
	
	printf ("Program akan looping, akhiri dengan ctrl+c");
	
	while (1) {
		printf ("Tunggu ^c...\n");
	}
	
	return 0;
}*/

/*#include <stdio.h>

int main (void) {
	
	int a = 0;
	
	while (a<10) {
		
		printf ("%d\n", a);
		
		if (a = 5)
			printf ("a sama dengan 5\n");
		a++;
	}
	return 0;
}
=====================================================================================================================================================================
*/

/* ====================================================================================================================================================================

Latihan Kelimabelas


#include <stdio.h>

int main () {
	
	int   Tab     [5]  =  {1,2,3,4,5};
	float TabX    [3]  =  {1.5, 3.5E2, 9.99};
	char  TabChar [4]  =  {'1','2','@','Z'};
	
	int i;
	
	for (i=0; i<5; i++) { //i=4; i>-1; i--
		printf ("Tab[%d] = %d;\n",i, Tab[i]);
	}
	printf ("\n");

	return 0;
	
-------------------------------------------------------

#include <stdio.h>

int main () {
	
	int i;
	int Tab [5];
	
	for (i=0; i<5; i++) {
		printf ("Masukkan nilai : ");
		scanf ("%d", &Tab[i]);
	}
	
	printf("\n");
	
	for (i=0; i<5; i++) {
		printf ("Tab[%d] = %d;\n", i, Tab[i]);
	}
	
	return 0;
}

----------------------------------------------------------

#include <stdio.h>

int main () {
	
	int i;
	int Tab [10] = {1,50,6,200,3,150,30,8,99,100};
	int max = Tab [0];
	
	for (i=1; i<10; i++) {
		if (Tab[i] > max) {
			max = Tab[i];
		}
	}
	
	printf ("Nilai maksimal adalah %d", max);
	
	return 0;
}

------------------------------------------------------------


/* ====================================================================================================================================================================

Latihan Keenambelas


//----------------------------
     INI SORTING YA GAES!!
//----------------------------

#include<stdio.h>
int main () {
  int i;
  int Tab[10]= { 1, 50 , 6 , 200, 3, 100, 30, 8, 99, 100 };
  int max; 
  int k, temp; 
  
  for (i=0; i<9; i++ ){

     max = i;
     for (k= i+1 ;k< 10; k++)  {
        if (Tab[k]> Tab[max]) {
           max=k;
        }
     } 
 
    temp= Tab[i];
    Tab[i]= Tab[max];
    Tab[max] = temp;
  }
  for (i=0;i<10;i++) {
     printf (" %d ; ", Tab[i]);
  }
  return 0;
}


//----------------------------
    INI SEARCHING YA GAES!!
//----------------------------

#include <stdio.h>

int main () {
	
	int i;
	int Tab[10] = {1,50,6,200,3,100,30,8,99,100};
	int X = 8;
	
	i = 0;
	while ( (Tab[7] != 8) && (i<9) ) {
		i++;
	} if (Tab[i]==X) {
		printf ("indeks bernilai X = %d", i);
	} else {
		printf ("nilai tidak ditemukan");
	}
	
	return 0;
}
=====================================================================================================================================================================
*/





































































































































