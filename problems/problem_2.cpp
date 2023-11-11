
float problemSolution2(float i, float j, float k) {
    float result;
    result = (i > j) ? i : j;
    result = (result > k) ? result : k;

    return result;
}