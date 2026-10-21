// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_espclaude_a2e1366d2e239e54.cpp

// Candidate translation unit (score above; library headers required).
#include <vector>
#include <boost/shared_ptr.hpp>
struct Thing;
struct Elem64 {
    boost::shared_ptr<Thing> ref;
    float values[14];
    Elem64();
    Elem64(const Elem64&);
    Elem64& operator=(const Elem64&);
};
template class std::vector<Elem64>;
