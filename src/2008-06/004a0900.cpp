// from server: 100% by tester
// roc 2008-06 004a0900  unit: RBX::Network::VClient::?$BoundFuncDesc  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a0900
//
// 004a0900  57                   push edi
// 004a0901  8d442408             lea eax, [esp + 8]
// 004a0905  8bf9                 mov edi, ecx
// 004a0907  50                   push eax
// 004a0908  c70700000000         mov dword ptr [edi], 0
// 004a090e  e8dd991600           call 0x60a2f0
// 004a0913  83c404               add esp, 4
// 004a0916  84c0                 test al, al
// 004a0918  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a091c  752c                 jne 0x4a094a
// 004a091e  8d4f08               lea ecx, [edi + 8]
// 004a0921  85c9                 test ecx, ecx
// 004a0923  741d                 je 0x4a0942
// 004a0925  8b542408             mov edx, dword ptr [esp + 8]
// 004a0929  8911                 mov dword ptr [ecx], edx
// 004a092b  894104               mov dword ptr [ecx + 4], eax
// 004a092e  85c0                 test eax, eax
// 004a0930  7410                 je 0x4a0942
// 004a0932  83c004               add eax, 4
// 004a0935  b901000000           mov ecx, 1
// 004a093a  f00fc108             lock xadd dword ptr [eax], ecx
// 004a093e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a0942  c707a42f8200         mov dword ptr [edi], 0x822fa4
// 004a0948  eb06                 jmp 0x4a0950
// 004a094a  c70700000000         mov dword ptr [edi], 0
// 004a0950  85c0                 test eax, eax
// 004a0952  7434                 je 0x4a0988
// 004a0954  56                   push esi
// 004a0955  8bf0                 mov esi, eax
// 004a0957  83c004               add eax, 4
// 004a095a  83caff               or edx, 0xffffffff
// 004a095d  f00fc110             lock xadd dword ptr [eax], edx
// 004a0961  751e                 jne 0x4a0981
// 004a0963  8b06                 mov eax, dword ptr [esi]
// 004a0965  8b5004               mov edx, dword ptr [eax + 4]
// 004a0968  8bce                 mov ecx, esi
// 004a096a  ffd2                 call edx
// 004a096c  8d4608               lea eax, [esi + 8]
// 004a096f  83c9ff               or ecx, 0xffffffff
// 004a0972  f00fc108             lock xadd dword ptr [eax], ecx
// 004a0976  7509                 jne 0x4a0981
// 004a0978  8b16                 mov edx, dword ptr [esi]
// 004a097a  8b4208               mov eax, dword ptr [edx + 8]
// 004a097d  8bce                 mov ecx, esi
// 004a097f  ffd0                 call eax
// 004a0981  5e                   pop esi
// 004a0982  8bc7                 mov eax, edi
// 004a0984  5f                   pop edi
// 004a0985  c20c00               ret 0xc
// 004a0988  8bc7                 mov eax, edi
// 004a098a  5f                   pop edi
// 004a098b  c20c00               ret 0xc

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
