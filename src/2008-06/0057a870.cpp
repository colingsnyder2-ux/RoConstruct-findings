// from server: 100% by tester
// roc 2008-06 0057a870  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057a870
//
// 0057a870  57                   push edi
// 0057a871  8d442408             lea eax, [esp + 8]
// 0057a875  8bf9                 mov edi, ecx
// 0057a877  50                   push eax
// 0057a878  c70700000000         mov dword ptr [edi], 0
// 0057a87e  e86dfa0800           call 0x60a2f0
// 0057a883  83c404               add esp, 4
// 0057a886  84c0                 test al, al
// 0057a888  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057a88c  752c                 jne 0x57a8ba
// 0057a88e  8d4f08               lea ecx, [edi + 8]
// 0057a891  85c9                 test ecx, ecx
// 0057a893  741d                 je 0x57a8b2
// 0057a895  8b542408             mov edx, dword ptr [esp + 8]
// 0057a899  8911                 mov dword ptr [ecx], edx
// 0057a89b  894104               mov dword ptr [ecx + 4], eax
// 0057a89e  85c0                 test eax, eax
// 0057a8a0  7410                 je 0x57a8b2
// 0057a8a2  83c004               add eax, 4
// 0057a8a5  b901000000           mov ecx, 1
// 0057a8aa  f00fc108             lock xadd dword ptr [eax], ecx
// 0057a8ae  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057a8b2  c707b0008300         mov dword ptr [edi], 0x8300b0
// 0057a8b8  eb06                 jmp 0x57a8c0
// 0057a8ba  c70700000000         mov dword ptr [edi], 0
// 0057a8c0  85c0                 test eax, eax
// 0057a8c2  7434                 je 0x57a8f8
// 0057a8c4  56                   push esi
// 0057a8c5  8bf0                 mov esi, eax
// 0057a8c7  83c004               add eax, 4
// 0057a8ca  83caff               or edx, 0xffffffff
// 0057a8cd  f00fc110             lock xadd dword ptr [eax], edx
// 0057a8d1  751e                 jne 0x57a8f1
// 0057a8d3  8b06                 mov eax, dword ptr [esi]
// 0057a8d5  8b5004               mov edx, dword ptr [eax + 4]
// 0057a8d8  8bce                 mov ecx, esi
// 0057a8da  ffd2                 call edx
// 0057a8dc  8d4608               lea eax, [esi + 8]
// 0057a8df  83c9ff               or ecx, 0xffffffff
// 0057a8e2  f00fc108             lock xadd dword ptr [eax], ecx
// 0057a8e6  7509                 jne 0x57a8f1
// 0057a8e8  8b16                 mov edx, dword ptr [esi]
// 0057a8ea  8b4208               mov eax, dword ptr [edx + 8]
// 0057a8ed  8bce                 mov ecx, esi
// 0057a8ef  ffd0                 call eax
// 0057a8f1  5e                   pop esi
// 0057a8f2  8bc7                 mov eax, edi
// 0057a8f4  5f                   pop edi
// 0057a8f5  c20c00               ret 0xc
// 0057a8f8  8bc7                 mov eax, edi
// 0057a8fa  5f                   pop edi
// 0057a8fb  c20c00               ret 0xc

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
