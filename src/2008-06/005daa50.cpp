// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct S;

struct Object {
    void attach(S*);
};

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* p;

    Reference& operator=(const Reference&);
    ~Reference();
};

struct Value {
    Object* object;
    Reference reference;
};

struct S {
    char padding[0x19c];
    Value* first;
    Value* last;

    Object* find();
    Object* get();
};

extern Value __cdecl create_value();
extern void __cdecl initialize_value();
extern char initialization_state;
extern void __cdecl initialize_once(void (__cdecl*)(), void*);
extern void* __cdecl func_005d78f0();
extern "C" void (__cdecl* const invalid_parameter_import)();

inline Reference::~Reference()
{
    Control* control = p;
    if (control) {
        if (_InterlockedDecrement(&control->strong) == 0) {
            control->dispose();
            if (_InterlockedDecrement(&control->weak) == 0)
                control->destroy();
        }
    }
}

Object* S::get()
{
    Object* result = find();
    if (result)
        return result;

    Value value = create_value();
    result = value.object;

    initialize_once(initialize_value, &initialization_state);

    unsigned int index = reinterpret_cast<unsigned int>(func_005d78f0());
    if (index >= static_cast<unsigned int>(last - first))
        invalid_parameter_import();

    Value& slot = first[index];
    slot.object = value.object;
    slot.reference = value.reference;

    result->attach(this);
    return result;
}
