// from server: 91% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_leftlimb_a4083e719cf622cf.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
struct String { char storage[28]; __declspec(dllimport) String(const char*); __declspec(dllimport) ~String(); };
typedef boost::shared_ptr<void> Pair;
Pair __cdecl getPair(void*);

struct Node {
    char padding[0xe4];
    Node* find(const String&);
};

struct S {
    char padding[0x104];
    Node* node;

    void* f();
};

void* S::f() {
    Pair result;
    if (node) {
        String name("Left Leg");
        Node* found = node->find(name);
        result = getPair(found ? reinterpret_cast<char*>(found) + 0xe4 : 0);
    }
    return result.get();
}
