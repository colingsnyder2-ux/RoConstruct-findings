// from server: 100% by tester
// roc 2008-06 00638d40  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00638d40
//
// 00638d40  57                   push edi
// 00638d41  8d442408             lea eax, [esp + 8]
// 00638d45  8bf9                 mov edi, ecx
// 00638d47  50                   push eax
// 00638d48  c70700000000         mov dword ptr [edi], 0
// 00638d4e  e89d15fdff           call 0x60a2f0
// 00638d53  83c404               add esp, 4
// 00638d56  84c0                 test al, al
// 00638d58  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00638d5c  752c                 jne 0x638d8a
// 00638d5e  8d4f08               lea ecx, [edi + 8]
// 00638d61  85c9                 test ecx, ecx
// 00638d63  741d                 je 0x638d82
// 00638d65  8b542408             mov edx, dword ptr [esp + 8]
// 00638d69  8911                 mov dword ptr [ecx], edx
// 00638d6b  894104               mov dword ptr [ecx + 4], eax
// 00638d6e  85c0                 test eax, eax
// 00638d70  7410                 je 0x638d82
// 00638d72  83c004               add eax, 4
// 00638d75  b901000000           mov ecx, 1
// 00638d7a  f00fc108             lock xadd dword ptr [eax], ecx
// 00638d7e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00638d82  c7075c928400         mov dword ptr [edi], 0x84925c
// 00638d88  eb06                 jmp 0x638d90
// 00638d8a  c70700000000         mov dword ptr [edi], 0
// 00638d90  85c0                 test eax, eax
// 00638d92  7434                 je 0x638dc8
// 00638d94  56                   push esi
// 00638d95  8bf0                 mov esi, eax
// 00638d97  83c004               add eax, 4
// 00638d9a  83caff               or edx, 0xffffffff
// 00638d9d  f00fc110             lock xadd dword ptr [eax], edx
// 00638da1  751e                 jne 0x638dc1
// 00638da3  8b06                 mov eax, dword ptr [esi]
// 00638da5  8b5004               mov edx, dword ptr [eax + 4]
// 00638da8  8bce                 mov ecx, esi
// 00638daa  ffd2                 call edx
// 00638dac  8d4608               lea eax, [esi + 8]
// 00638daf  83c9ff               or ecx, 0xffffffff
// 00638db2  f00fc108             lock xadd dword ptr [eax], ecx
// 00638db6  7509                 jne 0x638dc1
// 00638db8  8b16                 mov edx, dword ptr [esi]
// 00638dba  8b4208               mov eax, dword ptr [edx + 8]
// 00638dbd  8bce                 mov ecx, esi
// 00638dbf  ffd0                 call eax
// 00638dc1  5e                   pop esi
// 00638dc2  8bc7                 mov eax, edi
// 00638dc4  5f                   pop edi
// 00638dc5  c20c00               ret 0xc
// 00638dc8  8bc7                 mov eax, edi
// 00638dca  5f                   pop edi
// 00638dcb  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

extern bool func_0060a2f0();
extern char objectTag;

inline void* __cdecl operator new(unsigned int, void* p)
{
    return p;
}

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Pair
{
    void* object;
    Control* control;

    Pair(const Pair& other);
};

inline Pair::Pair(const Pair& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

struct S
{
    void* tag;
    unsigned int reserved;
    Pair value;

    S* func_0055a4b0(Pair argument, unsigned int unused);
};

S* S::func_0055a4b0(Pair argument, unsigned int unused)
{
    tag = 0;

    if (!reinterpret_cast<bool (__cdecl*)(Pair*)>(
            func_0060a2f0)(&argument))
    {
        new (&value) Pair(argument);
        tag = &objectTag;
    }
    else
    {
        tag = 0;
    }

    if (argument.control)
    {
        Control* control = argument.control;
        if (_InterlockedDecrement(&control->strong) == 0)
        {
            control->dispose();
            if (_InterlockedDecrement(&control->weak) == 0)
                control->destroy();
        }
    }

    return this;
}
