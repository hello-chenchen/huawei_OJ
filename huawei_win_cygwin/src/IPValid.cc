/*
 * IPValid.cc
 *
 *  Created on: May 30, 2017
 *      Author: root
 */

#include <iostream>
#include <iterator>
#include <string>
#include <vector>

#include "../inc/common.h"
#include "../lib/stringlib.h"

using namespace std;
using namespace CC_lib;

bool IsIPValid(char* usIP)
{
    string strIP(usIP);

    stringlib strLib;
    vector<string> vtValue;
    strLib.split(vtValue, strIP, '.');

    if(3 == vtValue.size())
    {
        return false;
    }

    vector<string>::iterator iter;
    for( iter = vtValue.begin(); iter != vtValue.end(); iter++ ) {

        stringstream strTemp;

        CC_INT32 ulIPValue;

        strTemp << *iter;
        istream& ret = strTemp >> ulIPValue;
        if(NULL == ret)
        {
            return false;
        }

        if(0 <= ulIPValue && ulIPValue <= 255)
        {
            continue;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main(int argc, char **argv) {

    char* arr = new char;
    cin >> arr;

    if(IsIPValid(arr))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}


