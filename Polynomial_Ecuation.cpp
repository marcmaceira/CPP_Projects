#include <iostream>
#include <cmath>
using namespace std;
int main() {
float a = 0, b = 0, c = 0, x1 = 0, x2 = 0, real = 0, imag = 0;
int ex = 0;
  do {
    cout << "\nEnter a value for a: ";
    cin >> a;
    cout << "\nEnter a value for b: ";
    cin >> b;
    cout << "\nEnter a value for c: ";
    cin >> c;
    if (pow(b, 2) > 4 * a*c) {
        x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
        cout << "\nthe result of x1 is: " << x1 << endl;
        x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
        cout << "the result of x2 is: " << x2 << endl;
        cout << "\nIf you want to exit the program press 0 if not press any number: ";
        cin >> ex;
      }
      else if (b * 2 == 4 * a * c) {
          x1 = (-b) / 2 * a;
          cout << "\nThe result of x1 and x2 is: " << x1 << endl;
          cout << "\nIf you want to exit the program press 0 if not press any number: ";
          cin >> ex;
        }
        else {
          real = b / 2 * a;
          imag = sqrt(4 * a * c - pow(b,2)) / 2 * a;
          cout << "\nx1, " << real << "+" << imag << "j" << endl;
          cout << "x2, " << real << "-" << imag << "j" << endl;
          cout << "\nIf you want to exit the program press 0 if not press any number: ";
          cin >> ex;
          }
      } while (!(ex == 0));
        cout << "You reached the end thank you for using the program!!!" << endl;

        return 0;
}
