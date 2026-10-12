// from server: 97% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


struct Selection;

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void attach(Selection*);
};

inline long decrement(volatile long* p) {
    return _InterlockedDecrement(p);
}

struct Reference {
    Control* value;
    ~Reference();
    Reference& operator=(const Reference&);
};

inline Reference::~Reference() {
    Control* p = value;
    if (p && decrement(&p->strong) == 0) {
        p->dispose();
        if (decrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Entry {
    Control* object;
    Reference reference;
};

extern Entry __cdecl create_entry();
extern void __cdecl register_callback(void (__cdecl*)(), void*);
extern void __cdecl callback();
extern char registration;
extern void* __cdecl func_00616240();
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Selection {
    char padding[0x19c];
    Entry* first;
    Entry* last;

    Control* find();
    Control* func_006173f0();
};

Control* Selection::func_006173f0() {
    Control* result = find();
    if (result)
        return result;

    Entry temporary = create_entry();
    result = temporary.object;

    register_callback(callback, &registration);

    unsigned index = reinterpret_cast<unsigned>(func_00616240());
    if (index >= static_cast<unsigned>(last - first))
        _invalid_parameter_noinfo();

    Entry* destination = first + index;
    destination->object = temporary.object;
    destination->reference = temporary.reference;

    result->attach(this);
    return result;
}
