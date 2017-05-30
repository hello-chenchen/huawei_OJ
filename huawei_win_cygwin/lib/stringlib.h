/*
 * stringlib.h
 *
 *  Created on: May 30, 2017
 *      Author: hello_chenchen
 */

#ifndef LIB_STRINGLIB_H_
#define LIB_STRINGLIB_H_

#include <sstream>
#include <string>

//#include <ostream>

//using namespace std;

struct splitStruct
{
    enum empties_t
    {
        empties_ok, no_empties
    };
};

namespace CC_lib
{
template<typename Container>
Container& split(Container& result, const typename Container::value_type& s,
        typename Container::value_type::value_type delimiter,
        splitStruct::empties_t empties = splitStruct::empties_ok)
{
    result.clear();
    std::istringstream ss( s );
    while (!ss.eof())
    {
        typename Container::value_type field;
        getline(ss, field, delimiter);
        if ((empties == splitStruct::no_empties) && field.empty())
            continue;
        result.push_back(field);
    }
    return result;
}

//class stringlib
//{
//public:
//    stringlib();
//    virtual ~stringlib();

//    Container&
//    split(vector _n,
//            const typename Container::value_type&      s,
//                  typename Container::value_type::value_type delimiter,
//                  split::empties_t                           empties = split::empties_ok )
//    {
//        return split(_n, s, delimiter, empties);
//    }

//    Container& split(
//      Container&                                 result,
//      const typename Container::value_type&      s,
//      typename Container::value_type::value_type delimiter,
//      split::empties_t                           empties = split::empties_ok );
//
//};

} /* namespace CC_lib */

#endif /* LIB_STRINGLIB_H_ */
