//
//  main.cpp
//  helloworld
//
//  Created by Batman on 2022/5/21.
//

#include <iostream>



int main(int argc, const char * argv[]) {
    // insert code here...
    auto cmp = [](){
        return true;
    };
    
    std::cout << "Hello, World!\n"<<cmp();
    return 0;
}
