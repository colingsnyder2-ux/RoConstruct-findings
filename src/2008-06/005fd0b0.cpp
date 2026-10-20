// from server: 87% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_backpackinsert_c0e0575ea62c6fe6.cpp

// Candidate translation unit (score above; library headers required).

#include <boost/shared_ptr.hpp>
struct S;

struct Listener {
    void connect(S*);
};

typedef boost::shared_ptr<Listener> Shared;

extern Shared __cdecl makeListener();

struct Entry {
    S* object;
    boost::detail::shared_count control;
};

struct Array {
    char padding[12];
    Entry* first;
    Entry* last;
    S* at(unsigned int);
};

inline S* Array::at(unsigned int index) {
    if (index >= static_cast<unsigned int>(last - first))
        _invalid_parameter_noinfo();
    return first[index].object;
}

inline const int& minimum(const int& a, const int& b) {
    return b < a ? b : a;
}

struct S {
    char padding0[0x108];
    Array* children;
    char padding1[0x3c];
    void* value;
    char padding2[0x5c];
    int insertionIndex;

    void setValue(void*);
    void insert(void*);
};

void S::insert(void* valueToInsert) {
    Shared listener = makeListener();
    listener->connect(this);

    Array* array = children;
    int lastIndex = (array ? static_cast<int>(array->last - array->first) : 0) - 1;
    int* index = &insertionIndex;
    int position;
    if (*index >= 0)
        position = minimum(*index, lastIndex);
    else
        position = lastIndex;

    for (int i = lastIndex; i > position; --i) {
        S* previous = children->at(i - 1);
        S* current = children->at(i);
        current->setValue(previous->value);
    }

    S* destination = children->at(position);
    destination->setValue(valueToInsert);
    *index = -1;
}