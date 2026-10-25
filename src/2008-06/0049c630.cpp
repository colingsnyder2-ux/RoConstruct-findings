// from server: 100% by tester
// roc 2008-06 0049c630  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049c630
//
// 0049c630  57                   push edi
// 0049c631  8d442408             lea eax, [esp + 8]
// 0049c635  8bf9                 mov edi, ecx
// 0049c637  50                   push eax
// 0049c638  c70700000000         mov dword ptr [edi], 0
// 0049c63e  e8addc1600           call 0x60a2f0
// 0049c643  83c404               add esp, 4
// 0049c646  84c0                 test al, al
// 0049c648  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0049c64c  752c                 jne 0x49c67a
// 0049c64e  8d4f08               lea ecx, [edi + 8]
// 0049c651  85c9                 test ecx, ecx
// 0049c653  741d                 je 0x49c672
// 0049c655  8b542408             mov edx, dword ptr [esp + 8]
// 0049c659  8911                 mov dword ptr [ecx], edx
// 0049c65b  894104               mov dword ptr [ecx + 4], eax
// 0049c65e  85c0                 test eax, eax
// 0049c660  7410                 je 0x49c672
// 0049c662  83c004               add eax, 4
// 0049c665  b901000000           mov ecx, 1
// 0049c66a  f00fc108             lock xadd dword ptr [eax], ecx
// 0049c66e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0049c672  c707e8298200         mov dword ptr [edi], 0x8229e8
// 0049c678  eb06                 jmp 0x49c680
// 0049c67a  c70700000000         mov dword ptr [edi], 0
// 0049c680  85c0                 test eax, eax
// 0049c682  7434                 je 0x49c6b8
// 0049c684  56                   push esi
// 0049c685  8bf0                 mov esi, eax
// 0049c687  83c004               add eax, 4
// 0049c68a  83caff               or edx, 0xffffffff
// 0049c68d  f00fc110             lock xadd dword ptr [eax], edx
// 0049c691  751e                 jne 0x49c6b1
// 0049c693  8b06                 mov eax, dword ptr [esi]
// 0049c695  8b5004               mov edx, dword ptr [eax + 4]
// 0049c698  8bce                 mov ecx, esi
// 0049c69a  ffd2                 call edx
// 0049c69c  8d4608               lea eax, [esi + 8]
// 0049c69f  83c9ff               or ecx, 0xffffffff
// 0049c6a2  f00fc108             lock xadd dword ptr [eax], ecx
// 0049c6a6  7509                 jne 0x49c6b1
// 0049c6a8  8b16                 mov edx, dword ptr [esi]
// 0049c6aa  8b4208               mov eax, dword ptr [edx + 8]
// 0049c6ad  8bce                 mov ecx, esi
// 0049c6af  ffd0                 call eax
// 0049c6b1  5e                   pop esi
// 0049c6b2  8bc7                 mov eax, edi
// 0049c6b4  5f                   pop edi
// 0049c6b5  c20c00               ret 0xc
// 0049c6b8  8bc7                 mov eax, edi
// 0049c6ba  5f                   pop edi
// 0049c6bb  c20c00               ret 0xc

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
