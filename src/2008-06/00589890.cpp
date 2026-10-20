// from server: 95% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_historyctor_0c027b735aa5dc08.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
typedef boost::shared_ptr<void> Shared;
struct Vector {
    void* first;
    void* last;
    void* end;

    Vector();
    ~Vector();
};

__forceinline Vector::Vector() : first(0), last(0), end(0) {}

struct AllocatorA {};
struct AllocatorB {};

struct Helper {
    unsigned long data;
    Helper(const AllocatorA&, const AllocatorB&);
};

struct S {
    int value;
    Shared shared;
    Vector vector;
    Helper helper;

    S(int, Shared);
};

S::S(int n, Shared p)
    : value(n), shared(p), vector(),
      helper(reinterpret_cast<const AllocatorA&>(n),
             reinterpret_cast<const AllocatorB&>(n)) {
}
