// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" {
    extern void (__cdecl* _invalid_parameter_noinfo)();
}

struct Creator;

struct Object {
    void setOwner(Creator*);
};

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;
    Reference& operator=(const Reference&);
    ~Reference();
};

struct Pair {
    Object* object;
    Reference reference;
};

struct Creator {
    char padding[0x19c];
    Pair* begin;
    Pair* end;
    Object* find();
    Object* get();
};

Pair __cdecl makePair();
void* __cdecl func_0042d030();
void __cdecl callback();
extern unsigned char registrationData;
void __cdecl registerCallback(void (__cdecl*)(), void*);

inline Reference::~Reference()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

Object* Creator::get()
{
    Object* result = find();
    if (result)
        return result;

    Pair temporary = makePair();
    result = temporary.object;
    registerCallback(callback, &registrationData);

    unsigned index = reinterpret_cast<unsigned>(func_0042d030());
    if (index >= static_cast<unsigned>(end - begin))
        _invalid_parameter_noinfo();

    Pair& slot = begin[index];
    slot.object = temporary.object;
    slot.reference = temporary.reference;
    result->setOwner(this);
    return result;
}
