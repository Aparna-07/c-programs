#include<stdio.h>
 int main()
 {
 int dist;
 printf("Enter the distance between two cities in kms");
 scanf("%d",&dist);
 int meters=dist*1000;
 float feets=dist*3280.84;
 float inches=dist*39370.1;

 printf("Distance %d Kilometers in meters is %d\n",dist,meters);
  printf("Distance %d Kilometers in feets is %f\n",dist,feets);
   printf("Distance %d Kilometers in inches is %f\n",dist,inches);
    printf("Distance %d Kilometers in centimeters is %d\n",dist,meters*100);

    return 0;
    }
