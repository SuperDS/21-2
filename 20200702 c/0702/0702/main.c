//
//  main.c
//  0702
//
//  Created by 이동섭 on 2020/07/02.
//  Copyright © 2020 이동섭. All rights reserved.
//

#include <stdio.h>

 int main()
{
    int *numPtr;
    int num1 = 10;
    
    numPtr = &num1;
    
    printf("%p\n", numPtr);
    printf("%p\n", &num1);
    
    return 0;
}
