// from server: 89% by king_originala
// roc 2008-06 00418c90  unit: VCLuaFunction::?$CComAggObject  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00418c90
//
// 00418c90  6aff                 push -1
// 00418c92  6868617c00           push 0x7c6168
// 00418c97  64a100000000         mov eax, dword ptr fs:[0]
// 00418c9d  50                   push eax
// 00418c9e  64892500000000       mov dword ptr fs:[0], esp
// 00418ca5  51                   push ecx
// 00418ca6  56                   push esi
// 00418ca7  57                   push edi
// 00418ca8  8bf9                 mov edi, ecx
// 00418caa  8b442428             mov eax, dword ptr [esp + 0x28]
// 00418cae  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00418cb2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00418cb6  50                   push eax
// 00418cb7  51                   push ecx
// 00418cb8  83ec08               sub esp, 8
// 00418cbb  8bc4                 mov eax, esp
// 00418cbd  8910                 mov dword ptr [eax], edx
// 00418cbf  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00418cc3  894804               mov dword ptr [eax + 4], ecx
// 00418cc6  8b442430             mov eax, dword ptr [esp + 0x30]
// 00418cca  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00418cd2  89642418             mov dword ptr [esp + 0x18], esp
// 00418cd6  85c0                 test eax, eax
// 00418cd8  740c                 je 0x418ce6
// 00418cda  83c004               add eax, 4
// 00418cdd  ba01000000           mov edx, 1
// 00418ce2  f00fc110             lock xadd dword ptr [eax], edx
// 00418ce6  8bcf                 mov ecx, edi
// 00418ce8  e883f4ffff           call 0x418170
// 00418ced  8b742420             mov esi, dword ptr [esp + 0x20]
// 00418cf1  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00418cf9  85f6                 test esi, esi
// 00418cfb  742a                 je 0x418d27
// 00418cfd  8d4604               lea eax, [esi + 4]
// 00418d00  83c9ff               or ecx, 0xffffffff
// 00418d03  f00fc108             lock xadd dword ptr [eax], ecx
// 00418d07  751e                 jne 0x418d27
// 00418d09  8b16                 mov edx, dword ptr [esi]
// 00418d0b  8b4204               mov eax, dword ptr [edx + 4]
// 00418d0e  8bce                 mov ecx, esi
// 00418d10  ffd0                 call eax
// 00418d12  8d4e08               lea ecx, [esi + 8]
// 00418d15  83caff               or edx, 0xffffffff
// 00418d18  f00fc111             lock xadd dword ptr [ecx], edx
// 00418d1c  7509                 jne 0x418d27
// 00418d1e  8b06                 mov eax, dword ptr [esi]
// 00418d20  8b5008               mov edx, dword ptr [eax + 8]
// 00418d23  8bce                 mov ecx, esi
// 00418d25  ffd2                 call edx
// 00418d27  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00418d2b  8bc7                 mov eax, edi
// 00418d2d  5f                   pop edi
// 00418d2e  64890d00000000       mov dword ptr fs:[0], ecx
// 00418d35  5e                   pop esi
// 00418d36  83c410               add esp, 0x10
// 00418d39  c21000               ret 0x10

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    long strong;
    long weak;
};

struct Count
{
    Control* control;

    Count(const Count& other);
    ~Count();
};

inline Count::Count(const Count& other)
    : control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Count::~Count()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Shared
{
    void* object;
    Count count;

    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), count(other.count)
{
}

inline Shared::~Shared()
{
}

struct S
{
    S(Shared value, int a, int b);
    void initialize(Shared value, int a, int b);
};

S::S(Shared value, int a, int b)
{
    initialize(value, a, b);
}
