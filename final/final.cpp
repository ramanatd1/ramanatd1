#include <iostream>
#include "tinyxml2.h"

using namespace std;
using namespace tinyxml2;

int main( int argc, const char ** argv)
{
 XMLDocument* doc = new XMLDocument();
doc->LoadFile( argv[1] );
XMLElement* root = doc->FirstChildElement();
cout << root->FirstChildElement()->Name() << "\n";
cout << root->FirstChildElement()->GetText() << "\n";

XMLElement*root_s=root->FirstChildElement()->NextSiblingElement();
 cout<<root_s->Name()<<"\n";

  return 0;
}
