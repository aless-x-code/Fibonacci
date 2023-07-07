
#include <iostream>
using namespace std;

int main(int argc, char *const argv[])
{
  int nth, loc1 = 0, loc2 = 1, fibo = 0, position = 0;

  cout << "Enter a position ";
  cin >> nth;

  // fail safe
  if (nth == 1)
    fibo = 1;

  // position adjustment : program can't calculate 1st position (since previous positions of 1 are 0 and 0), so we start sequence at 2nd position, so we have to adjust actual position by deducting -1
  nth = nth - 1;

  // while the position is lower than position given..
  while (position < nth)
  {
    // fibonacci logic
    fibo = loc1 + loc2; // fibonacci = location1 (intialy 0) + location2 (intialy 1)
    loc1 = loc2;        // then, location1 shifts to location2 (location1 = 1)
    loc2 = fibo;        // and, location2 becomes the fibonacci number (location2 = 1)

    // each iteration, position is increased by 1
    position++;
  }
  cout << fibo << " <<-- FIBONACCI" << endl;
}
