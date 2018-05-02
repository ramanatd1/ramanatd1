//return is in a function it can return a value to the calling function

//need int/double/string because you assume type of x add (a,b) so return is int/double/string

 

// int main ()

// {

// int x

// x = add(a,b) //is this (calling function (temporary data))

// //assuming x is an int

// return (0)

// }

//

//

// int add(a,b) //this

// //int add (a,b)

// int c;

// c = a + b;

// //int a , int b, int c  add and return c

// return(c);

// }

// //x would = c

// //how could you pass value by function (call by reference/pointer)

//--------------------

// int x;

// x=*a; x get the address of a

// *a = *b; assign the address of b to *a

// *b=x; *b's address = a

 

//know how to design swap function

#include <iostream>

// #include <utility>

 

int main()

{

  using namespace std;

int a[] = {4,9,2,1,3,4,7,8,5,0,6}; //array

 

for (int j = 0; j < 11; j++) {

 

    for (int i = 0; i < 10; i++)

{

  // cout <<"i: " << i<<endl;

//   cout<< a[i] << endl;

 

  if (a[i+1] <  a[i])

  //index inside of a

   {

int x= a[i];

a[i] = a[i+1];

a[i+1] = x;

//passing variable not value

  // cout <<"i: " << i<<endl;

  // cout <<"i+1: " << i+1 <<endl;

  }

}

}

for (int k = 0; k < 11; k++)

{

cout<< a[k] << endl;

}

 

return 0;

 

}