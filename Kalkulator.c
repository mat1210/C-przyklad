#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(int argc, char *argv[])
{
	
int s;
float a,b,c,dodawanie,odejmowanie,mnozenie,dzielenie,potegowanie,pierwiastkowanie,delta,x1,x2,pierwiastek;
HANDLE kolor;
kolor = GetStdHandle( STD_OUTPUT_HANDLE );
SetConsoleTextAttribute( kolor, 10 );
printf ("                                Kalkulator Ver.2.03\n\n");
SetConsoleTextAttribute( kolor, 30 );
printf ("Wybierz rodzaj dzialania:\n\n**********************\n*Dodawanie        [1]*\n*Odejmowanie      [2]*\n*Mnozenie         [3]*\n*Dzielenie        [4]*\n*Potegowanie      [5]*\n*Pierwiastkowanie [6]*\n*Obliczanie delty [7]*\n");
printf("**********************\n");
scanf ("%d", &s);
switch (s)

{
	case 1:
        SetConsoleTextAttribute( kolor, 11 );
        printf ("                                ***********\n");
        printf ("                                *DODAWANIE*\n                                ***********\n\n");
	    printf ("                           Podaj Pierwsza Liczbe:\n                                     ");
	    SetConsoleTextAttribute( kolor, 7 );
        scanf("%f", &a);
        SetConsoleTextAttribute( kolor, 11 );
		printf ("                           Podaj Druga Liczbe:\n                                     ");
		SetConsoleTextAttribute( kolor, 7 );
		scanf ("%f", &b);
		dodawanie=a+b;
		SetConsoleTextAttribute( kolor, 12 );
		printf ("\n                              %.2f+%.2f= %.2f\n\n", a,b,dodawanie);
		SetConsoleTextAttribute( kolor, 13 );
		break;

	case 2:
		SetConsoleTextAttribute( kolor, 11 );
		printf ("                                *************\n");
        printf ("                                *ODEJMOWANIE*\n                                *************\n\n");
		printf ("                            Podaj Pierwsza Liczbe\n                                     ");
		SetConsoleTextAttribute( kolor, 7 );
        scanf("%f" ,&a);
        SetConsoleTextAttribute( kolor, 11 );
		printf ("                            Podaj Druga Liczbe\n                                     ");
		SetConsoleTextAttribute( kolor, 7 );
		scanf ("%f", &b);
		odejmowanie=a-b;
		SetConsoleTextAttribute( kolor, 12 );
		printf ("\n                               %.2f-%.2f= %.2f\n\n", a,b,odejmowanie);
		SetConsoleTextAttribute( kolor, 13 );
		break;

	case 3:
		SetConsoleTextAttribute( kolor, 11 );
		printf ("                                    **********\n");
		printf ("                                    *MNOZENIE*\n                                    **********\n\n");
		printf ("                               Podaj Pierwsza Liczbe\n                                        ");
		SetConsoleTextAttribute( kolor, 7 );
        scanf("%f" ,&a);
        SetConsoleTextAttribute( kolor, 11 );
		printf ("                               Podaj Druga Liczbe\n                                        ");
		SetConsoleTextAttribute( kolor, 7 );
		scanf ("%f", &b);
		mnozenie=a*b;
		SetConsoleTextAttribute( kolor, 12 );
		printf ("\n                                  %.2f*%.2f= %.2f\n\n", a,b,mnozenie);
		SetConsoleTextAttribute( kolor, 13 );
		break;

	case 4:
		SetConsoleTextAttribute( kolor, 11 );
		printf ("                                    ***********\n");
		printf ("                                    *DZIELENIE*\n                                    ***********\n\n");
		printf ("                               Podaj Pierwsza Liczbe\n                                        ");
		SetConsoleTextAttribute( kolor, 7 );
        scanf("%f" ,&a);
        SetConsoleTextAttribute( kolor, 11 );
		printf ("                               Podaj Druga Liczbe\n                                        ");
		SetConsoleTextAttribute( kolor, 7 );
		scanf ("%f", &b);
		if (b==0)
		{
			SetConsoleTextAttribute( kolor, 12 );
		     printf ("\n                               Nie dziel przez 0\n\n");		
	    }
		else 
		{
		dzielenie=a/b;
		SetConsoleTextAttribute( kolor, 12 );
		printf ("\n                                  %.2f/%.2f= %.2f\n\n", a,b,dzielenie);
		}
		SetConsoleTextAttribute( kolor, 13 );
		break;

	case 5:
		SetConsoleTextAttribute( kolor, 11 );
		printf ("                                    *************\n");
		printf ("                                    *POTEGOWANIE*\n                                    *************\n\n");
		printf ("                                    Podaj Liczbe\n                                         ");
		SetConsoleTextAttribute( kolor, 7 );
        scanf("%f" ,&a);
		potegowanie=a*a;
		SetConsoleTextAttribute( kolor, 12 );
		printf ("\n                             Potega liczby %.2f to %.2f\n\n", a,potegowanie);
		SetConsoleTextAttribute( kolor, 13 );
		break;

	case 6:
		SetConsoleTextAttribute( kolor, 11 );
		printf ("                                 ******************\n");
		printf ("                                 *PIERWIASTKOWANIE*\n                                 ******************\n\n");
		printf ("                                    Podaj liczbe\n                                         ");
		SetConsoleTextAttribute( kolor, 7 );
        scanf("%f" ,&a);
        if (a<0)
        {
        	SetConsoleTextAttribute( kolor, 12 );
            printf ("\n                       Nie Pierwiastkuje Sie Liczb Ujemnych\n\n");
	    }
	    else
	    {
		    pierwiastkowanie=sqrt (a);
		    SetConsoleTextAttribute( kolor, 12 );
		    printf ("\n                           Pierwiastek liczby %.2f to %.2f\n\n", a,pierwiastkowanie);
		}
		SetConsoleTextAttribute( kolor, 13 );
		break;

	case 7:
		SetConsoleTextAttribute( kolor, 11 );
		printf ("                                 ******************\n");
		printf ("                                 *OBLICZANIE DELTY*\n                                 ******************\n\n");
		printf ("                                       Podaj a\n                                         ");
		SetConsoleTextAttribute( kolor, 7 );
		scanf ("%f", &a);
		SetConsoleTextAttribute( kolor, 11 );
		printf ("                                       Podaj b\n                                         ");
		SetConsoleTextAttribute( kolor, 7 );
		scanf ("%f", &b);
		SetConsoleTextAttribute( kolor, 11 );
		printf ("                                       Podaj c\n                                         ");
		SetConsoleTextAttribute( kolor, 7 );
		scanf ("%f", &c);
		delta=b*b-(4*a*c);
		SetConsoleTextAttribute( kolor, 12 );
		printf ("\n                                  Delta Wynosi %.2f\n", delta);
		if (delta<0)
		{
			SetConsoleTextAttribute( kolor, 15 );
			printf ("\n                             Rownanie nie ma pierwiastkow\n\n");
		}
		else if (delta==0)
		{
			SetConsoleTextAttribute( kolor, 15 );
			printf ("\n                         Rownanie posiada jeden pierwiastek\n\n");
			x1=-b/(2*a);
			SetConsoleTextAttribute( kolor, 12 );
			printf("                                       x1=%.2f\n\n", x1);
		}
		else 
		    {
		    pierwiastek=sqrt(delta);
		    x1=(b+pierwiastek)/(2*a);
		    x2=(b-pierwiastek)/(2*a);
		    printf ("\n                                       x1=%.2f\n" ,x1);
		    printf ("                                       x2=%.2f\n\n" ,x2);
		    }
		    SetConsoleTextAttribute( kolor, 13 );
	    break;
	default:
	SetConsoleTextAttribute( kolor, 12 );
	printf ("                              -------------------------\n");
	printf ("                              *Nie ma takiego programu*\n                              -------------------------\n\n");
}
    SetConsoleTextAttribute( kolor, 0x00f5 );
	printf ("                                                           ------------------\n");
	printf ("                                                           *AUTOR: matth3w94*\n                                                           ------------------\n");
	SetConsoleTextAttribute( kolor, 15 );
system("pause");
return 0;
}
