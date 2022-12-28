#include <iostream>
#include <sstream>
using namespace std;
//variant 4
class CMoney
{
    long roubles;
    unsigned int copecks;
    float wholeSum;
    void splitUp()
    {
        roubles = (int)wholeSum;
        copecks = (int)((wholeSum - (int)wholeSum) * 100);
    };
public:

    CMoney()
    {
        cin >> wholeSum;
        splitUp();
    };
    string toString()
    {
        stringstream out;
        string str;
        out << roubles << ",";
        if (copecks < 10)
        {
            out << '0';
        }
        out << copecks;
        str = out.str();
        return str;
    };
    CMoney operator+ (CMoney arg)
    {
        CMoney temp;
        temp.wholeSum = this->wholeSum + arg.wholeSum;
        temp.splitUp();
        return temp;
    };
    CMoney operator- (CMoney arg)
    {
        CMoney temp;
        temp.wholeSum = this->wholeSum - arg.wholeSum;
        temp.splitUp();
        return temp;
    };
    float operator/ (CMoney arg)
    {
        float temp;
        temp = this->wholeSum / arg.wholeSum;
        return temp;
    };
    CMoney operator/ (float arg)
    {
        CMoney temp;
        temp.wholeSum = this->wholeSum / arg;
        temp.splitUp();
        return temp;
    };
    CMoney operator* (float arg)
    {
        CMoney temp;
        temp.wholeSum = this->wholeSum * arg;
        temp.splitUp();
        return temp;
    };
    bool operator== (CMoney arg)
    {
        return (this->wholeSum == arg.wholeSum);
    };
    bool operator!= (CMoney arg)
    {
        return (this->wholeSum != arg.wholeSum);
    };
    bool operator> (CMoney arg)
    {
        return (this->wholeSum > arg.wholeSum);
    };
    bool operator< (CMoney arg)
    {
        return (this->wholeSum < arg.wholeSum);
    };
    bool operator>= (CMoney arg)
    {
        return (this->wholeSum >= arg.wholeSum);
    };
    bool operator<= (CMoney arg)
    {
        return (this->wholeSum <= arg.wholeSum);
    };
};

int main()
{
    cout << "Write first number: \n";
    CMoney a1;
    cout << "Write second number: \n";
    CMoney a2;
    char sign;
    cout << "write sign of operation(+,-,*,/,%,!=,<,>,>=,<=,==)";
    cin >> sign;
    switch (sign)
    {
    case '+':
    {
        CMoney a3;
        a3 = a1 + a2;
        cout << "result : " << a3.toString();
    }
    break;
    case '-':
    {
        CMoney a3;
        a3 = a1 - a2;
        cout << "result : " << a3.toString();
    }
    break;
    case '*':
    {
        float param;;
        cout << "Write parametr of multiplying: ";
        cin >> param;
        CMoney a3;
        a3 = a1 * param;
        cout << "result : " << a3.toString();
    }
    break;
    case '/':
    {
        float a3;
        a3 = a1 / a2;
        cout << "result : " << a3;
    }
    break;
    case '%':
    {
        CMoney a3;
        float param;;
        cout << "Write parametr of delenie: ";
        cin >> param;
        a3 = a1 / param;
        cout << "result : " << a3.toString();
    }
    break;
    case '>':
    {
        bool k = (a1 > a2);
        if (k) {
            cout << "True";
        }
        else {
            cout << "False";
        }
    }
    break;

    case '<':
    {
        bool k = (a1 > a2);
        if (k) {
            cout << "True";
        }
        else {
            cout << "False";
        }
    }
    break;

    case '!=':
    {
        bool k = (a1 > a2);
        if (k) {
            cout << "True";
        }
        else {
            cout << "False";
        }
    }
    break;

    case '==':
    {
        bool k = (a1 > a2);
        if (k) {
            cout << "True";
        }
        else {
            cout << "False";
        }
    }
    break;
    case '>=':
    {
        bool k = (a1 > a2);
        if (k) {
            cout << "True";
        }
        else {
            cout << "False";
        }
    }
    break;
    case '<=':
    {
        bool k = (a1 > a2);
        if (k) {
            cout << "True";
        }
        else {
            cout << "False";
        }
    }
    break;

    default:
        break;
    }
}