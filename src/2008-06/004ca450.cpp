// from server: 96% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_roundrobin_e07fc566e63bfd43.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
typedef boost::shared_ptr<void> Shared;
typedef Shared (__cdecl *Callback)(void*);

Shared __stdcall invoke(void*, Callback* callback, void*** argument, void*)
{
    void* value = **argument;
    return static_cast<const Shared&>((*callback)(value));
}
