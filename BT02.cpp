#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

//BaiA1
/*int main() {
    int i = 0;
    do {
        i += 2;
        cout << i << endl;
    } while (i < 100);
    while (i < 100) {
        i += 2;
        cout << i << endl;
    }
    for (; i <= 100;) {
        cout << i << endl;
        i += 2;
    }
}*/

//BaiA2
/*int main() {
    int n;
    cin >> n;
    while (n > 3) {
        n /= 3;
    }
    cout << n;
}*/

//BaiA3
//all

//BaiA4
/*int dayNumOfMonth(int m, int y) {
    switch (m) {
    case 4: case 6: case 9: case 11: {
        return 30;
        break;
    }
    case 2: {
        if (y % 4 == 0) {
            if (y % 400 != 0) {
                return 28;
                break;
            }
            else {
                return 29;
            }
        }
        else {
            return 28;
            break;
        }
    }
    default:
        return 31;
    }
}

class Date {
    int d;
    int m;
    int y;
public:
    Date(int _d, int _m, int _y) {
        d = _d;
        m = _m;
        y = _y;
    }
    Date DateModify() {
        Date a(d, m, y);
        if (a.m > 12) {
            while (a.m > 12) {
                a.m -= 12;
                a.y++;
            }
        } 
        else {
            while (a.m < 1) {
                a.m += 12;
                a.y--;
            }
        }
        if (a.d > 0) {
            while (a.d > dayNumOfMonth(a.m, a.y)) {
                a.d -= dayNumOfMonth(a.m, a.y);
                a.m++;
                if (a.m > 12) {
                    a.m -= 12;
                    a.y++;
                }
            }
        }
        else {
            while (a.d < 1) {
                a.m--;
                a.d += dayNumOfMonth(a.m, a.y);
                if (a.m == 0) {
                    a.m = 12;
                    a.y--;
                }
            }
        }
        return a;
    }
    Date operator+ (int b) {
        Date a(d, m, y);
        a.d = d + b;
        a = a.DateModify();
        return a;
    }
    Date operator- (int b) {
        Date a(d, m, y);
        a.d = d - b;
        a = a.DateModify();
        return a;
    }
    string getDate() {
        string date = ((d < 10) ? ('0' + to_string(d)) : to_string(d)) + '/' + ((m < 10) ? ('0' +  to_string(m)) : to_string(m)) + '/' + to_string(y);
        return date;
    }
};

ostream& operator<< (ostream &out, Date a) {
    out << a.getDate();
    return out;
}

int main() {
    int d, m, y;
    char ch;
    cin >> d >> ch >> m >> ch >> y;
    Date a(d, m, y);
    a.DateModify();
    int n;
    cin >> n;
    while (n != 0) {
        Date b = a + n;
        cout << b << endl;
        cin >> n;
    }
} */

//BaiC1
/*bool primeCheck(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    if (primeCheck(n)) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
}*/

//BaiC2
/*int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < n - 1 - i) {
                cout << ' ';
            }
            else {
                cout << '*';
            }
        }
        cout << endl;
    }
}*/

//BaiC3
/*int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = -(n - 1); j < n; j++) {
            if (j >= -i && j <= i) {
                cout << '*';
            }
            else {
                cout << ' ';
            }
        }
        cout << endl;
    }
}*/

//BaiC4
/*int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = -(n - 1); j < n; j++) {
            if (j > -(n - i) && j < (n - i)) {
                cout << '*';
            }
            else {
                cout << ' ';
            }
        }
        cout << endl;
    }
}*/

//BaiC5
/*string turnToNum1(char c) {
    string a;
    switch (c) {
    case '1': {
        a = "one";
        break;
    }
    case '2': {
        a = "two";
        break;
    }
    case '3': {
        a = "three";
        break;
    }
    case '4': {
        a = "four"; 
        return a;
        break;
    }
    case '5': {
        a = "five"; 
        break;
    }
    case '6': { 
        a = "six"; 
        break;
    }
    case '7': {
        a = "seven"; 
        break;
    }
    case '8': {
        a = "eight"; 
        break;
    }
    case '9': {
        a = "nine"; 
        break;
    }
    }
    return a;
}

string turnToNum2(char c) {
    string a;
    switch (c) {
    case '0': {
        a = "ten";
        break;
    }
    case '1': {
        a = "eleven";
        break;
    }
    case '2': {
        a = "twelwe";
        break;
    }
    case '3': {
        a = "thirdteen";
        break;
    }
    case '4': {
        a = "fourteen";
        return a;
        break;
    }
    case '5': {
        a = "fifteen";
        break;
    }
    case '6': {
        a = "sixteen";
        break;
    }
    case '7': {
        a = "seventeen";
        break;
    }
    case '8': {
        a = "eighteen";
        break;
    }
    case '9': {
        a = "nineteen";
        break;
    }
    }
    return a;
}

string turnToNum3(char c) {
    string a;
    switch (c) {
    case '2': {
        a = "twenty";
        break;
    }
    case '3': {
        a = "thirdty";
        break;
    }
    case '4': {
        a = "fourty";
        return a;
        break;
    }
    case '5': {
        a = "fifty";
        break;
    }
    case '6': {
        a = "sixty";
        break;
    }
    case '7': {
        a = "seventy";
        break;
    }
    case '8': {
        a = "eighty";
        break;
    }
    case '9': {
        a = "ninety";
        break;
    }
    }
    return a;
}

string read(long long n) {
    string a = to_string(n);
    string read;
    switch (a.length()) {
    case 1: {
        read = turnToNum1(a[0]);
        break;
    }
    case 2: {
        if (a[0] == '1') {
            read = turnToNum2(a[1]);
            break;
        }
        else {
            read = (a[1] == '1') ? turnToNum2(a[2]) : (turnToNum3(a[1]) + ' ' + turnToNum1(a[2]));
            break;
        }
    }
    case 3: {
        read = turnToNum1(a[0]) + " hundred " + ((a[1] == '1') ? (turnToNum2(a[2])) : (turnToNum3(a[1]) + ' ' + turnToNum1(a[2])));
        break;
    }
    }
    return read;
}

int main() {
    long long n;
    cin >> n;
    string readNum;
    if (n == 0) {
        cout << "zero";
    }
    else {
        while (n) {
            if (n > 999999) {
                readNum += read(n / 1000000) + " million ";
                n = n % 1000000;
            }
            else {
                if (n > 999) {
                    readNum += read(n / 1000) + " thousand ";
                    n = n % 1000;
                }
                else {
                    readNum += read(n);
                    n = 0;
                }
            }
        }
    }
    cout << readNum;
}*/

//BaiC6
/*int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    vector <vector<int>> arr(n, vector <int>(n));
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
        for (int j = 0; j < n; j++) {
            int m = (i - j < 0) ? (i - j + n) : (i - j);
            arr[j][m] = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}*/

//BaiC7
/*int main() {
    int x, y;
    cin >> x;
    cout << "Out: " << x << endl;
    y = x;
    while (x >= 0) {
        cin >> x;
        if (x != y) {
            cout << "Out: " << x << endl;
        }
        y = x;
    }
}*/

//BaiC9
/*long long solve(vector<vector<int>> steps) {
    long min_a = steps[0][0], min_b = steps[0][1];
    for (int i = 0; i < steps.size(); i++) {
        if (steps[i][0] < min_a) {
            min_a = steps[i][0];
        }
        if (steps[i][1] < min_b) {
            min_b = steps[i][1];
        }
    }
    long long maxCount = min_a * min_b;
    return maxCount;
}*/
