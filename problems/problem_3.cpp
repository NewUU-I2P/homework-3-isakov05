#include <string>

std:: string problemSolution3(float height, char S) {
    // write your code here
    std:: string text;
    switch(S == 'm'){
        case 1:
            if(height<1.70){
                text = "Short";
            }else if(height>=1.85){
                text = "Tall";
            }else
                text = "Normal";
            break;
        case 0:
            if(height<1.60){
                text = "Short";
            }else if(height>=1.75){
                text = "Tall";
            }else
                text = "Normal";
            break;
    }
    // use return to return your result
    // make use of control flow statements
    return text;
}