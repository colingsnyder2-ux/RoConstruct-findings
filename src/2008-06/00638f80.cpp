// from server: 100% by tester
// roc 2008-06 00638f80  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00638f80
//
// 00638f80  57                   push edi
// 00638f81  8d442408             lea eax, [esp + 8]
// 00638f85  8bf9                 mov edi, ecx
// 00638f87  50                   push eax
// 00638f88  c70700000000         mov dword ptr [edi], 0
// 00638f8e  e85d13fdff           call 0x60a2f0
// 00638f93  83c404               add esp, 4
// 00638f96  84c0                 test al, al
// 00638f98  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00638f9c  752c                 jne 0x638fca
// 00638f9e  8d4f08               lea ecx, [edi + 8]
// 00638fa1  85c9                 test ecx, ecx
// 00638fa3  741d                 je 0x638fc2
// 00638fa5  8b542408             mov edx, dword ptr [esp + 8]
// 00638fa9  8911                 mov dword ptr [ecx], edx
// 00638fab  894104               mov dword ptr [ecx + 4], eax
// 00638fae  85c0                 test eax, eax
// 00638fb0  7410                 je 0x638fc2
// 00638fb2  83c004               add eax, 4
// 00638fb5  b901000000           mov ecx, 1
// 00638fba  f00fc108             lock xadd dword ptr [eax], ecx
// 00638fbe  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00638fc2  c7077c928400         mov dword ptr [edi], 0x84927c
// 00638fc8  eb06                 jmp 0x638fd0
// 00638fca  c70700000000         mov dword ptr [edi], 0
// 00638fd0  85c0                 test eax, eax
// 00638fd2  7434                 je 0x639008
// 00638fd4  56                   push esi
// 00638fd5  8bf0                 mov esi, eax
// 00638fd7  83c004               add eax, 4
// 00638fda  83caff               or edx, 0xffffffff
// 00638fdd  f00fc110             lock xadd dword ptr [eax], edx
// 00638fe1  751e                 jne 0x639001
// 00638fe3  8b06                 mov eax, dword ptr [esi]
// 00638fe5  8b5004               mov edx, dword ptr [eax + 4]
// 00638fe8  8bce                 mov ecx, esi
// 00638fea  ffd2                 call edx
// 00638fec  8d4608               lea eax, [esi + 8]
// 00638fef  83c9ff               or ecx, 0xffffffff
// 00638ff2  f00fc108             lock xadd dword ptr [eax], ecx
// 00638ff6  7509                 jne 0x639001
// 00638ff8  8b16                 mov edx, dword ptr [esi]
// 00638ffa  8b4208               mov eax, dword ptr [edx + 8]
// 00638ffd  8bce                 mov ecx, esi
// 00638fff  ffd0                 call eax
// 00639001  5e                   pop esi
// 00639002  8bc7                 mov eax, edi
// 00639004  5f                   pop edi
// 00639005  c20c00               ret 0xc
// 00639008  8bc7                 mov eax, edi
// 0063900a  5f                   pop edi
// 0063900b  c20c00               ret 0xc

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
