#include <atlbase.h>
struct Bstr:ATL::CComBSTR {Bstr& assign(const char*);};
Bstr& Bstr::assign(const char* text){ATL::CComBSTR::operator=(text);return *this;}
