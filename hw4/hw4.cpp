#include <iostream>

#include <fstream>

#include <vector>

#include <algorithm>



int binarySearch (std::vector <int> V, int & value, int & left, int & right);

int main ()

{

  using namespace std;

  vector <int> inputV;



  ifstream x;

  int a;

  int b;

  int c;

  int d;



  x.open ("hw4.txt");


  while (x>>a)

  {

    inputV.push_back(a);



  }



  x.close();





  sort (inputV.begin(), inputV.end());


  for (int i=0 ; i< inputV.size(); i++)

  {

  cout<< inputV[i] <<"\n";


  }



  cin>> b;\

  c = 0;

  d = inputV.size() - 1;



  int n = binarySearch(inputV, b, c, d);




  if  (n < 0)

  cout << "NOT FOUND" <<"\n";



  if (n > 0)

  cout << n <<"\n";



  return 0;

}



int binarySearch (std::vector <int> V, int & value, int & left, int & right){

using namespace std;

  while (left<= right){

    int middle = (left+right)/2;

    if (V[middle] == value)

    return middle;

    else if (V[middle] > value)

    right = middle - 1;

      else left = middle + 1;



cout << "Left =" << left <<"\n";

cout << "Right =" << right <<"\n";

cout << "Middle = " << middle <<"\n";





  }

  return -1;

}
