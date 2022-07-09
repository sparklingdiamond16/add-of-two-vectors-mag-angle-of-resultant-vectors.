
// To Get vector1&vector2 from user in 2dimensions and perform sum of two vector as resultant vector,
//Compute magnitude and angle of resultant vector


/*we can change the size of the vector during the execution of a program as per our requirements.
 To use vectors, we need to include the vector header file in our program.

#include <vector>
C++ Vector Declaration
Once we include the header file, here's how we can declare a vector in C++:

Notice that we have not specified the size of the vector during the declaration. 
This is because the size of a vector can grow dynamically so it is not necessary to define it.*/



#include<stdio.h>//header file
#include<math.h>//header file for math function
int main(void)
{
 int a[2];//vector 1
 int b[2]; //vector 2
 double c[2]; //result vector
 int n, i;
 
 /* read vectors a and b */
 printf("Enter vector size: ");
 scanf("%d", &n);
 printf("Enter elements of vector a:\n");
 for (i = 0; i < n; i++)
   scanf("%d", &a[i]);
   printf("Enter elements of vector b:\n");
   for (i = 0; i < n; i++)
    scanf("%d", &b[i]);
    /* perform vector addition */
    for (i = 0; i < n; i++)
      c[i] = a[i] + b[i];
    /* print addition vector C */
    printf("Addition vector:\n");
    for (i = 0; i < n; i++)
      printf("%.0f ", c[i]);
      int dot_product=(a[0]*b[0])+(a[1]*b[1]);
      printf("\ndot product of the vectors:%d",dot_product);
      double mag1=sqrt(pow(c[0],2));
      double mag2=sqrt(pow(c[1],2));
      double res=mag1+mag2;
      double prod=mag1*mag2;
      double d=(dot_product)/(prod);
      double result=cos(d);
      printf("\nMagnitude of the vector1:%.1f",round(mag1));
      printf("\nMagnitude of the vector2:%.1f",round(mag2));
      printf("\nMagnitude of the  product vector:%.1f",round(prod));
      printf("\n%.1f",round(d));
      printf("\nMagnitude of the  resultant vector:%.1f",round(res));
      printf("\nAngle of the resultant vector:%.2f",round(result));
      return 0;
     
}
/* Working of c Programme

Method 1:

FOR EXAMPLE:

// Initializer list
vector<int> vector1 = {1, 2, 3, 4, 5};
// Uniform initialization
vector<int> vector2 {1, 2, 3, 4, 5};
Here, we are initializing the vector by providing values directly to the vector. Now, both vector1 and vector2 are initialized with values 1, 2, 3, 4, 5.

Method 2:

Here, 5 is the size of the vector.

This code creates an int vector with size . So, the vector is equivalent .


Program to find the Magnitude of a Vector
Given Two integers representing the X, Y,  coordinates of a 2-D vector, the task is to find the magnitude of that vector.


Stores the sum of the squares of the X, Y  variable, say sum.
Initialize a variable, say magnitude, to store the square root of sum.
Print the value of magnitude as the required result.
Above given programee is the implementation of the above approach.


  Thus the  vector1&vector2 from user in 2 dimensions and perform sum of two vector as resultant vector,
Compute magnitude and angle of resultant vector  programme is done and it has been executed.*/








