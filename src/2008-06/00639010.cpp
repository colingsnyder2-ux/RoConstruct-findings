// from server: 100% by tester
// roc 2008-06 00639010  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639010
//
// 00639010  57                   push edi
// 00639011  8d442408             lea eax, [esp + 8]
// 00639015  8bf9                 mov edi, ecx
// 00639017  50                   push eax
// 00639018  c70700000000         mov dword ptr [edi], 0
// 0063901e  e8cd12fdff           call 0x60a2f0
// 00639023  83c404               add esp, 4
// 00639026  84c0                 test al, al
// 00639028  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063902c  752c                 jne 0x63905a
// 0063902e  8d4f08               lea ecx, [edi + 8]
// 00639031  85c9                 test ecx, ecx
// 00639033  741d                 je 0x639052
// 00639035  8b542408             mov edx, dword ptr [esp + 8]
// 00639039  8911                 mov dword ptr [ecx], edx
// 0063903b  894104               mov dword ptr [ecx + 4], eax
// 0063903e  85c0                 test eax, eax
// 00639040  7410                 je 0x639052
// 00639042  83c004               add eax, 4
// 00639045  b901000000           mov ecx, 1
// 0063904a  f00fc108             lock xadd dword ptr [eax], ecx
// 0063904e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00639052  c70784928400         mov dword ptr [edi], 0x849284
// 00639058  eb06                 jmp 0x639060
// 0063905a  c70700000000         mov dword ptr [edi], 0
// 00639060  85c0                 test eax, eax
// 00639062  7434                 je 0x639098
// 00639064  56                   push esi
// 00639065  8bf0                 mov esi, eax
// 00639067  83c004               add eax, 4
// 0063906a  83caff               or edx, 0xffffffff
// 0063906d  f00fc110             lock xadd dword ptr [eax], edx
// 00639071  751e                 jne 0x639091
// 00639073  8b06                 mov eax, dword ptr [esi]
// 00639075  8b5004               mov edx, dword ptr [eax + 4]
// 00639078  8bce                 mov ecx, esi
// 0063907a  ffd2                 call edx
// 0063907c  8d4608               lea eax, [esi + 8]
// 0063907f  83c9ff               or ecx, 0xffffffff
// 00639082  f00fc108             lock xadd dword ptr [eax], ecx
// 00639086  7509                 jne 0x639091
// 00639088  8b16                 mov edx, dword ptr [esi]
// 0063908a  8b4208               mov eax, dword ptr [edx + 8]
// 0063908d  8bce                 mov ecx, esi
// 0063908f  ffd0                 call eax
// 00639091  5e                   pop esi
// 00639092  8bc7                 mov eax, edi
// 00639094  5f                   pop edi
// 00639095  c20c00               ret 0xc
// 00639098  8bc7                 mov eax, edi
// 0063909a  5f                   pop edi
// 0063909b  c20c00               ret 0xc

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
