// from server: 98% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_manual_pair_e8f0db97bfa5affe.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
typedef boost::shared_ptr<void> Shared;
struct Temporary {
    Shared first;
    Shared second;
    int extra;

    Temporary(Shared firstValue, Shared secondValue, int a, int b);
    ~Temporary();
};

struct Result {
    int value;
    Shared first;
    Shared second;

    Result(int v, const Temporary& source)
        : value(v), first(source.first), second(source.second)
    {
    }
};

Result __cdecl f(int value, Shared first, Shared second, int a, int b)
{
    return Result(value, Temporary(first, second, a, b));
}
