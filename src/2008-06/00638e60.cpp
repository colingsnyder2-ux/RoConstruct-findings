// from server: 100% by tester
// roc 2008-06 00638e60  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00638e60
//
// 00638e60  57                   push edi
// 00638e61  8d442408             lea eax, [esp + 8]
// 00638e65  8bf9                 mov edi, ecx
// 00638e67  50                   push eax
// 00638e68  c70700000000         mov dword ptr [edi], 0
// 00638e6e  e87d14fdff           call 0x60a2f0
// 00638e73  83c404               add esp, 4
// 00638e76  84c0                 test al, al
// 00638e78  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00638e7c  752c                 jne 0x638eaa
// 00638e7e  8d4f08               lea ecx, [edi + 8]
// 00638e81  85c9                 test ecx, ecx
// 00638e83  741d                 je 0x638ea2
// 00638e85  8b542408             mov edx, dword ptr [esp + 8]
// 00638e89  8911                 mov dword ptr [ecx], edx
// 00638e8b  894104               mov dword ptr [ecx + 4], eax
// 00638e8e  85c0                 test eax, eax
// 00638e90  7410                 je 0x638ea2
// 00638e92  83c004               add eax, 4
// 00638e95  b901000000           mov ecx, 1
// 00638e9a  f00fc108             lock xadd dword ptr [eax], ecx
// 00638e9e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00638ea2  c7076c928400         mov dword ptr [edi], 0x84926c
// 00638ea8  eb06                 jmp 0x638eb0
// 00638eaa  c70700000000         mov dword ptr [edi], 0
// 00638eb0  85c0                 test eax, eax
// 00638eb2  7434                 je 0x638ee8
// 00638eb4  56                   push esi
// 00638eb5  8bf0                 mov esi, eax
// 00638eb7  83c004               add eax, 4
// 00638eba  83caff               or edx, 0xffffffff
// 00638ebd  f00fc110             lock xadd dword ptr [eax], edx
// 00638ec1  751e                 jne 0x638ee1
// 00638ec3  8b06                 mov eax, dword ptr [esi]
// 00638ec5  8b5004               mov edx, dword ptr [eax + 4]
// 00638ec8  8bce                 mov ecx, esi
// 00638eca  ffd2                 call edx
// 00638ecc  8d4608               lea eax, [esi + 8]
// 00638ecf  83c9ff               or ecx, 0xffffffff
// 00638ed2  f00fc108             lock xadd dword ptr [eax], ecx
// 00638ed6  7509                 jne 0x638ee1
// 00638ed8  8b16                 mov edx, dword ptr [esi]
// 00638eda  8b4208               mov eax, dword ptr [edx + 8]
// 00638edd  8bce                 mov ecx, esi
// 00638edf  ffd0                 call eax
// 00638ee1  5e                   pop esi
// 00638ee2  8bc7                 mov eax, edi
// 00638ee4  5f                   pop edi
// 00638ee5  c20c00               ret 0xc
// 00638ee8  8bc7                 mov eax, edi
// 00638eea  5f                   pop edi
// 00638eeb  c20c00               ret 0xc

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
