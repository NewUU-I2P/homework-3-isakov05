float problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    if(consumed_water>0){
        cost = 13;
    }else{
        cost= 0;
    }
    bool flagA= true;
    bool flagB= true;
    bool flagC= true;

    while(consumed_water != 0){
        if(flagA == true){
            if(consumed_water>30){
                cost = cost + 30*0.4;
                consumed_water = consumed_water - 30;
            }else{
                cost = cost + (consumed_water*0.4);
                consumed_water = 0;
            }
            flagA = false;
        }else if(flagB == true){
            if(consumed_water>20){
                cost = cost + 20*0.12;
                consumed_water = consumed_water - 20;
            }else{
                cost = cost + (consumed_water*0.12);
                consumed_water = 0;
            }
            flagB = false;
        }else if(flagC == true){
            if(consumed_water>10){
                cost = cost + 10*1.4;
                consumed_water = consumed_water - 10;
            }else{
                cost = cost + (consumed_water*1.4);
                consumed_water = 0;
            }
            flagC = false;
        }else{
            cost = cost + consumed_water*1.5;
            consumed_water = 0;
        }
    }

    return cost;
}
