// from server: 87% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_fileinput_115a996028d2891e.cpp

// Candidate translation unit (score above; library headers required).
#include <fstream>
typedef std::basic_ifstream<char, std::char_traits<char> > Input;

struct Result
{
    ~Result();
};

extern "C" int __cdecl measure(const char *);
Result __cdecl read(Input *, int);

Result __cdecl function(const char *filename)
{
    Input input(filename, 0x21, 0x40);
    return read(&input, measure(filename));
}
