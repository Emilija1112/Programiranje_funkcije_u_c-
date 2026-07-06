# Programiranje_funkcije_u_c++
Priloženi C++ program demonstrira ključne koncepte lekcije o funkcijama kroz praktičan primer kalkulatora indeksa telesne mase (BMI):

Prototip funkcije (Deklaracija): Na samom vrhu programa (linije 5 i 6) navedeni su prototipi funkcija izracunaj_bmi i prikazi_kategoriju. Pošto su tela funkcija napisana ispod main funkcije, deklaracija je obavezna kako bi kompajler prepoznao njihovu strukturu prilikom poziva.

Funkcija sa povratnom vrednošću (izracunaj_bmi): Ova funkcija ima povratni tip float jer rezultat deljenja težine i kvadrata visine daje decimalan broj. Unutar funkcije se koristi ključna reč return koja prekida rad funkcije i vraća izračunatu vrednost u main.

Funkcija bez povratne vrednosti (prikazi_kategoriju): Ispred naziva ove funkcije stoji ključna reč void. Ona prima izračunati BMI, vrši logičku proveru kroz if-else sistem i ispisuje rezultat na ekran pomoću cout. Ova funkcija ne sadrži naredbu return sa vrednošću.

Prenos parametara po vrednosti: Obe funkcije primaju argumente po vrednosti (float tezina, float visina, float bmi). To znači da funkcije rade sa lokalnim kopijama podataka prosleđenih iz main programa, čime se garantuje da se originalne promenljive unutar main-u ne mogu slučajno izmeniti.
