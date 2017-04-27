#include <cstdio>
#include <fstream>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
  // ofstream of("out.txt");
  freopen("out.txt", "w", stdout);
  for (char a = 'a'; a < 'h'; a += 4) {
    printf(" Mux16(a=%cOr%c,b=%cOr%c,sel=sel[1],out=%c%c%c%c);\n", a, a + 1,
           a + 2, a + 3, a, a + 1, a + 2, a + 3);
  }
}