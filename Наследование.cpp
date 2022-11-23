#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class Triangle {
public: Triangle(); ~Triangle();
      double  a, b, c;
      double per, alpha, betta, gamma;
      double Sq, rad1, rad2, rad3;
      double gr1, gr2, gr3;

      double  vvod_a()
      {
          cout << "\nInsert new a: ";
          cin >> a;
          return a;
      }
      double  vvod_b()
      {
          cout << "\nInsert new b: ";
          cin >> b;
          return b;
      }
      double  vvod_c()
      {
          cout << "\nInsert new c: ";
          cin >> c;
          if (a + b < c || a + c < b || b + c < a)
          {
              cout << "Error!!!" << endl;
              cout << "Insert new a, b, c: " << endl;

              cin >> a >> b >> c;
              return a, b, c;
          }
          else
              return c;
      }
      double  calculation_perimetr()
      {
          per = a + b + c;
          return per;
      }

      double  calculation_a_corner()
      {
          alpha = rad1 = acos(((b * b) + c * c - a * a) / (2 * c * b));
          gr1 = rad1 * 180 / 3.14;
          cout << "\nALPHA size is: \n" << gr1 << endl << endl;
          return alpha, gr1, rad1;
      }
      double calculation_b_corner()
      {
          betta = rad2 = acos(((a * a) + c * c - b * b) / (2 * c * a));
          gr2 = rad2 * 180 / 3.14;
          cout << "BETTA size is: \n" << gr2 << endl << endl;
          return betta, gr2, rad2;
      }
      double calculation_c_corner()
      {
          gamma = rad3 = acos(((b * b) + a * a - c * c) / (2 * a * b));
          gr3 = rad3 * 180 / 3.14;
          cout << "GAMMA size is: \n" << gr3 << endl << endl;
          return gamma, gr3, rad3;
      }
      void GET() { cout << a << "\n" << b << "\n" << c << "\n\n\n" << per << "\n\n" << gr1 << "\n" << gr2 << "\n" << gr3 << "\n\n"; }
};

class Equiteral : Triangle {
public:
    Equiteral();
    Equiteral(double x);
    ~Equiteral();

    double  change_a()
    {
        cout << "\n\nInsert new a: " << endl;
        cin >> a;
        if (a < 0)
        {
            cout << "Error!!!";
            cout << "Insert new a: " << endl;
            cin >> a;
            return a;
        }
        else
            return a;
    }
    double change_b()
    {
        cout << "Insert new b: " << endl;
        cin >> b;
        if (b < 0 || b != a)
        {
            cout << "Error!!! Chislo b dolzhno ravnyaztsya a!";
            cout << "Insert new b: " << endl;
            cin >> b;
            return b;
        }
        else
            return b;
    }
    double change_c()
    {
        cout << "Insert new b: " << endl;
        cin >> c;
        if (c < 0 || c != a || c != b)
        {
            cout << "Error!!! Chislo c dolzhno ravnyaztsya a i b!";
            cout << "Insert new c: " << endl;
            cin >> c;
            return c;
        }
        else
            return c;
    }
    double  calculation_square()
    {
        Sq = 0.5 * b * sqrt(b * b - (b / 2.0) * (b / 2.0));
        return Sq;
    }

    double  calculation_a_corner()
    {
        alpha = rad1 = acos(((b * b) + c * c - a * a) / (2 * c * b));
        gr1 = rad1 * 180 / 3.14;
        cout << "\nALPHA size is: \n" << gr1 << endl << endl;
        return alpha, gr1, rad1;
    }
    double calculation_b_corner()
    {
        betta = rad2 = acos(((a * a) + c * c - b * b) / (2 * c * a));
        gr2 = rad2 * 180 / 3.14;
        cout << "BETTA size is: \n" << gr2 << endl << endl;
        return betta, gr2, rad2;
    }
    double calculation_c_corner()
    {
        gamma = rad3 = acos(((b * b) + a * a - c * c) / (2 * a * b));
        gr3 = rad3 * 180 / 3.14;
        cout << "GAMMA size is: \n" << gr3 << endl << endl;
        return gamma, gr3, rad3;
    }

    void GET() { cout << a << "\n" << b << "\n" << c << "\n\n\n" << Sq << "\n\n" << gr1 << "\n" << gr2 << "\n" << gr3 << "\n\n"; }
    double x;
};

//constructor Triangle
Triangle::Triangle() :a(5), b(6), c(7) {};
Triangle::~Triangle() {};


//constructor Equiteral
Equiteral::Equiteral() {};
Equiteral::Equiteral(double x) { change_a(); change_b(); change_c(); calculation_a_corner(); calculation_b_corner(); calculation_c_corner(); calculation_square(); }
Equiteral::~Equiteral() {};


int  main()
{
    Triangle TR1;
    TR1.vvod_a();
    TR1.vvod_b();
    TR1.vvod_c();
    TR1.calculation_perimetr();
    TR1.calculation_a_corner();
    TR1.calculation_b_corner();
    TR1.calculation_c_corner();
    TR1.GET();

    Equiteral EQ1(1);
    EQ1.GET();
    getch();
    return 0;
}