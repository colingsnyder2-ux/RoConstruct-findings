// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct S;

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;

    void attach(S*);
};

struct Ref {
    Control* pointer;
    void assign(const Ref*);
};

struct Pair {
    Control* object;
    Ref reference;
    ~Pair();
};

struct S {
    char padding[0x19c];
    Pair* first;
    Pair* last;

    Control* existing();
    Control* f();
};

Pair __cdecl create_pair();
void* __cdecl func_00413810();
extern void __cdecl callback();
extern char registration_data;
extern void __cdecl register_pair(void (__cdecl*)(), void*);
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

inline Pair::~Pair()
{
    Control* p = reference.pointer;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

Control* S::f()
{
    Control* result = existing();
    if (result)
        return result;

    Pair value = create_pair();
    result = value.object;
    register_pair(callback, &registration_data);

    unsigned int index = (unsigned int)func_00413810();
    if (index >= (unsigned int)(last - first))
        _invalid_parameter_noinfo();

    Pair* slot = first + index;
    slot->object = value.object;
    slot->reference.assign(&value.reference);
    result->attach(this);
    return result;
}
