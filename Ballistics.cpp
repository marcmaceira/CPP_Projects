#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int lines, i, loop;
  float v0;       // Initial velocity
  float angle;    // Angle
  float v0x = 0;      // Initial velocity on x
  float v0y = 0;      // Initial velocity on y
  float vyt;      // Velocity on y
  float g = 9.81; // Gravity
  float t;        // Time
  float vxt;      // Velocity on x
  float xt;       // Position on x
  float yt;       // Position on y
  float hmax;     // Maximum altitude
  float tmax;     // Maximum time in air

  do{
    cout << "Enter the initial velocity: ";
    cin >> v0;
    cout << "Enter the angle: ";
    cin >> angle;

    v0x = v0 * cos( M_PI * angle / 180);
    v0y = v0 * sin( M_PI * angle / 180);
    vyt = v0y-(g*t);
    vxt = v0x;
    xt = vxt*t;
    yt = v0y*t-0.5*g*pow(t, 2);
    hmax = v0y/8/g;
    vyt = v0y-g*t;
    tmax = (v0y/g)*2;
    lines = (tmax / 0.1) + 1;
    hmax = v0y/8/g;

    cout << setprecision(2) << fixed;

    cout << "Initial velocity: " << v0 << " Angle: " << angle << endl;
    cout << "v0x: " << v0x << endl;
    cout << "v0y: " << v0y << endl;
    cout << "tFinal: " << tmax << endl;
    cout << "Number of measures: " << lines << endl;
    cout << "t: \tsecs.\t xpos.\t ypos.\t vx.\t vy." << endl;

    for (i = 0; i <= lines; i++)
      {

        if (t > tmax)
        {
          t = tmax;
        }

        vyt = v0y - (g * t);
        vxt = v0x;
        xt = vxt * t;
        yt = (v0y * t) - (0.5 * g * pow(t, 2));
        hmax = v0y / (8.0 / g);
        tmax = (v0y / g) * 2.0;
        lines = (tmax / 0.1) + 1;

        cout << "t" << i << "\t" << t << "\t " << xt << "\t " << yt << "\t " << vxt << "\t " << vyt << endl;
        t += 0.1;
      }
      cout << "Press 1 to repeat the program." << endl;
      cout << "Press any other number to finish." << endl;
      cin >> loop;
    }while(loop == true);

  return 0;

}
