// from server: 83% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_flagfactory_6e81c5d830ad0ea9.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
typedef boost::shared_ptr<void> Shared;
struct Temporary {
    Shared pointer;
    int value;

    Temporary(Shared);
};

struct Result {
    int first;
    int second;
    int third;
    int value;
    Shared pointer;

    Result(int, int, int, const Temporary&);
};

__forceinline Result::Result(int a, int b, int c, const Temporary& temporary)
    : first(a), second(b), third(c), value(temporary.value),
      pointer(temporary.pointer)
{
}

Result __cdecl reconstruct(int a, int b, int c, Shared pointer)
{
    return Result(a, b, c, Temporary(pointer));
}
