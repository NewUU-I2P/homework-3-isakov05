#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::string result, temp;
    int dec = 0;
    if(macAddress == "FF:FF:FF:FF:FF:FF"){
        result = "Broadcast";
    }else{
        temp = macAddress[0] + &macAddress[1];
        for(int i=0;i<2;i++){
            if(temp[i]>='0' && temp[i]<='9'){
                dec = dec + int(temp[i])*16;
                dec = dec*10;
            }else if(temp[i]>='A' && temp[i<='F']){
                dec = dec + int(temp[i]-55);
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
