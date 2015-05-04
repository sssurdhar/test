//
//  main.c
//  FuzzBizzTwo
//
//  Created by Sunny Surdhar on 2015-04-29.
//  Copyright (c) 2015 Sunny Surdhar. All rights reserved.
//

#include <stdio.h>

void createList(int fuzz, int bizz, int nezz){
    int i = 1;
    while(i <= nezz){
        if((i % fuzz == 0) && (i % bizz == 0)){
            printf("Both match \n");
        }
        else if (i % fuzz == 0){
            printf("Fuzz \n");
        }
        else if(i % bizz == 0){
            printf("Bizz \n");
        }
        else{
            printf("Number: %d \n", i);
        }
        i ++;
    }
}


























int main(int argc, const char * argv[]) {
    createList(2, 3, 10);
    return 0;
}
