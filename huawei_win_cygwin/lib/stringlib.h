/*
 * stringlib.h
 *
 *  Created on: May 30, 2017
 *      Author: hello_chenchen
 */

#ifndef LIB_STRINGLIB_H_
#define LIB_STRINGLIB_H_

using namespace std;

namespace CC_lib
{

struct split
{
    enum empties_t
    {
        empties_ok, no_empties
    };
};

class stringlib
{
public:
    stringlib();
    virtual ~stringlib();

};

} /* namespace CC_lib */

#endif /* LIB_STRINGLIB_H_ */
