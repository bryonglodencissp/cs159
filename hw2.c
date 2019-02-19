#include <stdio.h>
#include <math.h>

int main(){
  int data_size, f;       // size of data & faster algorithm
  int complexity1, complexity2;     // algorithms 1 and 2
  double coeficient1, coeficient2;  // coefficients 1 and 2
  double run_time1, run_time2;  // times 1 and 2

  printf("-=- Algorithm Complexity Options -=-\n\n");
  printf("1. Linear time [n]\n");
  printf("2. Logarithmic time [nlog(n)]\n");
  printf("3. Exponential time [n^2)\n\n");
  printf("Enter the size of the data set to sort -> ");
  scanf("%d", &data_size);
  printf("Select complexity option #1 -> ");
  scanf("%d", &complexity1);
  printf("Enter the coefficient of algorithm #1 -> ");
  scanf("%lf", &coeficient1);
  printf("Select complexity option #2 -> ");
  scanf("%d", &complexity2);
  printf("Enter the coefficient of algorithm #2 -> ");
  scanf("%lf", &coeficient2);
  printf("\n");

  /* This technique is like The Lagrange method in polynomial curve fitting. */
  run_time1 = (complexity1-2)*(complexity1-3)/((1-2)*(1-3)) * coeficient1*data_size +
              (complexity1-1)*(complexity1-3)/((2-1)*(2-3)) * coeficient1*data_size*log(data_size)/log(2) +
              (complexity1-1)*(complexity1-2)/((3-1)*(3-2)) * coeficient1*(data_size*data_size);
  run_time2 = (complexity2-2)*(complexity2-3)/((1-2)*(1-3)) * coeficient2*data_size +
              (complexity2-1)*(complexity2-3)/((2-1)*(2-3)) * coeficient2*data_size*log(data_size)/log(2) +
              (complexity2-1)*(complexity2-2)/((3-1)*(3-2)) * coeficient2*(data_size*data_size);

  printf("Time for algorithm #1 in seconds: %0.3lf\n", run_time1);
  printf("Time for algorithm #1 in seconds: %0.3lf\n", run_time2);
  printf("Faster algorithm #: %0.0lf\n", ( 1.5-(run_time2-run_time1) / ( 2*fabs(run_time1-run_time2+0.00001))));
  printf("Time difference (seconds): %0.3lf\n", fabs(run_time1-run_time2));

  return 1;
}
