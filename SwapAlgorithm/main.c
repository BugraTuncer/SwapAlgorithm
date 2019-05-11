//
//  main.c
//  SwapAlgorithm
//
//  Created by Buğra Tunçer on 8.05.2019.
//  Copyright © 2019 Buğra Tunçer. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=1;
    int b=2;
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("A: %d \nB : %d \n",a,b);
    
}
