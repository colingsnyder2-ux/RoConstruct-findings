// from server: 55% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner {
    int a;
    int b;
};

struct Obj {
    char pad[0x19c];
    Inner* begin;
    Inner* end;
};

struct RefCounted {
    void** vptr;
    volatile long ref1;
    volatile long ref2;
};

extern "C" void* __stdcall make_value_00411490();
extern "C" void* __stdcall func_00411490();

extern "C" void __stdcall sub_00411fd0(void*);
extern "C" int __stdcall sub_004125d0();
extern "C" void __stdcall sub_00557330(void*, void*, void*);
extern "C" void __stdcall sub_0055a8f0(void*, void*);
extern "C" void __stdcall sub_004025b0(void*, void*);

extern "C" void* __stdcall func_00411490()
{
    static void* value = make_value_00411490();
    return value;
}

struct CChatPrompt {
    int method();
};

int CChatPrompt::method()
{
    if (sub_004125d0() != 0)
        return 0;

    void* local = 0;
    sub_00411fd0(&local);

    void* ebx = local;

    sub_00557330((void*)0x96cbe8, (void*)0x411930, (void*)0);
    void* edi = func_00411490();

    Obj* self = (Obj*)this;
    int count = (int)((char*)self->end - (char*)self->begin) >> 3;
    if ((unsigned int)edi >= (unsigned int)count)
        _invalid_parameter_noinfo();

    Inner* slot = (Inner*)((char*)self->begin + (int)edi * 8);
    slot->a = (int)local;
    sub_004025b0(&slot->b, &local);

    sub_0055a8f0(ebx, self);

    RefCounted* rc = (RefCounted*)local;
    if (rc != 0)
    {
        if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1)
        {
            void** vt = rc->vptr;
            void (*f1)(RefCounted*) = (void (*)(RefCounted*))vt[1];
            f1(rc);
        }
        if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1)
        {
            void** vt = rc->vptr;
            void (*f2)(RefCounted*) = (void (*)(RefCounted*))vt[2];
            f2(rc);
        }
    }

    return (int)ebx;
}
