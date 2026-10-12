// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct S;

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Ref {
    Control* p;
    Ref& operator=(const Ref&);
    ~Ref();
};

inline Ref::~Ref() {
    Control* control = p;
    if (control) {
        if (_InterlockedDecrement(&control->strong) == 0) {
            control->dispose();
            if (_InterlockedDecrement(&control->weak) == 0)
                control->destroy();
        }
    }
}

struct Product {
    void attach(S*);
};

struct Pair {
    Product* object;
    Ref reference;
};

extern Pair __cdecl make_pair();
extern void __cdecl callback();
extern char registration_data;
extern void __cdecl register_callback(void (__cdecl*)(), void*);
extern void* __cdecl func_00575630();

struct S {
    char padding[0x19c];
    Pair* first;
    Pair* last;

    Product* existing();
    Product* f();
};

Product* S::f() {
    Product* result = existing();
    if (result)
        return result;

    Pair value = make_pair();
    result = value.object;
    register_callback(callback, &registration_data);

    unsigned index = reinterpret_cast<unsigned>(func_00575630());
    if (index >= static_cast<unsigned>(last - first))
        invalid_parameter_noinfo();

    Pair& entry = first[index];
    entry.object = value.object;
    entry.reference = value.reference;
    result->attach(this);
    return result;
}
