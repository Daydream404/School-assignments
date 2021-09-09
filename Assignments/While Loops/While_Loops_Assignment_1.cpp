#include <iostream>
#include <math.h>
#include <stdio.h>  

using namespace std;

double z(float x, float y)
{
    float z = (pow(x, 3) - y) / 4;
    return z;
}
double c(float a, float b)
{
    float c = sqrt(a) + b;
    return c;
}
double d(float a, float b, float c1)
{
    float d = (sqrt(a + b)) / c1;
    return d;
}

int main()
{
    int vyber;
    float x = 0, y = 0, a = 0, b = 0, c1 = 0, max = 0, min = 0;
    float a3 = 0, b3 = 0, c3 = 0;
    double D = (b * b) - 4 * a * c1;
    float pole[3];
    float R=0, l=0, S = 0;
    cout << "Operacie s cislami\n";
    do {
        cout << "\nOperacie: 1.Vypocet Z=(pow(x, 3)-y)/4\n\t  2.Vypocet C=sqrt(a)+b \n\t  3.Vypocet D=(sqrt(a + b))/c\n\t  4.Vypocet KR pow(ax, 2)+bx+c=0 \n\t  5.Najvacsie a Najmensie cislo \n\t  6.Vypocet Cu \n\t  7.Vznik trojuholnika \n\t  0.Koniec";
        cout << "\nVyber si:";
        cin >> vyber;
        switch (vyber)
        {
        case 0:
            cout << "Koniec";
            break;
        case 1:
            cout << "1.Vypocet Z=(pow(x, 3)-y)/4" << endl;
            cout << "Zadaj zaklad mocniny = ";
            cin >> x;
            cout << "Zadaj y = ";
            cin >> y;
            cout << "Vysledok Z=(pow(" <<x<<"" ",3)-" ""<<y<<"" ")/4"<<endl;
            cout << "Z = " << z(x,y)<<endl;
            cout << "\n";
            break;
        case 2:
            cout << "2.Vypocet C=sqrt(a)+b"<<endl;
            cout << "Zadaj odmocninu z dvoch = ";
            cin >> a;
            cout << "Zadaj cislo b = ";
            cin >> b;
            cout << "Vysledok C=sqrt(""" << a << """)+" "" << b << ""<<endl;
            cout << "C= " << c(a,b)<<endl;
            cout << "\n";
            break;
        case 3:
            cout << "3.Vypocet D=(sqrt(a + b))/c"<<endl;
            cout << "Zadaj 1 odmocninu z dvoch(a) = ";
            cin >> a;
            cout << "Zadaj druhu odmocninu z dvoch(b) = ";
            cin >> b;
            cout << "Zadaj cislo c = ";
            cin >> c1;
            cout<<"Vysledok D=(sqrt(" ""<<a<<"" "+" ""<<b<<"" "))/" ""<<c1<<""<<endl;
            cout << "D= " << d(a, b, c1)<<endl;
            break;
        case 4:
            cout << "4.Vypocet KR pow(ax, 2)+bx+c=0"<<endl;
            cout << "Zadaj a = ";
            cin >> a;
            cout << "Zadaj b = ";
            cin >> b;
            cout << "Zadaj c = ";
            cin >> c1;
            if (D > 0) {
                cout << "Vysledok: ";
                cout << "x1 =";
                cout << (-b + sqrt(b * b - 4 * a * c1)) / (2 * a);
                cout << "\n\t  x2 = ";
                cout << (-b - sqrt(b * b - 4 * a * c1)) / (2 * a) << endl;
                cout << "\n";
            }
            else if (D == 0) {
                cout << "x1 =";
                cout << (-b + sqrt(b * b - 4 * a * c1)) / (2 * a);
                cout << "\n";
            }
            else if (D < 0) {
                cout << "Kvadraticka rovnica nema riesenie\n";
            }
            break;
        case 5:
            cout << "5.Najvacsie a Najmensie cislo"<<endl;
            cout << "Zadaj 1. cislo = "; 
            cin >> pole[0];
            cout << "Zadaj 2. cislo = "; 
            cin >> pole[1];
            cout << "Zadaj 3. cislo = "; 
            cin >> pole[2];
            if (pole[0] > pole[1] && pole[0] > pole[2])
            {
                max = pole[0];
            }
            else if (pole[1] > pole[2] && pole[1] > pole[0])
            {
                max = pole[1];
            }
            else 
            { 
                max = pole[2]; 
            }
            if (pole[0] < pole[1] && pole[0] < pole[2])
            { 
                min = pole[0]; 
            }
            else if (pole[1] < pole[2] && pole[1] < pole[0])
            {
                min = pole[1];
            }
            else
            { 
                min = pole[2];
            }
            cout << "Vysledok: ";
            cout << "Najvacsie cislo = " << max<<endl;
            cout << "\t  Najmensie cislo = " << min<<endl;
            break;
        case 6:
            cout << "6.Vypocet Cu"<<endl;
            cout << "Zadaj dlzku vodica(m): ";
            cin >> l;
            cout << "Zadaj prierez vodica(m2): ";
            cin >> S;
            R = 1.75e-8 * (l / S);
            cout << "R(ohm)= " << R << "";
            break;
        case 7:
            cout << "7.Vznik trojuholnika"<<endl;
            cout << "Zadaj stranu a: ";
            cin >> a3;
            cout << "Zadaj stranu b: ";
            cin >> b3;
            cout << "Zadaj stranu c: ";
            cin >> c3;
            if (((a3 + b3) > c3) && ((a3 + c3) > b3) && ((b3 + c3) > a3))
            {
                cout << "Je mozne zostrojit trojuholnik";
            }
            else
            {
                cout << "Nie je mozne zostrojit trojuholnik.";
            }
            break;
        default:
            cout << "Zadal si zly vyber(1-7)" << endl;
            break;
        }
    } while (vyber != 0);
}
