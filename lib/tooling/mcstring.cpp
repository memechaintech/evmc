#include <evmc/mcstring.h>
#include <cstring>

mcstring  create_string_n(const char * s,size_t size){
    mcstring ret{};
    ret.size=size;
    ret.data=new char[size];
    std::memcpy(ret.data,s,size);
    return ret;
}
mcstring  create_string(const char * s){
    mcstring ret{};
    ret.size=strlen(s);
    ret.data=new char[ret.size];
    std::memcpy(ret.data,s,ret.size);
    return ret;
}
void  destory_string(mcstring s){
    delete[] s.data;
}


