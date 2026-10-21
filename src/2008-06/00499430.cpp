// from server: 97% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_arrayresultargumentbbdeef275a27518e.cpp

// Candidate translation unit (score above; library headers required).
#include <G3D/Array.h>
#include <G3D/Vector4.h>
typedef G3D::Array<G3D::Vector4> Storage;
struct Container {
    Storage storage;
    unsigned char first;
    unsigned char second;
};

struct Small {
    int value;

    Small(const Small &);

};

inline Small::Small(const Small &source)
    : value(source.value)
{
}

struct Temporary {
    int value;
    Container container;

    Temporary(Small, int, Container);
    ~Temporary();
};

inline Temporary::~Temporary()
{
}

struct Result {
    int first;
    int second;
    int value;
    Container container;

    Result(int, int, const Temporary &);
};

inline Result::Result(int a, int b, const Temporary &source)
    : first(a), second(b), value(source.value), container(source.container)
{
}

Result __cdecl reconstruct(int a, int b, Small c, volatile int d, Container e)
{
    return Result(a, b, Temporary(c, d, e));
}


