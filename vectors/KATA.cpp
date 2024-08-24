#pragma once

#include "Katas.h"



void KataTest() 
{
	std::cout << "hello test!";
}

int KATA_get_sum(int a, int b)
{
    int result = 0;
    bool AmoreThenB = true;
    if (a == b)
        return a;

    else if(a < b)
    {
        for (int i = a; i <= b; i++) 
        {
            result += i;
        }

    }
    else
    {
        for (int i = b; i <= a; i++)
        {
            result += i;
        }


    }
    return result;
    //Good luck!
}