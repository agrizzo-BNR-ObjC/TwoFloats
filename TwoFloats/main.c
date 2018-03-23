//
//  main.c
//  TwoFloats
//
//  Created by Tony Rizzo on 11/7/17.
//  Copyright © 2017 Koteray. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float x;
    float y;
    
    x = 3.14;
    y = 77.06;
    
    double summation;
    
    summation = x + y;
    
    printf("First value: %f\n", x);
    printf("Second value: %f\n", y);
    printf("The sum is %f\n", summation);
    
    return 0;
}
