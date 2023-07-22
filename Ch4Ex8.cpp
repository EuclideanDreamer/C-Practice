#define NDEBUG
#include <iostream>
#include <cassert>

int main(){

    int a, b, r;
    char c;

    std::cout << "Please enter two integers separated by a math operator (+ - * /) " <<std::endl;
    std::cout << "///>>: ";

    std::cin>> a >> c >> b;
    //         +         *        -        /
    assert((c==43)||(c==42)||(c==45)||(c==47)); //disabled by #define NDEBUG above

    if (c == 43){
        r = a + b;
    }
    if (c == 42){
        r = a * b;
    }
    if (c == 45){
        r = a - b;
    }
    if (c == 47){
        r = a + b;
    }
    
    std::cout << "Your results are: " << a << " " << c << " " << b << " = " << r << std::endl;
    
    return 0;
}

