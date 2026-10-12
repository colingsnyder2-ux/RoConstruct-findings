// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct S;

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct Object {
    void attach(S*);
};

struct Reference {
    Control* value;
    Reference& assign(const Reference&);
};

struct Temporary {
    Object* value;
    Reference reference;

    ~Temporary();
};

struct Entry {
    Object* value;
    Reference reference;
};

extern Temporary __cdecl create_temporary();
extern void __cdecl register_callback(void (__cdecl*)(), void*);
extern void __cdecl callback();
extern char callback_data;
extern void* __cdecl func_00455ea0();

struct S {
    char padding[0x19c];
    Entry* first;
    Entry* last;

    Object* existing();
    Object* f();
};

inline Temporary::~Temporary()
{
    Control* p = reference.value;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

Object* S::f()
{
    Object* result = existing();
    if (result)
        return result;

    Temporary temporary = create_temporary();
    result = temporary.value;

    register_callback(callback, &callback_data);

    unsigned int index = (unsigned int)func_00455ea0();
    if (index >= (unsigned int)(last - first))
        _invalid_parameter_noinfo();

    Entry* entry = first + index;
    entry->value = temporary.value;
    entry->reference.assign(temporary.reference);
    result->attach(this);

    return result;
}
