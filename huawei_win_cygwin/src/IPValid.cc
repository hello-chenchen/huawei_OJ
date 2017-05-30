/*
 * IPValid.cc
 *
 *  Created on: May 30, 2017
 *      Author: root
 */

#include <iostream>
#include <string>
#include <vector>
#include "../lib/stringlib.h"

using namespace std;
using namespace CC_lib;

//const int ulHigh2Value = 0xFF000000;
//const int ulHigh4Value = 0x00FF0000;
//const int ulLow2Value = 0x0000FF00;
//const int ulLow4Value = 0x000000FF;

void func()
{
//    stringlib<CC_lib::split> cc;
    cout << "cje" << endl;
    string strdemo = "10.192.10.1";

    vector<string> vtValue;
    split(vtValue, strdemo, '.');

    cout << vtValue.size()<< endl;

    vector<string>::iterator iter;
  for( iter = vtValue.begin(); iter != vtValue.end(); iter++ ) {
    cout << *iter << endl;
  }
}

bool IsIPValid(int ulIP)
{


}

int main(int argc, char **argv) {

    func();
    return 0;
}


