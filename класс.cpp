#include<iostream.h>
#include<conio.h>
#include<math.h>
class point
{
    float x, y;
public:
    point();
    void vvod(float inputX, float inputY);
    void vivod();
    void r1();
    void peremestX();
    void peremestY();
    void r2(point p);
    void sravnit(point p);
    void polyar();
    float getX() { return x; };
    float getY() { return y; };
};
point::point()
{
    x = y = 0;
}
void point::vvod(float inputX, float inputY)
{
    x = inputX;
    y = inputY;
}
void point::vivod()
{
    cout << "(" << x << ";" << y << ");" << endl;
}
void point::r1()
{
    float r;
    r = sqrt(x * x + y * y);
    cout << "Rasstoyanie do nachala coordinat = " << r << endl;
}
void point::peremestX()
{
    float rx;
    cout << "Vvedite chislo,na kotoroe nuzhno peremestit' tochku po osi X: ";
    cin >> rx;
    x += rx;
    cout << "Tekushee polozhenie tochki ";
    vivod();
}
void point::peremestY()
{
    float ry;
    cout << "Vvedite chislo,na kotoroe nuzhno peremestit' tochku po osi Y: ";
    cin >> ry;
    y += ry;
    cout << "Tekushee polozhenie tochki ";
    vivod();
}
void point::r2(point p)
{
    float r;
    r = sqrt((x - p.getX()) * (x - p.getX()) + (y - p.getY()) * (y - p.getY()));
    cout << "Rasstoyznie mezhdu tochkami = " << r << endl;
}
void point::sravnit(point p)
{
    if (x == p.getX() && y == p.getY())
        cout << "Tochki sovpadayut" << endl;
    else
        cout << "Tochki ne sovpadayut" << endl;
}
void point::polyar()
{
    float e, r;
    r = sqrt(x * x + y * y);
    e = acos(x / r) * 180.0 / 3.14;
    cout << "Polyarnaya koordinata tochki: ";
    cout << "(" << r << ";" << e << ");" << endl;
}
void main()
{
    clrscr();
    int i, n, s;
    float inputX, inputY;
    const int con = 5;
    point p[con];
    do
    {
        cout << "\t Viberite operaciu:" << endl;
        cout << "1: Zadat' tochku" << endl;
        cout << "2: Vivesti tochku s nomerom" << endl;
        cout << "3: Vivesti vse tochki" << endl;
        cout << "4: Opredelit' rasstoyaie do nachala koordinat" << endl;
        cout << "5: Peremeshenie tochki po osi X" << endl;
        cout << "6: Peremeshenie tohki po osi Y" << endl;
        cout << "7: Opredelit' rassoyanie mezhdu 2 tochkami" << endl;
        cout << "8: Sravnenie na sovpadenie i nesovpadenie koordinat tochek" << endl;
        cout << "9: Preobrazovanie dekartovih koordinat v polyarnie" << endl;
        cout << "0: Vihod iz pogrammi" << endl;
        cin >> s;
        switch (s)
        {
        case 1:
            cout << "Vvedite nomer tochki:";
            cin >> i;
            cout << "Zadayte koordinatu tochki x y:";
            cin >> inputX;
            cin >> inputY;
            p[i].vvod(inputX, inputY);
            break;
        case 2:
            cout << "Vvedite nomer tochki:";
            cin >> i;
            p[i].vivod();
            break;
        case 3:
            for (i = 0; i < con; i++)
                p[i].vivod();
            break;
        case 4:
            cout << "Vvedite nomer tochki:";
            cin >> i;
            p[i].r1();
            break;
        case 5:
            cout << "Vvedite nomer tochki:";
            cin >> i;
            p[i].peremestX();
            break;
        case 6:
            cout << "Vvedite nomer tochki:";
            cin >> i;
            p[i].peremestY();
            break;
        case 7:
            cout << "Vvedite nomer pervoy tochki:";
            cin >> i;
            cout << "Vvedite nomer vtoroy tochki:";
            cin >> n;
            p[i].r2(p[n]);
            break;
        case 8:
            cout << "Vvedite nomer pervoy tochki:";
            cin >> i;
            cout << "Vvedite nomer vtoroy tochki:";
            cin >> n;
            p[i].sravnit(p[n]);
            break;
        case 9:
            cout << "Vvedite nomer tochki:";
            cin >> i;
            p[i].polyar();
            break;
        default:
            cout << "Vi vveli neverniy nomer operacii" << endl;
        }
    } while (s != 0);
}