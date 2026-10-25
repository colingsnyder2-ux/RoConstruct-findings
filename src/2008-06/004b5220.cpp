// from server: 100% by tester
// roc 2008-06 004b5220  unit: RBX::Stats::_N::?$TypedStatsItem  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b5220
//
// 004b5220  57                   push edi
// 004b5221  8d442408             lea eax, [esp + 8]
// 004b5225  8bf9                 mov edi, ecx
// 004b5227  50                   push eax
// 004b5228  c70700000000         mov dword ptr [edi], 0
// 004b522e  e8bd501500           call 0x60a2f0
// 004b5233  83c404               add esp, 4
// 004b5236  84c0                 test al, al
// 004b5238  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b523c  752c                 jne 0x4b526a
// 004b523e  8d4f08               lea ecx, [edi + 8]
// 004b5241  85c9                 test ecx, ecx
// 004b5243  741d                 je 0x4b5262
// 004b5245  8b542408             mov edx, dword ptr [esp + 8]
// 004b5249  8911                 mov dword ptr [ecx], edx
// 004b524b  894104               mov dword ptr [ecx + 4], eax
// 004b524e  85c0                 test eax, eax
// 004b5250  7410                 je 0x4b5262
// 004b5252  83c004               add eax, 4
// 004b5255  b901000000           mov ecx, 1
// 004b525a  f00fc108             lock xadd dword ptr [eax], ecx
// 004b525e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b5262  c707d44c8200         mov dword ptr [edi], 0x824cd4
// 004b5268  eb06                 jmp 0x4b5270
// 004b526a  c70700000000         mov dword ptr [edi], 0
// 004b5270  85c0                 test eax, eax
// 004b5272  7434                 je 0x4b52a8
// 004b5274  56                   push esi
// 004b5275  8bf0                 mov esi, eax
// 004b5277  83c004               add eax, 4
// 004b527a  83caff               or edx, 0xffffffff
// 004b527d  f00fc110             lock xadd dword ptr [eax], edx
// 004b5281  751e                 jne 0x4b52a1
// 004b5283  8b06                 mov eax, dword ptr [esi]
// 004b5285  8b5004               mov edx, dword ptr [eax + 4]
// 004b5288  8bce                 mov ecx, esi
// 004b528a  ffd2                 call edx
// 004b528c  8d4608               lea eax, [esi + 8]
// 004b528f  83c9ff               or ecx, 0xffffffff
// 004b5292  f00fc108             lock xadd dword ptr [eax], ecx
// 004b5296  7509                 jne 0x4b52a1
// 004b5298  8b16                 mov edx, dword ptr [esi]
// 004b529a  8b4208               mov eax, dword ptr [edx + 8]
// 004b529d  8bce                 mov ecx, esi
// 004b529f  ffd0                 call eax
// 004b52a1  5e                   pop esi
// 004b52a2  8bc7                 mov eax, edi
// 004b52a4  5f                   pop edi
// 004b52a5  c20c00               ret 0xc
// 004b52a8  8bc7                 mov eax, edi
// 004b52aa  5f                   pop edi
// 004b52ab  c20c00               ret 0xc

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
