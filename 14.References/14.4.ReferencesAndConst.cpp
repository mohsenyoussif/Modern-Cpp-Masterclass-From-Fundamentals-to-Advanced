#include <iostream>

int main(){

    //Non const reference
    std::cout << "Non const reference : " << std::endl;
    int age {27};
    const int& ref_age{age};

    std::cout << "age : " << age << std::endl;
    std::cout << "ref_age : " << ref_age << std::endl;


    //Can modify original variable through reference

    std::cout << std::endl;
    std::cout << "Modify original variable through reference : " << std::endl;

    ref_age++; //Modify through reference, It gives a compiler error

    std::cout << "age : " << age << std::endl;     
    std::cout << "ref_age : " << ref_age << std::endl;



    return 0;
}
