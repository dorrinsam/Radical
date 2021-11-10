#include <stdio.h>

int main(){

  double num;
  scanf("%lf", &num);

  double x = 0, y = num + 1 , z;
  double a1 = x * x - num;
  double b1 = y * y - num;

  while(y - x >= 0.00000001){
  z = (x + y) / 2;

  double c = z * z - num;
    if(a1 * c > 0){
    x = z;
    a1 = x * x - num;
                           }
    else if(b1 * c > 0){
    y = z;
    b1 = y * y - num;
                                }
    else{
      break;
                                      }
                                             }

printf("%.2lf", z);

return 0;
                                                    }
