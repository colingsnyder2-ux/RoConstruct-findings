// from server: 92% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_historyiters_4d78403504774e51.cpp

// Candidate translation unit (score above; library headers required).

#include <boost/shared_ptr.hpp>
extern "C" __declspec(dllimport) void __cdecl invalid_parameter_noinfo();
typedef boost::shared_ptr<void> Shared;

struct Container {
    unsigned char padding[8];
    void* map;
    unsigned char padding2[8];
    unsigned int first;
    unsigned int last;
};

struct Owner {
    unsigned char padding[8];
    Container* container;
};

struct Iterator {
    Owner* owner;
    void* map;
    unsigned int offset;
};

struct S;

struct Action {
    void (__cdecl *callback)(S*);
    S* object;
    Action(void (__cdecl *)(S*), S*);
};

extern void __cdecl callback(S*);
extern Action __cdecl traverse(Iterator, Iterator, Action);
extern Shared __cdecl acquire(void*);

struct Data {
    unsigned char padding[20];
    Owner owner;
    unsigned char remainder[228];
    void* handle;
};

struct S {
    void* reserved;
    Data* data;
    unsigned int reserved2;
    unsigned int state;
    Shared value;
    void f();
};

__forceinline Action::Action(void (__cdecl *fn)(S*), S* objectValue)
    : callback(fn), object(objectValue)
{
}

inline Iterator getEnd(Data* data) {
    Iterator end;
    end.owner = &data->owner;
    Container* c = end.owner->container;
    unsigned int last = c->last;
    if (c->first > last) invalid_parameter_noinfo();
    end.map = c->map;
    end.offset = last;
    return end;
}
inline Iterator getBegin(Data* data) {
    Iterator begin;
    begin.owner = &data->owner;
    Container* c = begin.owner->container;
    unsigned int first = c->first;
    if (first > c->last) invalid_parameter_noinfo();
    begin.map = c->map;
    begin.offset = first;
    return begin;
}
void S::f() {
    traverse(getBegin(data), getEnd(data), Action(callback, this));
    value = acquire(data->handle);
    state = 1;
}
