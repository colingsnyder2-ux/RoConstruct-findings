// from server: 100% by tester
// roc 2008-06 00493590  unit: RBX::VShirt::?$FactoryProduct  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00493590
//
// 00493590  57                   push edi
// 00493591  8d442408             lea eax, [esp + 8]
// 00493595  8bf9                 mov edi, ecx
// 00493597  50                   push eax
// 00493598  c70700000000         mov dword ptr [edi], 0
// 0049359e  e84d6d1700           call 0x60a2f0
// 004935a3  83c404               add esp, 4
// 004935a6  84c0                 test al, al
// 004935a8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004935ac  752c                 jne 0x4935da
// 004935ae  8d4f08               lea ecx, [edi + 8]
// 004935b1  85c9                 test ecx, ecx
// 004935b3  741d                 je 0x4935d2
// 004935b5  8b542408             mov edx, dword ptr [esp + 8]
// 004935b9  8911                 mov dword ptr [ecx], edx
// 004935bb  894104               mov dword ptr [ecx + 4], eax
// 004935be  85c0                 test eax, eax
// 004935c0  7410                 je 0x4935d2
// 004935c2  83c004               add eax, 4
// 004935c5  b901000000           mov ecx, 1
// 004935ca  f00fc108             lock xadd dword ptr [eax], ecx
// 004935ce  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004935d2  c707e41d8200         mov dword ptr [edi], 0x821de4
// 004935d8  eb06                 jmp 0x4935e0
// 004935da  c70700000000         mov dword ptr [edi], 0
// 004935e0  85c0                 test eax, eax
// 004935e2  7434                 je 0x493618
// 004935e4  56                   push esi
// 004935e5  8bf0                 mov esi, eax
// 004935e7  83c004               add eax, 4
// 004935ea  83caff               or edx, 0xffffffff
// 004935ed  f00fc110             lock xadd dword ptr [eax], edx
// 004935f1  751e                 jne 0x493611
// 004935f3  8b06                 mov eax, dword ptr [esi]
// 004935f5  8b5004               mov edx, dword ptr [eax + 4]
// 004935f8  8bce                 mov ecx, esi
// 004935fa  ffd2                 call edx
// 004935fc  8d4608               lea eax, [esi + 8]
// 004935ff  83c9ff               or ecx, 0xffffffff
// 00493602  f00fc108             lock xadd dword ptr [eax], ecx
// 00493606  7509                 jne 0x493611
// 00493608  8b16                 mov edx, dword ptr [esi]
// 0049360a  8b4208               mov eax, dword ptr [edx + 8]
// 0049360d  8bce                 mov ecx, esi
// 0049360f  ffd0                 call eax
// 00493611  5e                   pop esi
// 00493612  8bc7                 mov eax, edi
// 00493614  5f                   pop edi
// 00493615  c20c00               ret 0xc
// 00493618  8bc7                 mov eax, edi
// 0049361a  5f                   pop edi
// 0049361b  c20c00               ret 0xc

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
