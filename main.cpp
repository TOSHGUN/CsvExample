#include <iostream>
#include "csvdocument.h"

int main(int /*argc*/, char* /*argv*/[]) {
    CsvDocument test(';');
    test[2][2] = 42;
    test[0][3] = "Hello, world!";
    test.print();
    test.save("test1.csv");
    CsvDocument test2;
    test2.setSeparator(';');
    test2.load("test1.csv");
    test2.print();
    std::cout << test2[2][2].toDouble() << std::endl;
    std::cout << test2[0][3].toString() << std::endl;
    return 0;
}
