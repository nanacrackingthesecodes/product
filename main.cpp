#include <iostream>
#include "Product.h"
using namespace std;

int main() {
    Product a("laptop", "Electronics", 56000, 2.5);
    a.Print();
    a.Input();
    a.Print();
}
