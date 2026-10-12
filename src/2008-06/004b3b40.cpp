// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct S;

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;
    Reference& operator=(const Reference& other);
    ~Reference();
};

inline Reference::~Reference() {
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Product {
    void attach(S*);
};

struct Pair {
    Product* pointer;
    Reference reference;
};

Pair __cdecl create_product();
void __cdecl registration_callback();
extern char registration_data;
void __cdecl register_product(void (__cdecl*)(), void*);
void* __cdecl func_004962f0();

struct S {
    char padding[0x19c];
    Pair* begin;
    Pair* end;
    Product* lookup();
    Product* get();
};

Product* S::get() {
    Product* existing = lookup();
    if (existing)
        return existing;

    Pair value = create_product();
    Product* result = value.pointer;
    register_product(registration_callback, &registration_data);

    unsigned int index = reinterpret_cast<unsigned int>(func_004962f0());
    if (index >= static_cast<unsigned int>(end - begin))
        _invalid_parameter_noinfo();

    Pair* slot = begin + index;
    slot->pointer = value.pointer;
    slot->reference = value.reference;
    result->attach(this);
    return result;
}
