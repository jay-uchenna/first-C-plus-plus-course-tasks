//
//  main.cpp
//  exceptions_learning
//
//  Created by Jedidiah Uchenna on 07.01.2022.
//

#include <iostream>



int main(int argc, const char * argv[]) {
    long long int a;
    std::cin >> a;
    int *p;
    try{
    p = new int[a];
    }
    catch(std::bad_alloc error){
        std::cout << error.what() << "\n";
    }
    std::cout << a << "\n";
    
    delete [] p;
    return 0;
}
