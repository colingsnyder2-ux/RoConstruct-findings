// from server: 100% by tester
// roc 2008-06 004b45b0  unit: RBX::Network::VPeer::?$BoundFuncDesc  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b45b0
//
// 004b45b0  57                   push edi
// 004b45b1  8d442408             lea eax, [esp + 8]
// 004b45b5  8bf9                 mov edi, ecx
// 004b45b7  50                   push eax
// 004b45b8  c70700000000         mov dword ptr [edi], 0
// 004b45be  e82d5d1500           call 0x60a2f0
// 004b45c3  83c404               add esp, 4
// 004b45c6  84c0                 test al, al
// 004b45c8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b45cc  752c                 jne 0x4b45fa
// 004b45ce  8d4f08               lea ecx, [edi + 8]
// 004b45d1  85c9                 test ecx, ecx
// 004b45d3  741d                 je 0x4b45f2
// 004b45d5  8b542408             mov edx, dword ptr [esp + 8]
// 004b45d9  8911                 mov dword ptr [ecx], edx
// 004b45db  894104               mov dword ptr [ecx + 4], eax
// 004b45de  85c0                 test eax, eax
// 004b45e0  7410                 je 0x4b45f2
// 004b45e2  83c004               add eax, 4
// 004b45e5  b901000000           mov ecx, 1
// 004b45ea  f00fc108             lock xadd dword ptr [eax], ecx
// 004b45ee  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b45f2  c7078c4c8200         mov dword ptr [edi], 0x824c8c
// 004b45f8  eb06                 jmp 0x4b4600
// 004b45fa  c70700000000         mov dword ptr [edi], 0
// 004b4600  85c0                 test eax, eax
// 004b4602  7434                 je 0x4b4638
// 004b4604  56                   push esi
// 004b4605  8bf0                 mov esi, eax
// 004b4607  83c004               add eax, 4
// 004b460a  83caff               or edx, 0xffffffff
// 004b460d  f00fc110             lock xadd dword ptr [eax], edx
// 004b4611  751e                 jne 0x4b4631
// 004b4613  8b06                 mov eax, dword ptr [esi]
// 004b4615  8b5004               mov edx, dword ptr [eax + 4]
// 004b4618  8bce                 mov ecx, esi
// 004b461a  ffd2                 call edx
// 004b461c  8d4608               lea eax, [esi + 8]
// 004b461f  83c9ff               or ecx, 0xffffffff
// 004b4622  f00fc108             lock xadd dword ptr [eax], ecx
// 004b4626  7509                 jne 0x4b4631
// 004b4628  8b16                 mov edx, dword ptr [esi]
// 004b462a  8b4208               mov eax, dword ptr [edx + 8]
// 004b462d  8bce                 mov ecx, esi
// 004b462f  ffd0                 call eax
// 004b4631  5e                   pop esi
// 004b4632  8bc7                 mov eax, edi
// 004b4634  5f                   pop edi
// 004b4635  c20c00               ret 0xc
// 004b4638  8bc7                 mov eax, edi
// 004b463a  5f                   pop edi
// 004b463b  c20c00               ret 0xc

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
