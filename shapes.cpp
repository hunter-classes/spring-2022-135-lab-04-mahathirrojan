#include "shapes.h"
#include <string> 
#include <iostream> 

// Task A : Box 

std::string box(int width, int height){
    std::string result = "";

    for(int i = 0; height > i; i++){
        for (int z = 0; width > z; z++){
            result += "*";
        }
        result += "\n";
    }
    return result; 
}

// Task B : Checkerboard 

std::string checkerboard(int width, int height){
    std::string result = "";

    for(int i = 0; height > i; i++){
        for(int z = 0; width > z; z++){
            if(i % 2 == 0 && z % 2 != 0 || i % 2 != 0 && z % 2 == 0){
                result += " ";
            }else{
                result += "*";
            }
        }
        result += "\n";
    }
    return result; 
}

std::string cross(int length){
    std::string result = ""; 

    for(int i = 0; length > i; i++){
        for(int z = 0; length > z; z++){
            if(i == z || z == length - 1 - i){
                result += "*";
            }else{
                result += " ";
            }
        }
        result += "\n"; 
    }
    return result; 
}

std::string lower(int side_length){
    std::string result = "";

    for(int i = side_length; 0 < i; i--){
        for(int z = side_length; 0 < z; z--){
            if(i<= z){
                result += "*"; 
            }else{
                result += " "; 
            }
        }
        result += "\n";
    }
    return result; 

}


std::string upper(int side_length){
    std::string result = ""; 

    for(int i = 1; side_length >= i; i++){
        for(int z = 1; z <= side_length; z++){
            if(i <= z){
                result += "*"; 
            }else{
                result += " "; 
            }
        }
        result += "\n";
    }
    return result; 
}

std::string trapezoid(int width, int height){
    std::string result = ""; 

    int asteriks = width; 
    int blank = 0; 

    if(width / 2 >= height || (width + 1) / 2 >= height){
        for(int i = 0; height > i; i++){
            for(int z = blank; z > 0; z--){
                result += " "; 
            }
            for(int j = asteriks; j > 0; j--){
                result += "*";
            }
        
        result += "\n";
        asteriks -= 2; 
        blank += 1; 
        }
    }else{
        return "Impossible shape!"; 
    }
    return result;

}


std::string checkerboard3x3(int width, int height){
    std::string result = ""; 

    int countofstars = 0;
    int countofblanks = 0; 
    bool stars = true, blanks = false;

    bool line = true; 
    int countoflines = 0; 

    for(int i = 0; height > i; i++){
        countoflines++;

        for(int z = 0; width > z; z++){
            if(countofstars == 3){
                stars = !stars; 
                blanks = !blanks; 
                countofstars = 0; 
            }
            if(countofblanks == 3){
                stars = !stars; 
                blanks = !blanks; 
                countofblanks = 0; 
            }

            if(stars){
                result += "*";
                countofstars++; 
            }
            if(blanks){
                result += " ";
                countofblanks++; 
            }
        } 
        if(countoflines > 5){
            line = true; 
            countoflines = 0; 

        }
        if(countoflines < 3 && line){
            stars = true; 
            blanks = false; 
            if(countoflines == 3){
                line = !line; 
            }
        }else{
            stars = false; 
            blanks = true; 
        }
        result += "\n";
        countofstars = 0; 
        countofblanks = 0; 
    } 
    return result; 
}
