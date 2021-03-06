/****************************************************************************************************
* Justin Pulido
* Unordered_map_test3.cpp
* March 14th, 2018
* checks the implementation of the unordered.h file and if anything is missing the program will not 
  run.
* the ones that it is checking for this is the print, the insert, rehash, and creating Another to 
  hold a second list within this file. The hash function will rearrange the elements within the 
  container according to their hash value into the new set of buckets. 
* O(n) size of the problem. 
* 100% complete 
****************************************************************************************************/
#include <iostream>

#include "Unordered.h"

using namespace std;

template <typename Key>
class Another
{
public:
    unsigned operator()(const Key & k) const {
        return k;
    }
};

int main()
{
    Unordered_map<string, string, Hasher> h(7);

    h.insert(make_pair("Red", "123 Main"));
    h.insert(make_pair("Brown", "45 First"));
    h.insert(make_pair("Blue", "20 2nd St"));
    h["Jack"] = "500 E St";
    h["Jill"] = "400 Lakewood";
    h["Jake"] = "2 Sierra Madre";
    h["Green"] = "Mile";
    h["One more"] = "Something";
    h.print();

    Unordered_map<string, string>::iterator i;
    for (i = h.begin(); i != h.end(); i++) {
        cout << "(" << i->first << ":" << i->second << ") ";
	}

    cout << endl;

    h.rehash(11);
    cout << "\nAfter rehash(11)\n\n";
    h.print();

    for (i = h.begin(); i != h.end(); i++) {
        cout << "(" << i->first << ":" << i->second << ") ";
	}
    cout << endl;


    Unordered_map<unsigned, string, Another> k(5);

    k.insert(make_pair(13, "cookie"));
    k.insert(make_pair(12, "monster"));
    k.insert(make_pair(17, "eat"));
    k.insert(make_pair(25, "something"));
    k.insert(make_pair(10, "else"));

    cout << endl;
    k.print();

    Unordered_map<unsigned, string, Another>::iterator j;
    for (j = k.begin(); j != k.end(); j++) {
        cout << "(" << j->first << ":" << j->second << ") ";
	}
    cout << endl;

    k.rehash(7);
    cout << "\nAfter rehash(7)\n\n";
    k.print();

    for (j = k.begin(); j != k.end(); j++) {
        cout << "(" << j->first << ":" << j->second << ") ";
	}
    cout << endl << endl;

	return 0;
}
