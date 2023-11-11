#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::string result;
    int dec = 0;
    if(macAddress == "FF:FF:FF:FF:FF:FF"){
        result = "Broadcast";
    }
    else{
        for(int i=0;i<2;i++){
            if(i==0){
                if(macAddress[0]>='0' && macAddress[0]<='9'){
                    dec = dec + (int(macAddress[0])-48)*16;
                }else if(macAddress[0]>='A' && macAddress[0]<='F'){
                    dec = dec + (int(macAddress[0])-55)*16;
                }
            }else{
                if(macAddress[1]>='0' && macAddress[1]<='9'){
                    dec = dec + (int(macAddress[1])-48);
                }
                else if(macAddress[1]>='A' && macAddress[1]<='F'){
                    dec = dec + int(macAddress[1])-55;
                }
            }
        }
    }
    if(dec%2==0){
        result = "Unicast";
    }else
        result = "Multicast";
    // make use of control flow statements
    // return result;
    return result;
}