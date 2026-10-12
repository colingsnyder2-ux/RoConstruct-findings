// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Creator;

struct Object {
    void attach(Creator*);
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
};

struct Pointer {
    Object* object;
    Reference reference;
    ~Pointer();
};

struct Creator {
    char padding[0x19c];
    Pointer* begin;
    Pointer* end;

    Object* existing();
    Object* create();
};

extern Pointer make_pointer();
extern void callback();
extern int registration;
extern void register_callback(void (*)(), int*);
extern void* func_0045b2b0();
extern "C" void (__cdecl* invalid_parameter_noinfo)();

inline Pointer::~Pointer()
{
    Control* p = reference.control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

Object* Creator::create()
{
    Object* result = existing();
    if (result)
        return result;

    Pointer value = make_pointer();
    result = value.object;
    register_callback(callback, &registration);

    unsigned int index = reinterpret_cast<unsigned int>(func_0045b2b0());
    if (index >= static_cast<unsigned int>(end - begin))
        invalid_parameter_noinfo();

    Pointer& slot = begin[index];
    slot.object = value.object;
    slot.reference = value.reference;
    result->attach(this);
    return result;
}
