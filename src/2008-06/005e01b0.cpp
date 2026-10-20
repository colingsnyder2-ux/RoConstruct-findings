// from server: 97% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_lexicalnoreturn_e5982741c99eb8d1.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/lexical_cast.hpp>
#include <sstream>
#include <string>
__declspec(noreturn) void __cdecl raise(const boost::bad_lexical_cast&);
unsigned short convert(const std::string& text) {
 unsigned short value;
 std::stringstream stream(std::ios::in | std::ios::out);
 stream.unsetf(std::ios::skipws);
 stream.precision(5);
 if (!(stream << text).fail() && (stream >> value) && stream.get() == -1) return value;
 boost::bad_lexical_cast error(typeid(std::string), typeid(unsigned short));
 raise(error);
}
