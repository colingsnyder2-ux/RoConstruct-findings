// from server: 83% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct TypeInfo
{
    char data;
};

extern const TypeInfo target_type;
extern bool (__thiscall *equal_type)(const TypeInfo*, const TypeInfo*);

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct S
{
    const TypeInfo* type;
    char padding[16];
    Control* control;

    void __thiscall copy(void*);
};

void __cdecl func_00618d70(void* value, S* object, int operation)
{
    if (operation == 0)
    {
        if (object)
            object->copy(value);
    }
    else if (operation == 1)
    {
        Control* control = object->control;
        if (control && _InterlockedExchangeAdd(&control->strong, -1) == 0)
        {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 0)
                control->destroy();
        }
    }
    else
    {
        object->type = equal_type(object->type, &target_type)
            ? reinterpret_cast<const TypeInfo*>(value) : 0;
    }
}
