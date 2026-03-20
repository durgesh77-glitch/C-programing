#include <stdio.h>

int main(void) { 
   const int Max1=100,Max2=100,Max3=100,Max4=50,Max5=50;
   int m1, m2, m3,m4,m5;
    float percentage;
   float sum;
   m1=0.0;m2=0.0;m3=0.0;m4=0.0;m5=0.0;
   printf ("Enter marks for subject m1[max=100]:");
scanf ("%d",&m1);
printf ("Enter marks for subject m2[max=100]:");
scanf ("%d",&m2);
printf ("Enter marks for subject m3[max=100]:");
scanf ("%d",&m3);
printf ("Enter marks for subject m4[max=50]:");
scanf ("%d",&m4);
printf ("Enter marks for subject m5[max=50]:");
scanf ("%d",&m5);
printf (" Entered marks are:%d\t %d \t%d \t%d \t%d\n",m1,m2,m3,m4,m5);
sum=m1+m2+m3+m4+m5;
printf("Total marks = %.2f\n",sum);
percentage=(sum/(Max1+Max2+Max3+Max4+Max5))*100;
printf("Percentage = %.2f%%\n",percentage);
// Grading of percentage obtained
if (percentage>=90.0){
    printf ("Grade = A\n");
}
else if (percentage>=80.0  && percentage<90.0){
    printf ("Grade = B\n");
}
else if (percentage>=60.0  && percentage<80.0){
    printf ("Grade = C\n");
}
else {
    printf ("Grade = D\n");
}
return 0;
} 