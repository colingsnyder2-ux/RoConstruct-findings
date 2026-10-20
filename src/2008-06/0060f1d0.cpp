// from server: 83% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_contacttransform_f38bcccf314f152c.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
struct Transform {
    float data[12];
    Transform combine(const Transform*) const;
    Transform apply(const Transform*) const;
};

struct Object {
    const Transform* getTransform();
    void setTransform(const Transform*);
};

typedef boost::shared_ptr<Object> Handle;

struct Entry {
    Object* object;
    void* control;
    Handle acquire() const;
};

struct List {
    unsigned char padding[12];
    Entry* first;
    Entry* last;
};

extern void __cdecl normalize(Transform*);

void __cdecl update(List* list, Transform first, Transform second)
{
    for (unsigned int i = 0;
         i < static_cast<unsigned int>(list->last - list->first);
         ++i) {
        if (i >= static_cast<unsigned int>(list->last - list->first))
            _invalid_parameter_noinfo();

        Handle h = list->first[i].acquire();
        Object* object = h.get();
        if (object) {
            Transform intermediate = first.combine(object->getTransform());
            normalize(&intermediate);
            object->setTransform(&second.apply(&intermediate));
        }
    }
}
