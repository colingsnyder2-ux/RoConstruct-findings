// from server: 100% by tester
// roc 2008-06 00556e20  unit: RBX::VRunService::?$BoundFuncDesc  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00556e20
//
// 00556e20  57                   push edi
// 00556e21  8d442408             lea eax, [esp + 8]
// 00556e25  8bf9                 mov edi, ecx
// 00556e27  50                   push eax
// 00556e28  c70700000000         mov dword ptr [edi], 0
// 00556e2e  e8bd340b00           call 0x60a2f0
// 00556e33  83c404               add esp, 4
// 00556e36  84c0                 test al, al
// 00556e38  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00556e3c  752c                 jne 0x556e6a
// 00556e3e  8d4f08               lea ecx, [edi + 8]
// 00556e41  85c9                 test ecx, ecx
// 00556e43  741d                 je 0x556e62
// 00556e45  8b542408             mov edx, dword ptr [esp + 8]
// 00556e49  8911                 mov dword ptr [ecx], edx
// 00556e4b  894104               mov dword ptr [ecx + 4], eax
// 00556e4e  85c0                 test eax, eax
// 00556e50  7410                 je 0x556e62
// 00556e52  83c004               add eax, 4
// 00556e55  b901000000           mov ecx, 1
// 00556e5a  f00fc108             lock xadd dword ptr [eax], ecx
// 00556e5e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00556e62  c70720d68200         mov dword ptr [edi], 0x82d620
// 00556e68  eb06                 jmp 0x556e70
// 00556e6a  c70700000000         mov dword ptr [edi], 0
// 00556e70  85c0                 test eax, eax
// 00556e72  7434                 je 0x556ea8
// 00556e74  56                   push esi
// 00556e75  8bf0                 mov esi, eax
// 00556e77  83c004               add eax, 4
// 00556e7a  83caff               or edx, 0xffffffff
// 00556e7d  f00fc110             lock xadd dword ptr [eax], edx
// 00556e81  751e                 jne 0x556ea1
// 00556e83  8b06                 mov eax, dword ptr [esi]
// 00556e85  8b5004               mov edx, dword ptr [eax + 4]
// 00556e88  8bce                 mov ecx, esi
// 00556e8a  ffd2                 call edx
// 00556e8c  8d4608               lea eax, [esi + 8]
// 00556e8f  83c9ff               or ecx, 0xffffffff
// 00556e92  f00fc108             lock xadd dword ptr [eax], ecx
// 00556e96  7509                 jne 0x556ea1
// 00556e98  8b16                 mov edx, dword ptr [esi]
// 00556e9a  8b4208               mov eax, dword ptr [edx + 8]
// 00556e9d  8bce                 mov ecx, esi
// 00556e9f  ffd0                 call eax
// 00556ea1  5e                   pop esi
// 00556ea2  8bc7                 mov eax, edi
// 00556ea4  5f                   pop edi
// 00556ea5  c20c00               ret 0xc
// 00556ea8  8bc7                 mov eax, edi
// 00556eaa  5f                   pop edi
// 00556eab  c20c00               ret 0xc

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
