/*
 * decode.cc
 *
 *  Created on: 2017Äê5ÔÂ26ÈÕ
 *      Author: hello_chenchen
 */

#include <iostream>
#include <string.h>

#include "../inc/common.h"

using namespace std;

void GetCipherMaxLen(char acCipherContent[], int *piCipherLen)
{
    int cipherContentLen = strlen(acCipherContent);

    *piCipherLen = cipherContentLen;

    for(int i = 1; i < cipherContentLen; i++)
    {
        if(acCipherContent[i-1] == acCipherContent[i+1])
            *piCipherLen = i+2;
    }
}

int main(int argc, char **argv) {

    char* arr = new char;
    cin >> arr;
//    cin.get(arr);
    int val = 0;
    GetCipherMaxLen(arr, &val);
    cout << val << endl;
    return 0;
}


