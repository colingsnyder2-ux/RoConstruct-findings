// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted
{
    void* vptr;
    long refcount;
};

struct String
{
    char data[0x1c];
};

extern "C" void __stdcall String_ctor(String* self, const char* s);
extern "C" void __stdcall String_dtor(String* self);

struct Inner
{
    void* vptr;
    long refcount;
};

struct Obj
{
    char pad0[0x104];
    void* field104;
    char pad108[0x10c];
    long field214;
    Inner* field218;
};

struct S
{
    char pad0[0x104];
    void* field104;
    char pad108[0x10c];
    long field214;
    Inner* field218;

    long f();
};

extern "C" void* __stdcall sub_557950(void* p);
extern "C" void* __stdcall sub_5d42f0(void* a, void* b);

long S::f()
{
    if (field214 == 0 && field104 != 0)
    {
        String str;
        String_ctor(&str, (const char*)0x83c4d0);

        void* r = sub_557950(field104);
        void* p = r ? (char*)r + 0xe4 : 0;

        void* q = sub_5d42f0(&str, p);
        Inner* inner = *(Inner**)q;

        field214 = (long)inner;
        field218 = *(Inner**)((char*)q + 4);

        String_dtor(&str);
    }
    return field214;
}
