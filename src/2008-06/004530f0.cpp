// from server: 93% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CRobloxDoc;

struct Object {
    void attach(CRobloxDoc*);
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    void release();
};

struct Reference {
    Control* value;
    Reference& operator=(const Reference&);
};

struct Value {
    Object* object;
    Reference reference;
    ~Value();
};

Value __cdecl create_value();
void __cdecl register_value(void (__cdecl*)(), void*);
void __cdecl value_callback();
extern char value_registration;
void* __cdecl func_0044f3c0();
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct CRobloxDoc {
    char padding[0x19c];
    Value* begin;
    Value* end;
    Object* find_value();
    Object* func_004530f0();
};

__forceinline void Control::release()
{
    if (_InterlockedExchangeAdd(&strong, -1) == 0) {
        dispose();
        if (_InterlockedExchangeAdd(&weak, -1) == 0)
            destroy();
    }
}

__forceinline Value::~Value()
{
    if (reference.value)
        reference.value->release();
}

Object* CRobloxDoc::func_004530f0()
{
    Object* result = find_value();
    if (result)
        return result;

    Value temporary = create_value();
    result = temporary.object;
    register_value(value_callback, &value_registration);

    unsigned int index = (unsigned int)func_0044f3c0();
    if (index >= (unsigned int)(end - begin))
        _invalid_parameter_noinfo();

    Value& slot = begin[index];
    slot.object = temporary.object;
    slot.reference = temporary.reference;
    result->attach(this);
    return result;
}
