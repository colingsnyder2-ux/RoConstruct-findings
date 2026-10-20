// from server: 81% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_contactprocess_ef49821f8f29ee60.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
struct Object {
    void func_00598c70();
};

typedef boost::shared_ptr<Object> Shared;

struct Entry {
    Object* object;
    void* control;
    Shared get();
};

struct Container {
    char padding[12];
    Entry* first;
    Entry* last;
};

bool __cdecl testObject(Shared value);

void __cdecl process(Container* container)
{
    unsigned int count = static_cast<unsigned int>(container->last - container->first);
    for (unsigned int i = 0; i < static_cast<unsigned int>(container->last - container->first); ++i) {
        if (i >= static_cast<unsigned int>(container->last - container->first))
            _invalid_parameter_noinfo();

        Shared value = container->first[i].get();
        Object* object = value.get();
        if (testObject(value))
            object->func_00598c70();
    }
}
