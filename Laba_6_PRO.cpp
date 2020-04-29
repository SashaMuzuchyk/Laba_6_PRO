#include <stdio.h>
#include <omp.h>
int main(int argc, char *argv[])
{
int n;
#pragma omp parallel
 {
#pragma omp critical
 {
 n = omp_get_thread_num();
 printf("Potik %d\n", n);
 }
 } 
4
}