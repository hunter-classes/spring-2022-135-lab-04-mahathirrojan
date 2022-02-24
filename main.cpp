#include <iostream> 
#include "shapes.h"
#include <string> 


int main(){
    std::cout << "Task A: Box tests" << std::endl; 
    std::cout << "BOX(3,5):" << std::endl; 
    std::cout << box(3,5) << std::endl; 
    std::cout << "BOX(1,2)" << std::endl; 
    std::cout << box(1,2) << std::endl; 

    std::cout << "\n-------------------\n";

    std::cout << "Task B: Checkerboard tests" << std::endl;
    std::cout << "CHECKERBOARD(11,6)" << std::endl; 
    std::cout << checkerboard(11,6) << std::endl; 
    std::cout << "CHECKERBOARD(7,4)" << std::endl; 
    std::cout << checkerboard(7,4) << std::endl; 

    std::cout << "\n----------------------\n";

    std::cout << "Task C: Cross tests";
    std::cout << "CROSS(8)" << std::endl; 
    std::cout << cross(8) << std::endl; 
    std::cout << "CROSS(5)" << std::endl; 
    std::cout << cross(5) << std::endl; 


    std::cout << "\n---------------------\n"; 

    std::cout << "Task D: Lower Triangle tests" << std::endl; 

    std::cout<< "LOWER(6)" << std::endl; 
    std::cout << lower(6) << std::endl; 
    std::cout << "LOWER(3)" << std::endl; 
    std::cout << lower(3) << std::endl; 

    std::cout << "\n--------------------------\n";

    std::cout << "Task E: Upper Triangle tasks" << std::endl; 
    
    std::cout << "UPPER(5)" << std::endl;
    std::cout << upper(5) << std::endl;
    std::cout << "UPPER(8)" << std::endl; 
    std::cout << upper(8) << std::endl; 

    std::cout << "\n--------------------------\n";

    std::cout << "Task F: Upside-down trpezoid or triangle" << std::endl; 

    std::cout << "TRAPEZOID(12,5)" << std::endl; 
    std::cout << trapezoid(12,5) << std::endl; 
    std::cout << "Trapezoid(5,3)" << std::endl; 
    std::cout << trapezoid(5,3) << std::endl; 
    std::cout << "Trapezoid(12,7)" << std::endl; 
    std::cout << trapezoid(12,7) << std::endl; 

    std::cout << "\n--------------------\n";

    std::cout << "Task G: Checkerboard(3x3)" << std::endl; 

    std::cout << "CHECKERBOARD3x3(16,11)" << std::endl; 
    std::cout << checkerboard3x3(16,11) << std::endl; 
    std::cout << "CHECKERBOARD3x3(27,27)" << std::endl; 
    std::cout << checkerboard3x3(27,27) << std::endl; 



    return 0; 
}

