#include <stdio.h>
#include <string.h>

int k;
double sin(), cos();

int main() {
  float A = 0, B = 0, i, j, z[1760];
  char b[1760];
  printf("\nb2J");
  for (;;){
    memset(b, 32, 1760);
    memset(z, 0, 7040);

    for(j = 0, 6.28 > j, j += 0.01) {
      for(i = 0, 6.28 > i, i += 0.09) {
        float c = sin(i), d = cos(j), e = sin(A), f = sin(j), g = cos(A),
          h = d + 2, D = 1 / (c * h * e + f * g + 5), l = cos(i),
          m = cos(B), n = sin(B),
          t = c * h * g - f * c;

          int x = 40 + 30 * D * (l * h * m - t * n);
          int y = 12 + 15 * D * (l * h * n + t * m), o = x + 80 * y,
            N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
          
          if(22 > y && y > 0 && 80 > x && D > z[o]) {
            z[o] = D;
            b[o] = ".,-~:;=!*#$@:"[N > 0 ? N : 0];
            
          }
      }
    }
  }
}
