// from server: 100% by tester
// roc 2008-06 00638dd0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00638dd0
//
// 00638dd0  57                   push edi
// 00638dd1  8d442408             lea eax, [esp + 8]
// 00638dd5  8bf9                 mov edi, ecx
// 00638dd7  50                   push eax
// 00638dd8  c70700000000         mov dword ptr [edi], 0
// 00638dde  e80d15fdff           call 0x60a2f0
// 00638de3  83c404               add esp, 4
// 00638de6  84c0                 test al, al
// 00638de8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00638dec  752c                 jne 0x638e1a
// 00638dee  8d4f08               lea ecx, [edi + 8]
// 00638df1  85c9                 test ecx, ecx
// 00638df3  741d                 je 0x638e12
// 00638df5  8b542408             mov edx, dword ptr [esp + 8]
// 00638df9  8911                 mov dword ptr [ecx], edx
// 00638dfb  894104               mov dword ptr [ecx + 4], eax
// 00638dfe  85c0                 test eax, eax
// 00638e00  7410                 je 0x638e12
// 00638e02  83c004               add eax, 4
// 00638e05  b901000000           mov ecx, 1
// 00638e0a  f00fc108             lock xadd dword ptr [eax], ecx
// 00638e0e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00638e12  c70764928400         mov dword ptr [edi], 0x849264
// 00638e18  eb06                 jmp 0x638e20
// 00638e1a  c70700000000         mov dword ptr [edi], 0
// 00638e20  85c0                 test eax, eax
// 00638e22  7434                 je 0x638e58
// 00638e24  56                   push esi
// 00638e25  8bf0                 mov esi, eax
// 00638e27  83c004               add eax, 4
// 00638e2a  83caff               or edx, 0xffffffff
// 00638e2d  f00fc110             lock xadd dword ptr [eax], edx
// 00638e31  751e                 jne 0x638e51
// 00638e33  8b06                 mov eax, dword ptr [esi]
// 00638e35  8b5004               mov edx, dword ptr [eax + 4]
// 00638e38  8bce                 mov ecx, esi
// 00638e3a  ffd2                 call edx
// 00638e3c  8d4608               lea eax, [esi + 8]
// 00638e3f  83c9ff               or ecx, 0xffffffff
// 00638e42  f00fc108             lock xadd dword ptr [eax], ecx
// 00638e46  7509                 jne 0x638e51
// 00638e48  8b16                 mov edx, dword ptr [esi]
// 00638e4a  8b4208               mov eax, dword ptr [edx + 8]
// 00638e4d  8bce                 mov ecx, esi
// 00638e4f  ffd0                 call eax
// 00638e51  5e                   pop esi
// 00638e52  8bc7                 mov eax, edi
// 00638e54  5f                   pop edi
// 00638e55  c20c00               ret 0xc
// 00638e58  8bc7                 mov eax, edi
// 00638e5a  5f                   pop edi
// 00638e5b  c20c00               ret 0xc

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
