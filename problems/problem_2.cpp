
float problemSolution2(float i, float j, float k) {
    float result;
    switch(i >= j){
        case 1:
            if(i >= k){
                result = i;
            }else{
                result = k;
            }
            break;
        case 0:
            if(j>=k){
                if(j >= k){
                    result = j;
                }else{
                    result = k;
                }
                break;
            }
    }

    return result;
}