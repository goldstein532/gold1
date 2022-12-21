#pragma once

#include <iostream>
#include <string>
using namespace std;


class Date {
private:
    int year, month, day;

public:
    Date(int year, int month, int day) {
        this->year = year;
        this->month = month;
        this->day = day;
    }

    void read() {
        unsigned int a, b, c;
        cin >> a >> b >> c;
        year = a;
        month = b;
        day = c;
    }
    Date() {}
    bool IsLeap() const {
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    return true;
                }
                else {
                    return false;
                }

            }
            else {
                return true;
            }

        }
        else {
            return false;
        }
    }
    std::string ToString() const {
        std::string result = "";
        if (day < 10) {
            result += "0";
        }
        result += std::to_string(day);
        result += ".";

        if (month < 10) {
            result += "0";
        }
        result += std::to_string(month);
        result += ".";

        if (year < 10) {
            result += "000";
        }
        else if (year < 100) {
            result += "00";
        }
        else if (year < 1000) {
            result += "0";
        }
        result += std::to_string(year);

        return result;
    }

    Date DaysLater(int days) const {
        int* cur_month =
            new int[12] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        Date d(this->year, this->month, this->day);

        if (d.month <= 2 && d.IsLeap()) {
            cur_month[1] = 29;
        }

        for (int i = 0; i < days; i++) {
            d.day++;
            if (d.day > cur_month[d.month - 1]) {
                d.day = 1;
                d.month++;
                if (d.month > 12) {
                    d.month = 1;
                    d.year++;
                    if (d.IsLeap()) {
                        cur_month[1] = 29;
                    }
                    else {
                        cur_month[1] = 28;
                    }
                }
            }
        }
        delete[] cur_month;
        return d;
    }

    int DaysLeft(const Date& date) const {
        int* cur_month =
            new int[12] {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        Date d(date.year, date.month, date.day);

        if (d.month > 2 && d.IsLeap()) {
            cur_month[1] = 29;
        }

        int res = 0;

        while (d.day != day || d.month != month || d.year != year) {
            d.day--;
            res++;
            if (d.day == 0) {
                d.month--;
                if (d.month == 0) {
                    d.month = 12;
                }
                d.day = cur_month[d.month - 1];
                if (d.month == 12) {
                    d.year--;
                    if (d.IsLeap()) {
                        cur_month[1] = 29;
                    }
                    else {
                        cur_month[1] = 28;
                    }
                }
            }
        }
        delete[] cur_month;
        return res;
    }
    void display() {
        cout << this->ToString() << endl;
    }
};

int main() {
    Date d1, d2;
    d1.read();
    //d2.read();
    if (d1.IsLeap())
    {
        cout << "leap\n";
    }
    else
    {
        cout << "not leap\n";
    }
    int k;
    cin >> k;
    d2 = d1.DaysLater(k);

    d2.display();
    d2.read();
    int a = d1.DaysLeft(d2);
    cout << a;
}