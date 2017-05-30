/*
 * stringlib.h
 *
 *  Created on: May 30, 2017
 *      Author: hello_chenchen
 */

#ifndef LIB_STRINGLIB_H_
#define LIB_STRINGLIB_H_

#include <vector>

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
template <typename Container>

class stringlib
{
public:
    stringlib();
    virtual ~stringlib();

//    Container&
//    split(vector _n,
//            const typename Container::value_type&      s,
//                  typename Container::value_type::value_type delimiter,
//                  split::empties_t                           empties = split::empties_ok )
//    {
//        return split(_n, s, delimiter, empties);
//    }
    Container& split(
      Container&                                 result,
      const typename Container::value_type&      s,
      typename Container::value_type::value_type delimiter,
      split::empties_t                           empties = split::empties_ok );

};

} /* namespace CC_lib */

#endif /* LIB_STRINGLIB_H_ */
