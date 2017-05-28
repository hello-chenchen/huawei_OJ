/*
 * decode.cc
 *
 *  Created on: 2017年5月26日
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

    //TODO 从大到小降序比较
    for(int i = cipherContentLen; i > 1; i--)
    {
        for(int j = 0; j < cipherContentLen - i; j++)
        {
            char* chTemp;
            memcpy(chTemp, &acCipherContent[j], i);
            if(IsCipher(chTemp))
            {

            }
        }
    }
}

//TODO 判断传进来的是否是有效密码
int IsCipher(char characCipherContent[])
{

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
